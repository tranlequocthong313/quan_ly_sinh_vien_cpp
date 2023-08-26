#include "../services/student_service.h"
#include "../structures/comparator.h"
#include "../models/student.h"
#include "../structures/doubly_linked_list.h"

using namespace std;

class DoublyListController
{
private:
    DoublyLinkedList *store;
    StudentService *service;

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
