#ifndef ROUTER_HEADER
#define ROUTER_HEADER

#include "../structures/list_option.h"
#include "../structures/vector_option.h"
#include "../structures/tree_option.h"
#include "../controllers/list_controller.h"
#include "../controllers/array_controller.h"
#include "../controllers/doubly_list_controller.h"
#include "../controllers/stack_controller.h"
#include "../controllers/queue_controller.h"
#include "../controllers/tree_controller.h"

class Router
{
private:
    ArrayController *arrayController = nullptr;
    LinkedListController *listController = nullptr;
    DoublyListController *doublyListController = nullptr;
    StackController *stackController = nullptr;
    QueueController *queueController = nullptr;
    TreeController *treeController = nullptr;

public:
    Router();
    ~Router();
    void array(ListOption option);
    void list(ListOption option);
    void doublyList(ListOption option);
    void stack(VectorOption option);
    void queue(VectorOption option);
    void tree(TreeOption option);
};

#endif
