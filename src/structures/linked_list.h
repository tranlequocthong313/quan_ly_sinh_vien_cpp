#ifndef LINKED_LIST_HEADER
#define LINKED_LIST_HEADER

#include "../models/student.h"
#include "../utils/io.h"
#include "list.h"
#include "comparator.h"

class LinkedList : public List
{
private:
    struct Node
    {
        Student student;
        Node *next = nullptr;

        Node() {}
        Node(Student student) : student(student) {}
    };

    Node *head = nullptr;
    int size = 0;
    Node *pointer = nullptr;

    void swap(Student &a, Student &b);
    bool isValidPosition(int position);

public:
    LinkedList();
    ~LinkedList();
    void sort(Comparator<Student> *comparator);
    void remove_at(int position);
    void insert_at(int position, Student value);
    bool isEmpty();
    int getSize();
    void push_back(Student Student);
    bool hasNext();
    Student *next();
    void reset_iterator();
    void update_at(int position, Student value);
    Student get_at(int position);
};

#endif
