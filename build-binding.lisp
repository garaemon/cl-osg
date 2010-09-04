(require :asdf)
(require :verrazano)

(in-package #:verrazano-user)

(defun generate-binding* (name headers &rest args
                          &key (working-directory
                                (verrazano::system-relative-pathname
                                 :verrazano "example-bindings/"))
                          (gccxml-flags "-I/usr/include")
                          &allow-other-keys)
  (format *debug-io* "~%~%; *** Processing binding ~S~%" name)
  (remove-from-plistf args :working-directory :gccxml-flags)
  (block try
    (handler-bind ((serious-condition
                    (lambda (error)
                      (warn "Failed to generated binding for ~S, error: ~A"
                            name error)
                      (return-from try))))
      (let ((*print-right-margin* 100))
        (generate-binding (append
                           (list :cffi
                                 :package-name name
                                 :input-files headers
                                 :working-directory working-directory
                                 :gccxml-flags gccxml-flags
                                 :gccxml-path "/usr/bin/gccxml"
                                 )
                           args)
                          :keep-temporary-files nil))))
  (values))

(defun generate-osg-binding ()
  (generate-binding*
   :osg-cffi-bindings
   '("osg/Vec2" "osg/Vec2b" "osg/Vec2d" "osg/Vec2f" "osg/Vec2s"
     "osg/Vec3" "osg/Vec3b" "osg/Vec3d" "osg/Vec3f" "osg/Vec3s"
     "osg/Vec4" "osg/Vec4b" "osg/Vec4d" "osg/Vec4f" "osg/Vec4s" "osg/Vec4ub"
     "osg/Node" "osg/Group" "osg/Geode" "osg/Geometry" "osg/Texture2D"
     "osg/PositionAttitudeTransform")
   :working-directory #p"./"
   ))

(defun generate-osg-viewer-binding ()
  (generate-binding*
   :osg-viewer-cffi-bindings
   '("osgViewer/Viewer")
   :working-directory #p"./"
   ))

(defun generate-osg-db-binding ()
  (generate-binding*
   :osg-db-cffi-bindings
   '("osgDB/RealFile")
   :working-directory #p"./"
   ))

(defun generate-osg-ga-binding ()
  (generate-binding*
   :osg-ga-cffi-bindings
   '("osgGA/TrackballManipulator")
   :working-directory #p"./"
   ))

;; patching verrazano to run generate-bind
(defun verrazano::ensure-gccxml-is-installed ()
  t)

(generate-osg-binding)
(generate-osg-viewer-binding)
(generate-osg-db-binding)
(generate-osg-ga-binding)
;;(cl-user:quit)
