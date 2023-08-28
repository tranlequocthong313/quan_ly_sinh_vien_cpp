#ifndef PUSHABLE_HEADER
#define PUSHABLE_HEADER

#include "../models/student.h"

class Pushable
{
public:
    virtual void push(Student value) = 0;
};

#endif
