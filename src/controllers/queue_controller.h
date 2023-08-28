#include "../services/student_service_stack_queue.h"
#include "../structures/queue.h"

class QueueController
{
private:
    Queue *store = nullptr;
    StudentServiceStackQueue *service = nullptr;

public:
    QueueController();
    ~QueueController();
    void print();
    void push();
    void getFirst();
    void getFirstAndRemove();
    void checkEmpty();
};
