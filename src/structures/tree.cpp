#include "tree.h"

Tree::~Tree()
{
    cleanUp(root);
}

void Tree::cleanUp(Node *current)
{
    if (!current)
    {
        return;
    }
    cleanUp(current->left);
    cleanUp(current->right);
    delete current;
}

int Tree::compareId(string id1, string id2)
{
    for (auto i = 0; i < id1.size(); i++)
    {
        if (id1[i] > id2[i])
        {
            return 1;
        }
        else if (id1[i] < id2[i])
        {
            return -1;
        }
    }
    return 0;
}

void Tree::pushHelper(Node *&current, Student value)
{
    if (!current)
    {
        current = new Node(value);
        size++;
        return;
    }
    if (compareId(current->value.getId(), value.getId()) == 1)
    {
        pushHelper(current->left, value);
    }
    else
    {
        pushHelper(current->right, value);
    }
}

void Tree::push(Student value)
{
    pushHelper(root, value);
}

void Tree::inorderHelper(Node *current, Student *result, int &i)
{
    if (!current || i >= size)
    {
        return;
    }
    inorderHelper(current->left, result, i);
    result[i] = current->value;
    i++;
    inorderHelper(current->right, result, i);
}

Student *Tree::inorder()
{
    Student *result = new Student[size];
    int i = 0;
    inorderHelper(root, result, i);
    return result;
}

void Tree::preorderHelper(Node *current, Student *result, int &i)
{
    if (!current || i >= size)
    {
        return;
    }
    result[i] = current->value;
    i++;
    preorderHelper(current->left, result, i);
    preorderHelper(current->right, result, i);
}

Student *Tree::preorder()
{
    Student *result = new Student[size];
    int i = 0;
    preorderHelper(root, result, i);
    return result;
}

void Tree::postorderHelper(Node *current, Student *result, int &i)
{
    if (!current || i >= size)
    {
        return;
    }
    postorderHelper(current->left, result, i);
    postorderHelper(current->right, result, i);
    result[i] = current->value;
    i++;
}

Student *Tree::postorder()
{
    Student *result = new Student[size];
    int i = 0;
    postorderHelper(root, result, i);
    return result;
}

int Tree::getSize()
{
    return size;
}

Student *Tree::find(string id)
{
    auto current = root;
    while (current)
    {
        if (compareId(current->value.getId(), id) == 0)
        {
            return &current->value;
        }
        if (compareId(current->value.getId(), id) == 1)
        {
            current = current->left;
        }
        else
        {
            current = current->right;
        }
    }
    return nullptr;
}

void Tree::replace_node(Node *&replaced, Node *&candidate)
{
    if (!candidate->left)
    {
        replaced->value = candidate->value;
        replaced = candidate;
        candidate = candidate->right;
    }
    else
    {
        replace_node(replaced, candidate->left);
    }
}

bool Tree::removeHelper(Node *&current, string id)
{
    if (!current || size <= 0)
    {
        return false;
    }
    if (compareId(current->value.getId(), id) == 0)
    {
        auto tmp = current;
        if (!current->left)
        {
            current = current->right;
        }
        else if (!current->right)
        {
            current = current->left;
        }
        else
        {
            replace_node(tmp, current->right);
        }
        delete tmp;
        size--;
        return true;
    }
    if (compareId(current->value.getId(), id) == 1)
    {
        return removeHelper(current->left, id);
    }
    return removeHelper(current->right, id);
}

bool Tree::remove(string id)
{
    return removeHelper(root, id);
}
