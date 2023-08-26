#include "router.h"

void Router::array(ListOption option)
{
    switch (option)
    {
    case PRINT:
        arrayController->print();
        system("pause");
        break;
    case MAX_POINT:
        arrayController->max_point();
        system("pause");
        break;
    case MIN_POINT:
        arrayController->min_point();
        system("pause");
        break;
    case SORT_BY_POINT:
        arrayController->sort();
        system("pause");
        break;
    case REMOVE:
        arrayController->remove();
        system("pause");
        break;
    case INSERT:
        arrayController->insert();
        system("pause");
        break;
    case FIND_BY_CHAR:
        arrayController->find();
        system("pause");
        break;
    case UPDATE:
        arrayController->update();
        system("pause");
        break;
    case EXIT:
        break;
    default:
        throw "Invalid option";
    }
}
