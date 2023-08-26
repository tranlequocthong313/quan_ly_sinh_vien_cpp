#ifndef ROUTER_HEADER
#define ROUTER_HEADER

#include "../structures/struct_options.h"
#include "../controllers/list_controller.h"
#include "../controllers/array_controller.h"
#include "../controllers/doubly_list_controller.h"

using namespace std;

class Router
{
private:
    ArrayController *arrayController = nullptr;
    LinkedListController *listController = nullptr;
    DoublyListController *doublyListController = nullptr;

public:
    Router();
    ~Router();
    void array(ListOption option);
    void list(ListOption option);
    void doublyList(ListOption option);
};

#endif
