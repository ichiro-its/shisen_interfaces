#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "shisen_interfaces::shisen_proto" for configuration ""
set_property(TARGET shisen_interfaces::shisen_proto APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(shisen_interfaces::shisen_proto PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libshisen_proto.so"
  IMPORTED_SONAME_NOCONFIG "libshisen_proto.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS shisen_interfaces::shisen_proto )
list(APPEND _IMPORT_CHECK_FILES_FOR_shisen_interfaces::shisen_proto "${_IMPORT_PREFIX}/lib/libshisen_proto.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
