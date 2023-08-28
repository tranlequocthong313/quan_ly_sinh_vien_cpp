#ifndef ARRAY_HEADER
#define ARRAY_HEADER

#include "../models/student.h"
#include "../utils/io.h"
#include "list.h"
#include "comparator.h"

class Array : public List
{
private:
    Student *store = nullptr;
    int maxSize = 100;
    int size = 0;
    int pointer = 0;

    void allocate();
    void quick_sort(int lb, int rb, Comparator<Student> *comparator);
    void swap(Student &a, Student &b);
    bool isValidPosition(int position);

public:
    Array();
    Array(int size);
    ~Array();
    void sort(Comparator<Student> *comparator);
    void remove_at(int position);
    void insert_at(int position, Student value);
    void update(int position);
    bool isEmpty();
    bool isFull();
    int getSize();
    void push_back(Student value);
    bool hasNext();
    Student *next();
    void reset_iterator();
    void update_at(int position, Student value);
    Student *get_at(int position);
    void push(Student value);
};

#endif
