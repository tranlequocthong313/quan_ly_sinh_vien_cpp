#ifndef LIST_HEADER
#define LIST_HEADER

#include "../models/student.h"
#include "iterator.h"
#include "comparator.h"

class List : public Iterator<Student>
{
public:
    virtual void push_back(Student student) = 0;
    virtual bool hasNext() = 0;
    virtual Student *next() = 0;
    virtual void reset_iterator() = 0;
    virtual bool isEmpty() = 0;
    virtual void sort(Comparator<Student> *comparator) = 0;
    virtual void remove_at(int position) = 0;
    virtual int getSize() = 0;
    virtual void insert_at(int position, Student value) = 0;
    virtual void update_at(int position, Student value) = 0;
    virtual Student get_at(int position) = 0;
};

#endif
