cmake_minimum_required(VERSION 3.5)
project(shisen_interfaces)

if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)

set(protobuf_MODULE_COMPATIBLE TRUE)
find_package(Protobuf CONFIG REQUIRED)
message(STATUS "Using protobuf ${Protobuf_VERSION}")

find_package(gRPC CONFIG REQUIRED)
message(STATUS "Using gRPC ${gRPC_VERSION}")

file(MAKE_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/proto)
add_custom_command(
  OUTPUT
    "${CMAKE_CURRENT_BINARY_DIR}/proto/shisen.pb.cc"
    "${CMAKE_CURRENT_BINARY_DIR}/proto/shisen.pb.h"
    "${CMAKE_CURRENT_BINARY_DIR}/proto/shisen.grpc.pb.cc"
    "${CMAKE_CURRENT_BINARY_DIR}/proto/shisen.grpc.pb.h"
  COMMAND $<TARGET_FILE:protobuf::protoc>
  ARGS
    --grpc_out "${CMAKE_CURRENT_BINARY_DIR}/proto"
    --cpp_out "${CMAKE_CURRENT_BINARY_DIR}/proto"
    -I ${CMAKE_CURRENT_SOURCE_DIR}/proto
    --plugin=protoc-gen-grpc=$<TARGET_FILE:gRPC::grpc_cpp_plugin>
    ${CMAKE_CURRENT_SOURCE_DIR}/proto/shisen.proto
  DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/proto/shisen.proto
)

add_library(shisen_proto SHARED
  "${CMAKE_CURRENT_BINARY_DIR}/proto/shisen.pb.cc"
  "${CMAKE_CURRENT_BINARY_DIR}/proto/shisen.pb.h"
  "${CMAKE_CURRENT_BINARY_DIR}/proto/shisen.grpc.pb.cc"
  "${CMAKE_CURRENT_BINARY_DIR}/proto/shisen.grpc.pb.h"
)

target_compile_options(shisen_proto PRIVATE -fPIC)
target_compile_features(shisen_proto PUBLIC cxx_std_17)

target_link_libraries(shisen_proto PUBLIC
  protobuf::libprotobuf
)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/CameraConfig.msg"
  "msg/CaptureSetting.msg"
  "msg/Image.msg"
  "msg/SetConfig.msg"
  "srv/ConfigureCaptureSetting.srv")

install (
  DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/proto/
  DESTINATION include/${PROJECT_NAME}
)

install (
  TARGETS shisen_proto
  EXPORT shisen_proto
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
  INCLUDES DESTINATION include
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_export_dependencies(rosidl_default_runtime)

ament_export_dependencies(rosidl_default_runtime protobuf gRPC)
ament_export_targets(shisen_proto HAS_LIBRARY_TARGET)
ament_package()
