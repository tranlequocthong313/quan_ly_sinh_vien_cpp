#include "../structures/array.h"
#include "../services/student_service.h"
#include "../structures/comparator.h"
#include "../models/student.h"
#include "../structures/linked_list.h"

using namespace std;

class LinkedListController
{
private:
    LinkedList *store;
    StudentService *service;

public:
    LinkedListController();
    ~LinkedListController();
    void print();
    void insert();
    void remove();
    void update();
    void sort();
    void find();
    void min_point();
    void max_point();
};
