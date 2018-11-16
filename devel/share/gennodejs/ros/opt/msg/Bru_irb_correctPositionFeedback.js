// Auto-generated. Do not edit!

// (in-package opt.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class Bru_irb_correctPositionFeedback {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.time_elapsed = null;
    }
    else {
      if (initObj.hasOwnProperty('time_elapsed')) {
        this.time_elapsed = initObj.time_elapsed
      }
      else {
        this.time_elapsed = {secs: 0, nsecs: 0};
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Bru_irb_correctPositionFeedback
    // Serialize message field [time_elapsed]
    bufferOffset = _serializer.duration(obj.time_elapsed, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Bru_irb_correctPositionFeedback
    let len;
    let data = new Bru_irb_correctPositionFeedback(null);
    // Deserialize message field [time_elapsed]
    data.time_elapsed = _deserializer.duration(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 8;
  }

  static datatype() {
    // Returns string type for a message object
    return 'opt/Bru_irb_correctPositionFeedback';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '5cf2a912daf51cc83cb45e261a19d4f1';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    # Part 3: the feedback,to be sent periodically by server
    #
    # The amount of time elapsed from the start
    duration time_elapsed
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new Bru_irb_correctPositionFeedback(null);
    if (msg.time_elapsed !== undefined) {
      resolved.time_elapsed = msg.time_elapsed;
    }
    else {
      resolved.time_elapsed = {secs: 0, nsecs: 0}
    }

    return resolved;
    }
};

module.exports = Bru_irb_correctPositionFeedback;
