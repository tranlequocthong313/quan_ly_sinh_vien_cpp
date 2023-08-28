#include "doubly_linked_list.h"

void DoublyLinkedList::swap(Student &a, Student &b)
{
    auto tmp = a;
    a = b;
    b = tmp;
}

bool DoublyLinkedList::isValidPosition(int position)
{
    return position >= 0 && position < size;
}

DoublyLinkedList::DoublyLinkedList()
{
    head = new Node;
    tail = new Node;
    head->next = tail;
    tail->prev = head;
    pointer = head;
    size = 0;
}
DoublyLinkedList::~DoublyLinkedList()
{
    auto current = head;
    while (current)
    {
        auto tmp = current;
        current = current->next;
        delete tmp;
    }
}

void DoublyLinkedList::sort(Comparator<Student> *comparator)
{
    auto current1 = head->next;
    while (current1->next)
    {
        auto current2 = current1->next;
        while (current2->next)
        {
            if (comparator->compare(&current1->student, &current2->student) == 1)
            {
                swap(current1->student, current2->student);
            }
            current2 = current2->next;
        }
        current1 = current1->next;
    }
}

void DoublyLinkedList::remove_at(int position)
{
    if (isEmpty())
    {
        throw "Linked list is empty!";
    }
    if (position < 0 && position > size)
    {
        throw "Out of bounds";
    }
    auto current = head->next;
    for (int i = 0; i < size && current->next; i++)
    {
        if (position == i)
        {
            auto tmp = current;
            current->prev->next = current->next;
            current->next->prev = current->prev;
            delete tmp;
            return;
        }
        current = current->next;
    }
}

void DoublyLinkedList::insert_at(int position, Student value)
{
    if (!isValidPosition(position))
    {
        throw "Out of bounds";
    }
    auto current = head->next;
    for (int i = 0; i < size && current->next; i++)
    {
        if (position == i)
        {
            auto newNode = new Node(value);
            current->prev->next = newNode;
            newNode->prev = current->prev;
            current->prev = newNode;
            newNode->next = current;
            return;
        }
        current = current->next;
    }
}

bool DoublyLinkedList::isEmpty()
{
    return !head->next->next;
}

int DoublyLinkedList::getSize()
{
    return size;
}

void DoublyLinkedList::push_back(Student student)
{
    auto newNode = new Node(student);
    tail->prev->next = newNode;
    newNode->prev = tail->prev;
    tail->prev = newNode;
    newNode->next = tail;
    size++;
}

bool DoublyLinkedList::hasNext()
{
    return pointer->next->next != nullptr;
}
Student *DoublyLinkedList::next()
{
    pointer = pointer->next;
    return &pointer->student;
}
void DoublyLinkedList::reset_iterator()
{
    pointer = head;
}

void DoublyLinkedList::update_at(int position, Student value)
{
    if (isEmpty())
    {
        throw "Linked list is empty!";
    }
    if (!isValidPosition(position))
    {
        throw "Out of bounds";
    }
    auto current = head->next;
    for (int i = 0; i < size && current->next; i++)
    {
        if (position == i)
        {
            current->student = value;
            return;
        }
        current = current->next;
    }
}

Student *DoublyLinkedList::get_at(int position)
{
    if (isEmpty())
    {
        throw "Linked list is empty!";
    }
    if (!isValidPosition(position))
    {
        throw "Out of bounds";
    }
    auto current = head->next;
    for (int i = 0; i < size && current->next; i++)
    {
        if (position == i)
        {
            break;
        }
        current = current->next;
    }
    return &current->student;
}

void DoublyLinkedList::push(Student value)
{
    push_back(value);
}
