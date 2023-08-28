#ifndef STUDENT_SERVICE_TREE
#define STUDENT_SERVICE_TREE

#include "../structures/tree.h"

class StudentServiceTree
{
private:
    Tree *tree = nullptr;

public:
    StudentServiceTree(Tree *tree);
    void print();
    void inorder();
    void preorder();
    void postorder();
    void add();
    void find();
    void remove();
};

#endif
