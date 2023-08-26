#include "router.h"

void Router::doublyList(ListOption option)
{
    switch (option)
    {
    case PRINT:
        doublyListController->print();
        system("pause");
        break;
    case MAX_POINT:
        doublyListController->max_point();
        system("pause");
        break;
    case MIN_POINT:
        doublyListController->min_point();
        system("pause");
        break;
    case SORT_BY_POINT:
        doublyListController->sort();
        system("pause");
        break;
    case REMOVE:
        doublyListController->remove();
        system("pause");
        break;
    case INSERT:
        doublyListController->insert();
        system("pause");
        break;
    case FIND_BY_CHAR:
        doublyListController->find();
        system("pause");
        break;
    case UPDATE:
        doublyListController->update();
        system("pause");
        break;
    case EXIT:
        break;
    default:
        throw "Invalid option";
    }
}
