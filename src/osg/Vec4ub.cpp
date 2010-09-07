#include <osg/Vec4ub>

extern "C"
{
    // allocator
    osg::Vec4ub* osg_Vec4ub_new()
    {
        return new osg::Vec4ub();
    }

    //disposer
    void osg_Vec4ub_dispose(osg::Vec4ub* ptr)
    {
        delete ptr;
    }

    //setter
    void osg_Vec4ub_set_x(osg::Vec4ub* ptr, unsigned char x)
    {
        ptr->_v[0] = x;
    }
    void osg_Vec4ub_set_y(osg::Vec4ub* ptr, unsigned char y)
    {
        ptr->_v[1] = y;
    }
    void osg_Vec4ub_set_z(osg::Vec4ub* ptr, unsigned char z)
    {
        ptr->_v[2] = z;
    }
    void osg_Vec4ub_set_w(osg::Vec4ub* ptr, unsigned char w)
    {
        ptr->_v[2] = w;
    }

    // getter
    unsigned char osg_Vec4ub_get_x(osg::Vec4ub* ptr)
    {
        return ptr->_v[0];
    }
    unsigned char osg_Vec4ub_get_y(osg::Vec4ub* ptr)
    {
        return ptr->_v[1];
    }
    unsigned char osg_Vec4ub_get_z(osg::Vec4ub* ptr)
    {
        return ptr->_v[2];
    }
    unsigned char osg_Vec4ub_get_w(osg::Vec4ub* ptr)
    {
        return ptr->_v[3];
    }
    
}


