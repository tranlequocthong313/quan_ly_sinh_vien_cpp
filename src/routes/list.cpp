#include "router.h"

void Router::list(ListOption option)
{
    switch (option)
    {
    case ListOption::PRINT:
        listController->print();
        break;
    case ListOption::MAX_POINT:
        listController->max_point();
        break;
    case ListOption::MIN_POINT:
        listController->min_point();
        break;
    case ListOption::SORT_BY_POINT:
        listController->sort();
        break;
    case ListOption::REMOVE:
        listController->remove();
        break;
    case ListOption::INSERT:
        listController->insert();
        break;
    case ListOption::FIND_BY_CHAR:
        listController->find();
        break;
    case ListOption::UPDATE:
        listController->update();
        break;
    case ListOption::EXIT:
        break;
    default:
        throw "Invalid option";
    }
}
