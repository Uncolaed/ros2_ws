# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interface:msg/Temprature.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Temprature(type):
    """Metaclass of message 'Temprature'."""

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
            module = import_type_support('interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interface.msg.Temprature')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__temprature
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__temprature
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__temprature
            cls._TYPE_SUPPORT = module.type_support_msg__msg__temprature
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__temprature

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Temprature(metaclass=Metaclass_Temprature):
    """Message class 'Temprature'."""

    __slots__ = [
        '_sensor_name',
        '_temprature_value',
        '_unit',
    ]

    _fields_and_field_types = {
        'sensor_name': 'string',
        'temprature_value': 'double',
        'unit': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sensor_name = kwargs.get('sensor_name', str())
        self.temprature_value = kwargs.get('temprature_value', float())
        self.unit = kwargs.get('unit', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.sensor_name != other.sensor_name:
            return False
        if self.temprature_value != other.temprature_value:
            return False
        if self.unit != other.unit:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def sensor_name(self):
        """Message field 'sensor_name'."""
        return self._sensor_name

    @sensor_name.setter
    def sensor_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'sensor_name' field must be of type 'str'"
        self._sensor_name = value

    @builtins.property
    def temprature_value(self):
        """Message field 'temprature_value'."""
        return self._temprature_value

    @temprature_value.setter
    def temprature_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temprature_value' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'temprature_value' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._temprature_value = value

    @builtins.property
    def unit(self):
        """Message field 'unit'."""
        return self._unit

    @unit.setter
    def unit(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'unit' field must be of type 'str'"
        self._unit = value
