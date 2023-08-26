#ifndef COMPARATOR
#define COMPARATOR

template <typename T>
class Comparator
{
public:
    virtual int compare(T *a, T *b) = 0;
};

#endif
