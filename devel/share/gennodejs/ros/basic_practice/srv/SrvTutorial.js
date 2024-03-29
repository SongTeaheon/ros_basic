// Auto-generated. Do not edit!

// (in-package basic_practice.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------


//-----------------------------------------------------------

class SrvTutorialRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.a = null;
      this.b = null;
      this.srv_operator = null;
    }
    else {
      if (initObj.hasOwnProperty('a')) {
        this.a = initObj.a
      }
      else {
        this.a = 0;
      }
      if (initObj.hasOwnProperty('b')) {
        this.b = initObj.b
      }
      else {
        this.b = 0;
      }
      if (initObj.hasOwnProperty('srv_operator')) {
        this.srv_operator = initObj.srv_operator
      }
      else {
        this.srv_operator = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SrvTutorialRequest
    // Serialize message field [a]
    bufferOffset = _serializer.int64(obj.a, buffer, bufferOffset);
    // Serialize message field [b]
    bufferOffset = _serializer.int64(obj.b, buffer, bufferOffset);
    // Serialize message field [srv_operator]
    bufferOffset = _serializer.int64(obj.srv_operator, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SrvTutorialRequest
    let len;
    let data = new SrvTutorialRequest(null);
    // Deserialize message field [a]
    data.a = _deserializer.int64(buffer, bufferOffset);
    // Deserialize message field [b]
    data.b = _deserializer.int64(buffer, bufferOffset);
    // Deserialize message field [srv_operator]
    data.srv_operator = _deserializer.int64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 24;
  }

  static datatype() {
    // Returns string type for a service object
    return 'basic_practice/SrvTutorialRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '3596c62e9d99a0249eb11163d8db282d';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    int64 a
    int64 b
    int64 srv_operator
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new SrvTutorialRequest(null);
    if (msg.a !== undefined) {
      resolved.a = msg.a;
    }
    else {
      resolved.a = 0
    }

    if (msg.b !== undefined) {
      resolved.b = msg.b;
    }
    else {
      resolved.b = 0
    }

    if (msg.srv_operator !== undefined) {
      resolved.srv_operator = msg.srv_operator;
    }
    else {
      resolved.srv_operator = 0
    }

    return resolved;
    }
};

class SrvTutorialResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.result = null;
    }
    else {
      if (initObj.hasOwnProperty('result')) {
        this.result = initObj.result
      }
      else {
        this.result = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SrvTutorialResponse
    // Serialize message field [result]
    bufferOffset = _serializer.int64(obj.result, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SrvTutorialResponse
    let len;
    let data = new SrvTutorialResponse(null);
    // Deserialize message field [result]
    data.result = _deserializer.int64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 8;
  }

  static datatype() {
    // Returns string type for a service object
    return 'basic_practice/SrvTutorialResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '9b05623554ab950ed237d43d45f0b4dd';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    int64 result
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new SrvTutorialResponse(null);
    if (msg.result !== undefined) {
      resolved.result = msg.result;
    }
    else {
      resolved.result = 0
    }

    return resolved;
    }
};

module.exports = {
  Request: SrvTutorialRequest,
  Response: SrvTutorialResponse,
  md5sum() { return '3ff5c1f5bf57cd2886657c54a4dbd8fd'; },
  datatype() { return 'basic_practice/SrvTutorial'; }
};
