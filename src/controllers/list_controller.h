#include "../services/student_service_list.h"
#include "../structures/linked_list.h"
class LinkedListController
{
private:
    LinkedList *store;
    StudentServiceList *service;

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
