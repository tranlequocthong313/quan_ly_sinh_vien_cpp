#include "../services/student_service_stack_queue.h"
#include "../structures/stack.h"

class StackController
{
private:
    Stack *store = nullptr;
    StudentServiceStackQueue *service = nullptr;

public:
    StackController();
    ~StackController();
    void print();
    void push();
    void getFirst();
    void getFirstAndRemove();
    void checkEmpty();
};
