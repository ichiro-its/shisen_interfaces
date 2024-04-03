# generated from rosidl_generator_py/resource/_idl.py.em
# with input from shisen_interfaces:srv/ConfigureCaptureSetting.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ConfigureCaptureSetting_Request(type):
    """Metaclass of message 'ConfigureCaptureSetting_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('shisen_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'shisen_interfaces.srv.ConfigureCaptureSetting_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__configure_capture_setting__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__configure_capture_setting__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__configure_capture_setting__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__configure_capture_setting__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__configure_capture_setting__request

            from shisen_interfaces.msg import CaptureSetting
            if CaptureSetting.__class__._TYPE_SUPPORT is None:
                CaptureSetting.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ConfigureCaptureSetting_Request(metaclass=Metaclass_ConfigureCaptureSetting_Request):
    """Message class 'ConfigureCaptureSetting_Request'."""

    __slots__ = [
        '_capture_setting',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'capture_setting': 'sequence<shisen_interfaces/CaptureSetting, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['shisen_interfaces', 'msg'], 'CaptureSetting'), 1),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.capture_setting = kwargs.get('capture_setting', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.capture_setting != other.capture_setting:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def capture_setting(self):
        """Message field 'capture_setting'."""
        return self._capture_setting

    @capture_setting.setter
    def capture_setting(self, value):
        if self._check_fields:
            from shisen_interfaces.msg import CaptureSetting
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, CaptureSetting) for v in value) and
                 True), \
                "The 'capture_setting' field must be a set or sequence with length <= 1 and each value of type 'CaptureSetting'"
        self._capture_setting = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ConfigureCaptureSetting_Response(type):
    """Metaclass of message 'ConfigureCaptureSetting_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('shisen_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'shisen_interfaces.srv.ConfigureCaptureSetting_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__configure_capture_setting__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__configure_capture_setting__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__configure_capture_setting__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__configure_capture_setting__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__configure_capture_setting__response

            from shisen_interfaces.msg import CaptureSetting
            if CaptureSetting.__class__._TYPE_SUPPORT is None:
                CaptureSetting.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ConfigureCaptureSetting_Response(metaclass=Metaclass_ConfigureCaptureSetting_Response):
    """Message class 'ConfigureCaptureSetting_Response'."""

    __slots__ = [
        '_capture_setting',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'capture_setting': 'sequence<shisen_interfaces/CaptureSetting, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['shisen_interfaces', 'msg'], 'CaptureSetting'), 1),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.capture_setting = kwargs.get('capture_setting', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.capture_setting != other.capture_setting:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def capture_setting(self):
        """Message field 'capture_setting'."""
        return self._capture_setting

    @capture_setting.setter
    def capture_setting(self, value):
        if self._check_fields:
            from shisen_interfaces.msg import CaptureSetting
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, CaptureSetting) for v in value) and
                 True), \
                "The 'capture_setting' field must be a set or sequence with length <= 1 and each value of type 'CaptureSetting'"
        self._capture_setting = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ConfigureCaptureSetting_Event(type):
    """Metaclass of message 'ConfigureCaptureSetting_Event'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('shisen_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'shisen_interfaces.srv.ConfigureCaptureSetting_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__configure_capture_setting__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__configure_capture_setting__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__configure_capture_setting__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__configure_capture_setting__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__configure_capture_setting__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ConfigureCaptureSetting_Event(metaclass=Metaclass_ConfigureCaptureSetting_Event):
    """Message class 'ConfigureCaptureSetting_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<shisen_interfaces/ConfigureCaptureSetting_Request, 1>',
        'response': 'sequence<shisen_interfaces/ConfigureCaptureSetting_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['shisen_interfaces', 'srv'], 'ConfigureCaptureSetting_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['shisen_interfaces', 'srv'], 'ConfigureCaptureSetting_Response'), 1),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from shisen_interfaces.srv import ConfigureCaptureSetting_Request
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, ConfigureCaptureSetting_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'ConfigureCaptureSetting_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from shisen_interfaces.srv import ConfigureCaptureSetting_Response
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, ConfigureCaptureSetting_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'ConfigureCaptureSetting_Response'"
        self._response = value


class Metaclass_ConfigureCaptureSetting(type):
    """Metaclass of service 'ConfigureCaptureSetting'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('shisen_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'shisen_interfaces.srv.ConfigureCaptureSetting')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__configure_capture_setting

            from shisen_interfaces.srv import _configure_capture_setting
            if _configure_capture_setting.Metaclass_ConfigureCaptureSetting_Request._TYPE_SUPPORT is None:
                _configure_capture_setting.Metaclass_ConfigureCaptureSetting_Request.__import_type_support__()
            if _configure_capture_setting.Metaclass_ConfigureCaptureSetting_Response._TYPE_SUPPORT is None:
                _configure_capture_setting.Metaclass_ConfigureCaptureSetting_Response.__import_type_support__()
            if _configure_capture_setting.Metaclass_ConfigureCaptureSetting_Event._TYPE_SUPPORT is None:
                _configure_capture_setting.Metaclass_ConfigureCaptureSetting_Event.__import_type_support__()


class ConfigureCaptureSetting(metaclass=Metaclass_ConfigureCaptureSetting):
    from shisen_interfaces.srv._configure_capture_setting import ConfigureCaptureSetting_Request as Request
    from shisen_interfaces.srv._configure_capture_setting import ConfigureCaptureSetting_Response as Response
    from shisen_interfaces.srv._configure_capture_setting import ConfigureCaptureSetting_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
