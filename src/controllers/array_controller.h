#include "../structures/array.h"
#include "../services/student_service_list.h"
class ArrayController
{
private:
    Array *store;
    StudentServiceList *service;

public:
    ArrayController();
    ~ArrayController();
    void print();
    void insert();
    void remove();
    void update();
    void sort();
    void find();
    void min_point();
    void max_point();
};
