#ifndef VECTOR_HEADER
#define VECTOR_HEADER

#include "list.h"
#include "iterator.h"
#include "../models/student.h"
#include "../structures/pushable.h"

class Vector : public Iterator<Student>, public Pushable
{
public:
    virtual void pop() = 0;
    virtual bool isEmpty() = 0;
    virtual void push(Student student) = 0;
    virtual Student *top() = 0;
    virtual bool hasNext() = 0;
    virtual Student *next() = 0;
    virtual void reset_iterator() = 0;
};

#endif
