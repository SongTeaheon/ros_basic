
(cl:in-package :asdf)

(defsystem "basic_practice-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "MsgTutorial" :depends-on ("_package_MsgTutorial"))
    (:file "_package_MsgTutorial" :depends-on ("_package"))
  ))