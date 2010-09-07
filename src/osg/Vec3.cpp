#include <osg/Vec3>

extern "C"
{
    // allocator
    osg::Vec3* osg_Vec3_new()
    {
        return new osg::Vec3();
    }

    //disposer
    void osg_Vec3_dispose(osg::Vec3* ptr)
    {
        delete ptr;
    }

    //setter
    void osg_Vec3_set_x(osg::Vec3* ptr, float x)
    {
        ptr->_v[0] = x;
    }
    void osg_Vec3_set_y(osg::Vec3* ptr, float y)
    {
        ptr->_v[1] = y;
    }
    void osg_Vec3_set_z(osg::Vec3* ptr, float z)
    {
        ptr->_v[2] = z;
    }

    // getter
    float osg_Vec3_get_x(osg::Vec3* ptr)
    {
        return ptr->_v[0];
    }
    float osg_Vec3_get_y(osg::Vec3* ptr)
    {
        return ptr->_v[1];
    }
    float osg_Vec3_get_z(osg::Vec3* ptr)
    {
        return ptr->_v[2];
    }
    
}
