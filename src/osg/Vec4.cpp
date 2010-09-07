#include <osg/Vec4>

extern "C"
{
    // allocator
    osg::Vec4* osg_Vec4_new()
    {
        return new osg::Vec4();
    }

    //disposer
    void osg_Vec4_dispose(osg::Vec4* ptr)
    {
        delete ptr;
    }

    //setter
    void osg_Vec4_set_x(osg::Vec4* ptr, float x)
    {
        ptr->_v[0] = x;
    }
    void osg_Vec4_set_y(osg::Vec4* ptr, float y)
    {
        ptr->_v[1] = y;
    }
    void osg_Vec4_set_z(osg::Vec4* ptr, float z)
    {
        ptr->_v[2] = z;
    }
    void osg_Vec4_set_w(osg::Vec4* ptr, float w)
    {
        ptr->_v[2] = w;
    }

    // getter
    float osg_Vec4_get_x(osg::Vec4* ptr)
    {
        return ptr->_v[0];
    }
    float osg_Vec4_get_y(osg::Vec4* ptr)
    {
        return ptr->_v[1];
    }
    float osg_Vec4_get_z(osg::Vec4* ptr)
    {
        return ptr->_v[2];
    }
    float osg_Vec4_get_w(osg::Vec4* ptr)
    {
        return ptr->_v[3];
    }
    
}
