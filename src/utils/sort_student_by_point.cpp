#include "sort_student_by_point.h"

int SortStudentByPoint::compare(Student *a, Student *b)
{
    if (a->getPoint() > b->getPoint())
    {
        return 1;
    }
    else if (a->getPoint() < b->getPoint())
    {
        return -1;
    }
    return 0;
}
