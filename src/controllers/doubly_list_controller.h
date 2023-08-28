#include "../services/student_service_list.h"
#include "../structures/doubly_linked_list.h"

class DoublyListController
{
private:
    DoublyLinkedList *store;
    StudentServiceList *service;

public:
    DoublyListController();
    ~DoublyListController();
    void print();
    void insert();
    void remove();
    void update();
    void sort();
    void find();
    void min_point();
    void max_point();
};
