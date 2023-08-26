#include "../structures/array.h"
#include "../services/student_service.h"
#include "../structures/comparator.h"
#include "../models/student.h"
#include "../structures/list.h"

using namespace std;

class ArrayController
{
private:
    Array *store;
    StudentService *service;

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
