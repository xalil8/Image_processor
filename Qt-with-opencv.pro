QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    opencvqt.cpp

HEADERS += \
    opencvqt.h

FORMS += \
    opencvqt.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

INCLUDEPATH +=/home/aozcan/Downloads/opencv-3.4/build/include
LIBS += -L"/home/aozcan/Downloads/opencv-3.4/build/lib/"
LIBS += -lopencv_aruco
LIBS += -lopencv_bgsegm
LIBS += -lopencv_bioinspired
LIBS += -lopencv_calib3d
LIBS += -lopencv_ccalib
LIBS += -lopencv_core
LIBS += -lopencv_cvv
LIBS += -lopencv_datasets
LIBS += -lopencv_dnn_objdetect
LIBS += -lopencv_dnn
LIBS += -lopencv_dpm
LIBS += -lopencv_face
LIBS += -lopencv_features2d
LIBS += -lopencv_flann
LIBS += -lopencv_fuzzy
LIBS += -lopencv_hfs
LIBS += -lopencv_highgui
LIBS += -lopencv_img_hash
LIBS += -lopencv_imgcodecs
LIBS += -lopencv_imgproc
LIBS += -lopencv_line_descriptor
LIBS += -lopencv_ml
LIBS += -lopencv_objdetect
LIBS += -lopencv_optflow
LIBS += -lopencv_phase_unwrapping
LIBS += -lopencv_photo
LIBS += -lopencv_plot
LIBS += -lopencv_reg
LIBS += -lopencv_rgbd
LIBS += -lopencv_saliency
LIBS += -lopencv_shape
LIBS += -lopencv_stereo
LIBS += -lopencv_stitching
LIBS += -lopencv_structured_light
LIBS += -lopencv_superres
LIBS += -lopencv_surface_matching
LIBS += -lopencv_text
LIBS += -lopencv_tracking
LIBS += -lopencv_video
LIBS += -lopencv_videoio
LIBS += -lopencv_videostab
LIBS += -lopencv_xfeatures2d
LIBS += -lopencv_ximgproc
LIBS += -lopencv_xobjdetect
LIBS += -lopencv_xphoto
