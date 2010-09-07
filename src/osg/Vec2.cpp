#include <osg/Vec2>

extern "C"
{
    // allocator
    osg::Vec2* osg_Vec2_new()
    {
        return new osg::Vec2();
    }
    
    // disposer
    void osg_Vec2_dispose(osg::Vec2* ptr)
    {
        delete ptr;
    }
    
    // setter
    void osg_Vec2_set_x(osg::Vec2* ptr, float x)
    {
        ptr->_v[0] = x;
    }
    void osg_Vec2_set_y(osg::Vec2* ptr, float y)
    {
        ptr->_v[1] = y;
    }
    
    // getter
    float osg_Vec2_get_x(osg::Vec2* ptr)
    {
        return ptr->_v[0];
    }
    float osg_Vec2_get_y(osg::Vec2* ptr)
    {
        return ptr->_v[1];
    }
}

