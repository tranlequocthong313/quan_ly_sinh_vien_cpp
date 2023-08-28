#include "router.h"

void Router::array(ListOption option)
{
    switch (option)
    {
    case ListOption::PRINT:
        arrayController->print();
        break;
    case ListOption::MAX_POINT:
        arrayController->max_point();
        break;
    case ListOption::MIN_POINT:
        arrayController->min_point();
        break;
    case ListOption::SORT_BY_POINT:
        arrayController->sort();
        break;
    case ListOption::REMOVE:
        arrayController->remove();
        break;
    case ListOption::INSERT:
        arrayController->insert();
        break;
    case ListOption::FIND_BY_CHAR:
        arrayController->find();
        break;
    case ListOption::UPDATE:
        arrayController->update();
        break;
    case ListOption::EXIT:
        break;
    default:
        throw "Invalid option";
    }
}
