;; Auto-generated. Do not edit!


(when (boundp 'basic_practice::SrvTutorial)
  (if (not (find-package "BASIC_PRACTICE"))
    (make-package "BASIC_PRACTICE"))
  (shadow 'SrvTutorial (find-package "BASIC_PRACTICE")))
(unless (find-package "BASIC_PRACTICE::SRVTUTORIAL")
  (make-package "BASIC_PRACTICE::SRVTUTORIAL"))
(unless (find-package "BASIC_PRACTICE::SRVTUTORIALREQUEST")
  (make-package "BASIC_PRACTICE::SRVTUTORIALREQUEST"))
(unless (find-package "BASIC_PRACTICE::SRVTUTORIALRESPONSE")
  (make-package "BASIC_PRACTICE::SRVTUTORIALRESPONSE"))

(in-package "ROS")





(defclass basic_practice::SrvTutorialRequest
  :super ros::object
  :slots (_a _b _srv_operator ))

(defmethod basic_practice::SrvTutorialRequest
  (:init
   (&key
    ((:a __a) 0)
    ((:b __b) 0)
    ((:srv_operator __srv_operator) 0)
    )
   (send-super :init)
   (setq _a (round __a))
   (setq _b (round __b))
   (setq _srv_operator (round __srv_operator))
   self)
  (:a
   (&optional __a)
   (if __a (setq _a __a)) _a)
  (:b
   (&optional __b)
   (if __b (setq _b __b)) _b)
  (:srv_operator
   (&optional __srv_operator)
   (if __srv_operator (setq _srv_operator __srv_operator)) _srv_operator)
  (:serialization-length
   ()
   (+
    ;; int64 _a
    8
    ;; int64 _b
    8
    ;; int64 _srv_operator
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int64 _a
#+(or :alpha :irix6 :x86_64)
       (progn (sys::poke _a (send s :buffer) (send s :count) :long) (incf (stream-count s) 8))
#-(or :alpha :irix6 :x86_64)
       (cond ((and (class _a) (= (length (_a . bv)) 2)) ;; bignum
              (write-long (ash (elt (_a . bv) 0) 0) s)
              (write-long (ash (elt (_a . bv) 1) -1) s))
             ((and (class _a) (= (length (_a . bv)) 1)) ;; big1
              (write-long (elt (_a . bv) 0) s)
              (write-long (if (>= _a 0) 0 #xffffffff) s))
             (t                                         ;; integer
              (write-long _a s)(write-long (if (>= _a 0) 0 #xffffffff) s)))
     ;; int64 _b
#+(or :alpha :irix6 :x86_64)
       (progn (sys::poke _b (send s :buffer) (send s :count) :long) (incf (stream-count s) 8))
#-(or :alpha :irix6 :x86_64)
       (cond ((and (class _b) (= (length (_b . bv)) 2)) ;; bignum
              (write-long (ash (elt (_b . bv) 0) 0) s)
              (write-long (ash (elt (_b . bv) 1) -1) s))
             ((and (class _b) (= (length (_b . bv)) 1)) ;; big1
              (write-long (elt (_b . bv) 0) s)
              (write-long (if (>= _b 0) 0 #xffffffff) s))
             (t                                         ;; integer
              (write-long _b s)(write-long (if (>= _b 0) 0 #xffffffff) s)))
     ;; int64 _srv_operator
#+(or :alpha :irix6 :x86_64)
       (progn (sys::poke _srv_operator (send s :buffer) (send s :count) :long) (incf (stream-count s) 8))
#-(or :alpha :irix6 :x86_64)
       (cond ((and (class _srv_operator) (= (length (_srv_operator . bv)) 2)) ;; bignum
              (write-long (ash (elt (_srv_operator . bv) 0) 0) s)
              (write-long (ash (elt (_srv_operator . bv) 1) -1) s))
             ((and (class _srv_operator) (= (length (_srv_operator . bv)) 1)) ;; big1
              (write-long (elt (_srv_operator . bv) 0) s)
              (write-long (if (>= _srv_operator 0) 0 #xffffffff) s))
             (t                                         ;; integer
              (write-long _srv_operator s)(write-long (if (>= _srv_operator 0) 0 #xffffffff) s)))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int64 _a
#+(or :alpha :irix6 :x86_64)
      (setf _a (prog1 (sys::peek buf ptr- :long) (incf ptr- 8)))
#-(or :alpha :irix6 :x86_64)
      (setf _a (let ((b0 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4)))
                  (b1 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4))))
              (cond ((= b1 -1) b0)
                     ((and (= b1  0)
                           (<= lisp::most-negative-fixnum b0 lisp::most-positive-fixnum))
                      b0)
                    ((= b1  0) (make-instance bignum :size 1 :bv (integer-vector b0)))
                    (t (make-instance bignum :size 2 :bv (integer-vector b0 (ash b1 1)))))))
   ;; int64 _b
#+(or :alpha :irix6 :x86_64)
      (setf _b (prog1 (sys::peek buf ptr- :long) (incf ptr- 8)))
#-(or :alpha :irix6 :x86_64)
      (setf _b (let ((b0 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4)))
                  (b1 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4))))
              (cond ((= b1 -1) b0)
                     ((and (= b1  0)
                           (<= lisp::most-negative-fixnum b0 lisp::most-positive-fixnum))
                      b0)
                    ((= b1  0) (make-instance bignum :size 1 :bv (integer-vector b0)))
                    (t (make-instance bignum :size 2 :bv (integer-vector b0 (ash b1 1)))))))
   ;; int64 _srv_operator
#+(or :alpha :irix6 :x86_64)
      (setf _srv_operator (prog1 (sys::peek buf ptr- :long) (incf ptr- 8)))
#-(or :alpha :irix6 :x86_64)
      (setf _srv_operator (let ((b0 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4)))
                  (b1 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4))))
              (cond ((= b1 -1) b0)
                     ((and (= b1  0)
                           (<= lisp::most-negative-fixnum b0 lisp::most-positive-fixnum))
                      b0)
                    ((= b1  0) (make-instance bignum :size 1 :bv (integer-vector b0)))
                    (t (make-instance bignum :size 2 :bv (integer-vector b0 (ash b1 1)))))))
   ;;
   self)
  )

(defclass basic_practice::SrvTutorialResponse
  :super ros::object
  :slots (_result ))

(defmethod basic_practice::SrvTutorialResponse
  (:init
   (&key
    ((:result __result) 0)
    )
   (send-super :init)
   (setq _result (round __result))
   self)
  (:result
   (&optional __result)
   (if __result (setq _result __result)) _result)
  (:serialization-length
   ()
   (+
    ;; int64 _result
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int64 _result
#+(or :alpha :irix6 :x86_64)
       (progn (sys::poke _result (send s :buffer) (send s :count) :long) (incf (stream-count s) 8))
#-(or :alpha :irix6 :x86_64)
       (cond ((and (class _result) (= (length (_result . bv)) 2)) ;; bignum
              (write-long (ash (elt (_result . bv) 0) 0) s)
              (write-long (ash (elt (_result . bv) 1) -1) s))
             ((and (class _result) (= (length (_result . bv)) 1)) ;; big1
              (write-long (elt (_result . bv) 0) s)
              (write-long (if (>= _result 0) 0 #xffffffff) s))
             (t                                         ;; integer
              (write-long _result s)(write-long (if (>= _result 0) 0 #xffffffff) s)))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int64 _result
#+(or :alpha :irix6 :x86_64)
      (setf _result (prog1 (sys::peek buf ptr- :long) (incf ptr- 8)))
#-(or :alpha :irix6 :x86_64)
      (setf _result (let ((b0 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4)))
                  (b1 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4))))
              (cond ((= b1 -1) b0)
                     ((and (= b1  0)
                           (<= lisp::most-negative-fixnum b0 lisp::most-positive-fixnum))
                      b0)
                    ((= b1  0) (make-instance bignum :size 1 :bv (integer-vector b0)))
                    (t (make-instance bignum :size 2 :bv (integer-vector b0 (ash b1 1)))))))
   ;;
   self)
  )

(defclass basic_practice::SrvTutorial
  :super ros::object
  :slots ())

(setf (get basic_practice::SrvTutorial :md5sum-) "3ff5c1f5bf57cd2886657c54a4dbd8fd")
(setf (get basic_practice::SrvTutorial :datatype-) "basic_practice/SrvTutorial")
(setf (get basic_practice::SrvTutorial :request) basic_practice::SrvTutorialRequest)
(setf (get basic_practice::SrvTutorial :response) basic_practice::SrvTutorialResponse)

(defmethod basic_practice::SrvTutorialRequest
  (:response () (instance basic_practice::SrvTutorialResponse :init)))

(setf (get basic_practice::SrvTutorialRequest :md5sum-) "3ff5c1f5bf57cd2886657c54a4dbd8fd")
(setf (get basic_practice::SrvTutorialRequest :datatype-) "basic_practice/SrvTutorialRequest")
(setf (get basic_practice::SrvTutorialRequest :definition-)
      "int64 a
int64 b
int64 srv_operator
---
int64 result

")

(setf (get basic_practice::SrvTutorialResponse :md5sum-) "3ff5c1f5bf57cd2886657c54a4dbd8fd")
(setf (get basic_practice::SrvTutorialResponse :datatype-) "basic_practice/SrvTutorialResponse")
(setf (get basic_practice::SrvTutorialResponse :definition-)
      "int64 a
int64 b
int64 srv_operator
---
int64 result

")



(provide :basic_practice/SrvTutorial "3ff5c1f5bf57cd2886657c54a4dbd8fd")


