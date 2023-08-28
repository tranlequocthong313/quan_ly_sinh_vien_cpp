#include "array.h"
#include "../utils/io.h"
#include <iostream>

Array::~Array()
{
    delete store;
}

Array::Array()
{
    allocate();
}
Array::Array(int maxSize)
{
    if (maxSize < 0)
    {
        throw "Invalid size";
    }
    this->maxSize = maxSize;
    allocate();
}

void Array::allocate()
{
    if (store)
    {
        auto newStore = new Student[maxSize];
        for (auto i = 0; i < size; i++)
        {
            newStore[i] = store[i];
        }
        delete store;
        store = newStore;
    }
    else
    {
        store = new Student[maxSize];
    }
}

void Array::sort(Comparator<Student> *comparator)
{
    quick_sort(0, size - 1, comparator);
}
void Array::quick_sort(int lb, int rb, Comparator<Student> *comparator)
{
    if (lb >= rb)
    {
        return;
    }
    int p = rb;
    int l = lb, r = rb;
    while (l <= r)
    {
        while (l <= r && comparator->compare(&store[l], &store[p]) == -1)
        {
            l++;
        }
        while (l <= r && comparator->compare(&store[r], &store[p]) != -1)
        {
            r--;
        }
        if (l < r)
        {
            swap(store[l], store[r]);
        }
    }
    swap(store[l], store[p]);
    quick_sort(lb, l - 1, comparator);
    quick_sort(l + 1, rb, comparator);
}
void Array::swap(Student &a, Student &b)
{
    auto tmp = a;
    a = b;
    b = tmp;
}

void Array::remove_at(int position)
{
    if (!isValidPosition(position))
    {
        throw "Out of bounds";
    }
    if (isEmpty())
    {
        return;
    }
    for (auto i = position; i < size - 1; i++)
    {
        store[position] = store[position + 1];
    }
    size--;
}

bool Array::isValidPosition(int position)
{
    return position >= 0 && position < size;
}

void Array::insert_at(int position, Student value)
{
    if (isFull())
    {
        this->maxSize *= 2;
        allocate();
    }
    for (auto i = size; i > position; i--)
    {
        store[i] = store[i - 1];
    }
    store[position] = value;
    size++;
}

void Array::push_back(Student student)
{
    if (isFull())
    {
        this->maxSize *= 2;
        allocate();
    }
    store[size] = student;
    size++;
}
void Array::update_at(int position, Student value)
{
    if (isEmpty())
    {
        throw "Array is empty!";
    }
    if (!isValidPosition(position))
    {
        throw "Out of bounds";
    }
    store[position] = value;
}

Student *Array::get_at(int position)
{
    if (isEmpty())
    {
        throw "Array is empty!";
    }
    if (!isValidPosition(position))
    {
        throw "Out of bounds";
    }
    return &store[position];
}

bool Array::isEmpty()
{
    return size <= 0;
}

bool Array::isFull()
{
    return size >= maxSize;
}

int Array::getSize()
{
    return size;
}

bool Array::hasNext()
{
    return !isEmpty() && pointer < size;
}

Student *Array::next()
{
    return &store[pointer++];
}

void Array::reset_iterator()
{
    pointer = 0;
}

void Array::push(Student value)
{
    push_back(value);
}
