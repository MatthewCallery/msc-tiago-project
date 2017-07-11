# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from pal_motion_model_msgs/MotionModelMap.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg
import nav_msgs.msg
import genpy
import pal_motion_model_msgs.msg
import std_msgs.msg

class MotionModelMap(genpy.Message):
  _md5sum = "b6bcccd2088596e98ba83bc65b2b504e"
  _type = "pal_motion_model_msgs/MotionModelMap"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """#This represents a 2-D motion model map, in which each cell has the probabilistic motion models for the robot.

Header header 

#MetaData for the map
nav_msgs/MapMetaData info

# The map data, in row-major order, starting with (0,0). A list of  models is stored for every cell. 
MotionModelList[] data


================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: nav_msgs/MapMetaData
# This hold basic information about the characterists of the OccupancyGrid

# The time at which the map was loaded
time map_load_time
# The map resolution [m/cell]
float32 resolution
# Map width [cells]
uint32 width
# Map height [cells]
uint32 height
# The origin of the map [m, m, rad].  This is the real-world pose of the
# cell (0,0) in the map.
geometry_msgs/Pose origin
================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of postion and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

================================================================================
MSG: pal_motion_model_msgs/MotionModelList
#list of motion models learnt in a specific place

MotionModel[] models




================================================================================
MSG: pal_motion_model_msgs/MotionModel
## Contains the 2D motion model of a robot at a specific location

#Heading direction is represented through a gaussian pdf.
float32  heading_mean
float32  heading_std_dev

#For statistics we store a pdf over the robot speeds
float32  linear_speed_mean
float32  linear_speed_std_dev
float32  angular_speed_mean
float32  angular_speed_std_dev

"""
  __slots__ = ['header','info','data']
  _slot_types = ['std_msgs/Header','nav_msgs/MapMetaData','pal_motion_model_msgs/MotionModelList[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,info,data

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(MotionModelMap, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.info is None:
        self.info = nav_msgs.msg.MapMetaData()
      if self.data is None:
        self.data = []
    else:
      self.header = std_msgs.msg.Header()
      self.info = nav_msgs.msg.MapMetaData()
      self.data = []

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_struct_3I.pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_2If2I7d.pack(_x.info.map_load_time.secs, _x.info.map_load_time.nsecs, _x.info.resolution, _x.info.width, _x.info.height, _x.info.origin.position.x, _x.info.origin.position.y, _x.info.origin.position.z, _x.info.origin.orientation.x, _x.info.origin.orientation.y, _x.info.origin.orientation.z, _x.info.origin.orientation.w))
      length = len(self.data)
      buff.write(_struct_I.pack(length))
      for val1 in self.data:
        length = len(val1.models)
        buff.write(_struct_I.pack(length))
        for val2 in val1.models:
          _x = val2
          buff.write(_struct_6f.pack(_x.heading_mean, _x.heading_std_dev, _x.linear_speed_mean, _x.linear_speed_std_dev, _x.angular_speed_mean, _x.angular_speed_std_dev))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.info is None:
        self.info = nav_msgs.msg.MapMetaData()
      if self.data is None:
        self.data = None
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 76
      (_x.info.map_load_time.secs, _x.info.map_load_time.nsecs, _x.info.resolution, _x.info.width, _x.info.height, _x.info.origin.position.x, _x.info.origin.position.y, _x.info.origin.position.z, _x.info.origin.orientation.x, _x.info.origin.orientation.y, _x.info.origin.orientation.z, _x.info.origin.orientation.w,) = _struct_2If2I7d.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.data = []
      for i in range(0, length):
        val1 = pal_motion_model_msgs.msg.MotionModelList()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.models = []
        for i in range(0, length):
          val2 = pal_motion_model_msgs.msg.MotionModel()
          _x = val2
          start = end
          end += 24
          (_x.heading_mean, _x.heading_std_dev, _x.linear_speed_mean, _x.linear_speed_std_dev, _x.angular_speed_mean, _x.angular_speed_std_dev,) = _struct_6f.unpack(str[start:end])
          val1.models.append(val2)
        self.data.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_3I.pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_2If2I7d.pack(_x.info.map_load_time.secs, _x.info.map_load_time.nsecs, _x.info.resolution, _x.info.width, _x.info.height, _x.info.origin.position.x, _x.info.origin.position.y, _x.info.origin.position.z, _x.info.origin.orientation.x, _x.info.origin.orientation.y, _x.info.origin.orientation.z, _x.info.origin.orientation.w))
      length = len(self.data)
      buff.write(_struct_I.pack(length))
      for val1 in self.data:
        length = len(val1.models)
        buff.write(_struct_I.pack(length))
        for val2 in val1.models:
          _x = val2
          buff.write(_struct_6f.pack(_x.heading_mean, _x.heading_std_dev, _x.linear_speed_mean, _x.linear_speed_std_dev, _x.angular_speed_mean, _x.angular_speed_std_dev))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.info is None:
        self.info = nav_msgs.msg.MapMetaData()
      if self.data is None:
        self.data = None
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 76
      (_x.info.map_load_time.secs, _x.info.map_load_time.nsecs, _x.info.resolution, _x.info.width, _x.info.height, _x.info.origin.position.x, _x.info.origin.position.y, _x.info.origin.position.z, _x.info.origin.orientation.x, _x.info.origin.orientation.y, _x.info.origin.orientation.z, _x.info.origin.orientation.w,) = _struct_2If2I7d.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.data = []
      for i in range(0, length):
        val1 = pal_motion_model_msgs.msg.MotionModelList()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.models = []
        for i in range(0, length):
          val2 = pal_motion_model_msgs.msg.MotionModel()
          _x = val2
          start = end
          end += 24
          (_x.heading_mean, _x.heading_std_dev, _x.linear_speed_mean, _x.linear_speed_std_dev, _x.angular_speed_mean, _x.angular_speed_std_dev,) = _struct_6f.unpack(str[start:end])
          val1.models.append(val2)
        self.data.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_3I = struct.Struct("<3I")
_struct_6f = struct.Struct("<6f")
_struct_2If2I7d = struct.Struct("<2If2I7d")
