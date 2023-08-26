#include "linked_list.h"

void LinkedList::swap(Student &a, Student &b)
{
    auto tmp = a;
    a = b;
    b = tmp;
}

bool LinkedList::isValidPosition(int position)
{
    return position >= 0 && position < size;
}

LinkedList::LinkedList()
{
    head = new Node;
    pointer = head;
    size = 0;
}
LinkedList::~LinkedList()
{
    auto current = head;
    while (current)
    {
        auto tmp = current;
        current = current->next;
        delete tmp;
    }
}

void LinkedList::sort(Comparator<Student> *comparator)
{
    auto current1 = head->next;
    while (current1)
    {
        auto current2 = current1->next;
        while (current2)
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

void LinkedList::remove_at(int position)
{
    if (isEmpty())
    {
        throw "Linked list is empty!";
    }
    if (position < 0 && position > size)
    {
        throw "Out of bounds";
    }
    auto prev = head;
    auto current = head->next;
    for (int i = 0; i < size && current; i++)
    {
        if (position == i)
        {
            auto tmp = current;
            prev->next = current->next;
            delete tmp;
            return;
        }
        prev = current;
        current = current->next;
    }
}

void LinkedList::insert_at(int position, Student value)
{
    if (!isValidPosition(position))
    {
        throw "Out of bounds";
    }
    auto prev = head;
    auto current = head->next;
    for (int i = 0; i < size && current; i++)
    {
        if (position == i)
        {
            auto newNode = new Node(value);
            prev->next = newNode;
            newNode->next = current;
            return;
        }
        prev = current;
        current = current->next;
    }
}

bool LinkedList::isEmpty()
{
    return !head->next;
}

int LinkedList::getSize()
{
    return size;
}

void LinkedList::push_back(Student student)
{
    auto current = head;
    while (current->next)
    {
        current = current->next;
    }
    current->next = new Node(student);
    size++;
}

bool LinkedList::hasNext()
{
    return pointer->next != nullptr;
}
Student *LinkedList::next()
{
    pointer = pointer->next;
    return &pointer->student;
}
void LinkedList::reset_iterator()
{
    pointer = head;
}

void LinkedList::update_at(int position, Student value)
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
    for (int i = 0; i < size && current; i++)
    {
        if (position == i)
        {
            current->student = value;
            return;
        }
        current = current->next;
    }
}

Student LinkedList::get_at(int position)
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
    for (int i = 0; i < size && current; i++)
    {
        if (position == i)
        {
            break;
        }
        current = current->next;
    }
    return current->student;
}
