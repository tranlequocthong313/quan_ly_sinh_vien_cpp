#ifndef TREE_HEADER
#define TREE_HEADER

#include "../models/student.h"
#include "iterator.h"
#include "pushable.h"

class Tree : public Pushable
{
private:
    struct Node
    {
        Student value;
        Node *left = nullptr;
        Node *right = nullptr;

        Node() {}
        Node(Student value) : value(value) {}
    };
    Node *root = nullptr;
    int size = 0;

    void cleanUp(Node *current);
    void pushHelper(Node *&current, Student value);
    void inorderHelper(Node *current, Student *result, int &i);
    void preorderHelper(Node *current, Student *result, int &i);
    void postorderHelper(Node *current, Student *result, int &i);
    bool removeHelper(Node *&current, string id);
    void replace_node(Node *&replaced, Node *&candidate);
    int compareId(string id1, string id2);

    void inorderHelperTest(Node *current);
    void preorderHelperTest(Node *current);
    void postorderHelperTest(Node *current);

public:
    ~Tree();
    void push(Student value);
    Student *inorder();
    Student *preorder();
    Student *postorder();
    Student *find(string id);
    bool remove(string id);
    int getSize();
};

#endif
