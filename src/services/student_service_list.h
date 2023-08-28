#ifndef STUDENT_SERVICE
#define STUDENT_SERVICE

#include "../structures/list.h"
#include "../structures/comparator.h"

#define NUM_OF_ALPHABET 26
#define START_OF_ALPHABET_IN_ASCII 97

class StudentServiceList
{
private:
    List *ds;

public:
    StudentServiceList(List *ds);
    ~StudentServiceList();
    void min_point();
    void max_point();
    void print();
    void print(List *_ds);
    void findByCharInName(List *result);
    void sort(Comparator<Student> *comparator);
    void remove_at();
    void insert();
    void update();
};

#endif
