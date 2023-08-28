#include "router.h"

void Router::doublyList(ListOption option)
{
    switch (option)
    {
    case ListOption::PRINT:
        doublyListController->print();
        break;
    case ListOption::MAX_POINT:
        doublyListController->max_point();
        break;
    case ListOption::MIN_POINT:
        doublyListController->min_point();
        break;
    case ListOption::SORT_BY_POINT:
        doublyListController->sort();
        break;
    case ListOption::REMOVE:
        doublyListController->remove();
        break;
    case ListOption::INSERT:
        doublyListController->insert();
        break;
    case ListOption::FIND_BY_CHAR:
        doublyListController->find();
        break;
    case ListOption::UPDATE:
        doublyListController->update();
        break;
    case ListOption::EXIT:
        break;
    default:
        throw "Invalid option";
    }
}
