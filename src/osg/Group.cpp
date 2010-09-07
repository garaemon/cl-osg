#include <osg/Group>
#include <osg/Node>

extern "C"
{
    //allocator
    osg::Group* osg_Group_new()
    {
        return new osg::Group();
    }

    //disposer
    void osg_Group_dispose(osg::Group* ptr)
    {
        //delete ptr;
    }
    
    int osg_Group_add_child(osg::Group* ptr, osg::Node* child)
    {
        // casting bool -> integer
        return ptr->addChild(child);
    }
    
    int osg_Group_insert_child(osg::Group* ptr, unsigned int index, osg::Node* child)
    {
        // casting bool -> integer
        return ptr->insertChild(index, child);
    }
    
    int osg_Group_remove_child(osg::Group* ptr, osg::Node* child)
    {
        // casting bool -> integer
        return ptr->removeChild(child);
    }

    
}
