#include "../structures/comparator.h"
#include "../models/student.h"

class SortStudentByPoint : public Comparator<Student>
{
public:
    int compare(Student *a, Student *b);
};
