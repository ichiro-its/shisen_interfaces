# generated from rosidl_generator_py/resource/_idl.py.em
# with input from shisen_interfaces:msg/CaptureSetting.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'brightness'
# Member 'contrast'
# Member 'saturation'
# Member 'temperature'
# Member 'hue'
# Member 'gain'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CaptureSetting(type):
    """Metaclass of message 'CaptureSetting'."""

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
                'shisen_interfaces.msg.CaptureSetting')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__capture_setting
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__capture_setting
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__capture_setting
            cls._TYPE_SUPPORT = module.type_support_msg__msg__capture_setting
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__capture_setting

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CaptureSetting(metaclass=Metaclass_CaptureSetting):
    """Message class 'CaptureSetting'."""

    __slots__ = [
        '_brightness',
        '_contrast',
        '_saturation',
        '_temperature',
        '_hue',
        '_gain',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'brightness': 'sequence<int32, 1>',
        'contrast': 'sequence<int32, 1>',
        'saturation': 'sequence<int32, 1>',
        'temperature': 'sequence<int32, 1>',
        'hue': 'sequence<int32, 1>',
        'gain': 'sequence<int32, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.BasicType('int32'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.BasicType('int32'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.BasicType('int32'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.BasicType('int32'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.BasicType('int32'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.BasicType('int32'), 1),  # noqa: E501
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
        self.brightness = array.array('i', kwargs.get('brightness', []))
        self.contrast = array.array('i', kwargs.get('contrast', []))
        self.saturation = array.array('i', kwargs.get('saturation', []))
        self.temperature = array.array('i', kwargs.get('temperature', []))
        self.hue = array.array('i', kwargs.get('hue', []))
        self.gain = array.array('i', kwargs.get('gain', []))

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
        if self.brightness != other.brightness:
            return False
        if self.contrast != other.contrast:
            return False
        if self.saturation != other.saturation:
            return False
        if self.temperature != other.temperature:
            return False
        if self.hue != other.hue:
            return False
        if self.gain != other.gain:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def brightness(self):
        """Message field 'brightness'."""
        return self._brightness

    @brightness.setter
    def brightness(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'i', \
                    "The 'brightness' array.array() must have the type code of 'i'"
                assert len(value) <= 1, \
                    "The 'brightness' array.array() must have a size <= 1"
                self._brightness = value
                return
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'brightness' field must be a set or sequence with length <= 1 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._brightness = array.array('i', value)

    @builtins.property
    def contrast(self):
        """Message field 'contrast'."""
        return self._contrast

    @contrast.setter
    def contrast(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'i', \
                    "The 'contrast' array.array() must have the type code of 'i'"
                assert len(value) <= 1, \
                    "The 'contrast' array.array() must have a size <= 1"
                self._contrast = value
                return
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'contrast' field must be a set or sequence with length <= 1 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._contrast = array.array('i', value)

    @builtins.property
    def saturation(self):
        """Message field 'saturation'."""
        return self._saturation

    @saturation.setter
    def saturation(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'i', \
                    "The 'saturation' array.array() must have the type code of 'i'"
                assert len(value) <= 1, \
                    "The 'saturation' array.array() must have a size <= 1"
                self._saturation = value
                return
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'saturation' field must be a set or sequence with length <= 1 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._saturation = array.array('i', value)

    @builtins.property
    def temperature(self):
        """Message field 'temperature'."""
        return self._temperature

    @temperature.setter
    def temperature(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'i', \
                    "The 'temperature' array.array() must have the type code of 'i'"
                assert len(value) <= 1, \
                    "The 'temperature' array.array() must have a size <= 1"
                self._temperature = value
                return
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'temperature' field must be a set or sequence with length <= 1 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._temperature = array.array('i', value)

    @builtins.property
    def hue(self):
        """Message field 'hue'."""
        return self._hue

    @hue.setter
    def hue(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'i', \
                    "The 'hue' array.array() must have the type code of 'i'"
                assert len(value) <= 1, \
                    "The 'hue' array.array() must have a size <= 1"
                self._hue = value
                return
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'hue' field must be a set or sequence with length <= 1 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._hue = array.array('i', value)

    @builtins.property
    def gain(self):
        """Message field 'gain'."""
        return self._gain

    @gain.setter
    def gain(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'i', \
                    "The 'gain' array.array() must have the type code of 'i'"
                assert len(value) <= 1, \
                    "The 'gain' array.array() must have a size <= 1"
                self._gain = value
                return
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'gain' field must be a set or sequence with length <= 1 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._gain = array.array('i', value)
