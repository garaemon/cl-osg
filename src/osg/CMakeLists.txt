ADD_LIBRARY(osglib SHARED
Vec2.cpp Vec3.cpp Vec3d.cpp Vec4.cpp Vec4ub.cpp
Group.cpp)
target_link_libraries(osglib osg)
