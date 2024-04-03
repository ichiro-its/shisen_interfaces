# generated from rosidl_generator_py/resource/_idl.py.em
# with input from shisen_interfaces:msg/CameraConfig.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CameraConfig(type):
    """Metaclass of message 'CameraConfig'."""

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
                'shisen_interfaces.msg.CameraConfig')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__camera_config
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__camera_config
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__camera_config
            cls._TYPE_SUPPORT = module.type_support_msg__msg__camera_config
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__camera_config

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'WIDTH__DEFAULT': 320,
            'HEIGHT__DEFAULT': 240,
            'V_ANGLE__DEFAULT': -1.0,
            'H_ANGLE__DEFAULT': -1.0,
        }

    @property
    def WIDTH__DEFAULT(cls):
        """Return default value for message field 'width'."""
        return 320

    @property
    def HEIGHT__DEFAULT(cls):
        """Return default value for message field 'height'."""
        return 240

    @property
    def V_ANGLE__DEFAULT(cls):
        """Return default value for message field 'v_angle'."""
        return -1.0

    @property
    def H_ANGLE__DEFAULT(cls):
        """Return default value for message field 'h_angle'."""
        return -1.0


class CameraConfig(metaclass=Metaclass_CameraConfig):
    """Message class 'CameraConfig'."""

    __slots__ = [
        '_width',
        '_height',
        '_v_angle',
        '_h_angle',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'width': 'int32',
        'height': 'int32',
        'v_angle': 'float',
        'h_angle': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        self.width = kwargs.get(
            'width', CameraConfig.WIDTH__DEFAULT)
        self.height = kwargs.get(
            'height', CameraConfig.HEIGHT__DEFAULT)
        self.v_angle = kwargs.get(
            'v_angle', CameraConfig.V_ANGLE__DEFAULT)
        self.h_angle = kwargs.get(
            'h_angle', CameraConfig.H_ANGLE__DEFAULT)

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
        if self.width != other.width:
            return False
        if self.height != other.height:
            return False
        if self.v_angle != other.v_angle:
            return False
        if self.h_angle != other.h_angle:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def width(self):
        """Message field 'width'."""
        return self._width

    @width.setter
    def width(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'width' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'width' field must be an integer in [-2147483648, 2147483647]"
        self._width = value

    @builtins.property
    def height(self):
        """Message field 'height'."""
        return self._height

    @height.setter
    def height(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'height' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'height' field must be an integer in [-2147483648, 2147483647]"
        self._height = value

    @builtins.property
    def v_angle(self):
        """Message field 'v_angle'."""
        return self._v_angle

    @v_angle.setter
    def v_angle(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'v_angle' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'v_angle' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._v_angle = value

    @builtins.property
    def h_angle(self):
        """Message field 'h_angle'."""
        return self._h_angle

    @h_angle.setter
    def h_angle(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'h_angle' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'h_angle' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._h_angle = value
