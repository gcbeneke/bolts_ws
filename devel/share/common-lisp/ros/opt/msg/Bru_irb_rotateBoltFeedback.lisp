; Auto-generated. Do not edit!


(cl:in-package opt-msg)


;//! \htmlinclude Bru_irb_rotateBoltFeedback.msg.html

(cl:defclass <Bru_irb_rotateBoltFeedback> (roslisp-msg-protocol:ros-message)
  ((time_elapsed
    :reader time_elapsed
    :initarg :time_elapsed
    :type cl:real
    :initform 0))
)

(cl:defclass Bru_irb_rotateBoltFeedback (<Bru_irb_rotateBoltFeedback>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Bru_irb_rotateBoltFeedback>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Bru_irb_rotateBoltFeedback)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name opt-msg:<Bru_irb_rotateBoltFeedback> is deprecated: use opt-msg:Bru_irb_rotateBoltFeedback instead.")))

(cl:ensure-generic-function 'time_elapsed-val :lambda-list '(m))
(cl:defmethod time_elapsed-val ((m <Bru_irb_rotateBoltFeedback>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader opt-msg:time_elapsed-val is deprecated.  Use opt-msg:time_elapsed instead.")
  (time_elapsed m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Bru_irb_rotateBoltFeedback>) ostream)
  "Serializes a message object of type '<Bru_irb_rotateBoltFeedback>"
  (cl:let ((__sec (cl:floor (cl:slot-value msg 'time_elapsed)))
        (__nsec (cl:round (cl:* 1e9 (cl:- (cl:slot-value msg 'time_elapsed) (cl:floor (cl:slot-value msg 'time_elapsed)))))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 0) __nsec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __nsec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __nsec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __nsec) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Bru_irb_rotateBoltFeedback>) istream)
  "Deserializes a message object of type '<Bru_irb_rotateBoltFeedback>"
    (cl:let ((__sec 0) (__nsec 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 0) __nsec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __nsec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __nsec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __nsec) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'time_elapsed) (cl:+ (cl:coerce __sec 'cl:double-float) (cl:/ __nsec 1e9))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Bru_irb_rotateBoltFeedback>)))
  "Returns string type for a message object of type '<Bru_irb_rotateBoltFeedback>"
  "opt/Bru_irb_rotateBoltFeedback")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Bru_irb_rotateBoltFeedback)))
  "Returns string type for a message object of type 'Bru_irb_rotateBoltFeedback"
  "opt/Bru_irb_rotateBoltFeedback")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Bru_irb_rotateBoltFeedback>)))
  "Returns md5sum for a message object of type '<Bru_irb_rotateBoltFeedback>"
  "5cf2a912daf51cc83cb45e261a19d4f1")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Bru_irb_rotateBoltFeedback)))
  "Returns md5sum for a message object of type 'Bru_irb_rotateBoltFeedback"
  "5cf2a912daf51cc83cb45e261a19d4f1")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Bru_irb_rotateBoltFeedback>)))
  "Returns full string definition for message of type '<Bru_irb_rotateBoltFeedback>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Part 3: the feedback,to be sent periodically by server~%#~%# The amount of time elapsed from the start~%duration time_elapsed~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Bru_irb_rotateBoltFeedback)))
  "Returns full string definition for message of type 'Bru_irb_rotateBoltFeedback"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Part 3: the feedback,to be sent periodically by server~%#~%# The amount of time elapsed from the start~%duration time_elapsed~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Bru_irb_rotateBoltFeedback>))
  (cl:+ 0
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Bru_irb_rotateBoltFeedback>))
  "Converts a ROS message object to a list"
  (cl:list 'Bru_irb_rotateBoltFeedback
    (cl:cons ':time_elapsed (time_elapsed msg))
))
