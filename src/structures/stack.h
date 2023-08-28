#ifndef STACK_HEADER
#define STACK_HEADER

#include "array.h"
#include "vector.h"

class Stack : public Vector
{
private:
    int pointer = 0;
    Array *store = nullptr;

public:
    Stack();
    ~Stack();
    void pop();
    bool isEmpty();
    void push(Student student);
    Student *top();
    bool hasNext();
    Student *next();
    void reset_iterator();
};

#endif
