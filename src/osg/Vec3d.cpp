#include <osg/Vec3d>

extern "C"
{
    // allocator
    osg::Vec3d* osg_Vec3d_new()
    {
        return new osg::Vec3d();
    }

    //disposer
    void osg_Vec3d_dispose(osg::Vec3d* ptr)
    {
        delete ptr;
    }

    //setter
    void osg_Vec3d_set_x(osg::Vec3d* ptr, double x)
    {
        ptr->_v[0] = x;
    }
    void osg_Vec3d_set_y(osg::Vec3d* ptr, double y)
    {
        ptr->_v[1] = y;
    }
    void osg_Vec3d_set_z(osg::Vec3d* ptr, double z)
    {
        ptr->_v[2] = z;
    }

    // getter
    double osg_Vec3d_get_x(osg::Vec3d* ptr)
    {
        return ptr->_v[0];
    }
    double osg_Vec3d_get_y(osg::Vec3d* ptr)
    {
        return ptr->_v[1];
    }
    double osg_Vec3d_get_z(osg::Vec3d* ptr)
    {
        return ptr->_v[2];
    }
        
}
