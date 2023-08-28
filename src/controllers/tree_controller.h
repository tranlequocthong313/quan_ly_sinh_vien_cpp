#include "../structures/tree.h"
#include "../services/student_service_tree.h"

class TreeController
{
private:
    Tree *store;
    StudentServiceTree *service;

public:
    TreeController();
    ~TreeController();
    void print();
    void inorder();
    void preorder();
    void postorder();
    void insert();
    void remove();
    void find();
};
