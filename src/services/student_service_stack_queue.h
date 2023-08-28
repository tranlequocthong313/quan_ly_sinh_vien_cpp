#ifndef STUDENT_SERVICE_STACK_QUEUE
#define STUDENT_SERVICE_STACK_QUEUE

#include "../structures/vector.h"

class StudentServiceStackQueue
{
private:
private:
    Vector *ds;

public:
    StudentServiceStackQueue(Vector *ds);
    void checkEmpty();
    void print();
    void insert();
    void getFirst();
    void getAndDeleteFirst();
};

#endif
