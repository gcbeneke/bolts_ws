; Auto-generated. Do not edit!


(cl:in-package abb_irb120_support-msg)


;//! \htmlinclude Forces.msg.html

(cl:defclass <Forces> (roslisp-msg-protocol:ros-message)
  ((p
    :reader p
    :initarg :p
    :type (cl:vector cl:float)
   :initform (cl:make-array 3 :element-type 'cl:float :initial-element 0.0)))
)

(cl:defclass Forces (<Forces>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Forces>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Forces)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name abb_irb120_support-msg:<Forces> is deprecated: use abb_irb120_support-msg:Forces instead.")))

(cl:ensure-generic-function 'p-val :lambda-list '(m))
(cl:defmethod p-val ((m <Forces>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader abb_irb120_support-msg:p-val is deprecated.  Use abb_irb120_support-msg:p instead.")
  (p m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Forces>) ostream)
  "Serializes a message object of type '<Forces>"
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-double-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream)))
   (cl:slot-value msg 'p))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Forces>) istream)
  "Deserializes a message object of type '<Forces>"
  (cl:setf (cl:slot-value msg 'p) (cl:make-array 3))
  (cl:let ((vals (cl:slot-value msg 'p)))
    (cl:dotimes (i 3)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-double-float-bits bits)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Forces>)))
  "Returns string type for a message object of type '<Forces>"
  "abb_irb120_support/Forces")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Forces)))
  "Returns string type for a message object of type 'Forces"
  "abb_irb120_support/Forces")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Forces>)))
  "Returns md5sum for a message object of type '<Forces>"
  "1abbaca176899a0863a2922ff57df9ac")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Forces)))
  "Returns md5sum for a message object of type 'Forces"
  "1abbaca176899a0863a2922ff57df9ac")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Forces>)))
  "Returns full string definition for message of type '<Forces>"
  (cl:format cl:nil "float64[3] p~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Forces)))
  "Returns full string definition for message of type 'Forces"
  (cl:format cl:nil "float64[3] p~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Forces>))
  (cl:+ 0
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'p) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 8)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Forces>))
  "Converts a ROS message object to a list"
  (cl:list 'Forces
    (cl:cons ':p (p msg))
))
