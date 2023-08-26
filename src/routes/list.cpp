#include "router.h"

void Router::list(ListOption option)
{
    switch (option)
    {
    case PRINT:
        listController->print();
        system("pause");
        break;
    case MAX_POINT:
        listController->max_point();
        system("pause");
        break;
    case MIN_POINT:
        listController->min_point();
        system("pause");
        break;
    case SORT_BY_POINT:
        listController->sort();
        system("pause");
        break;
    case REMOVE:
        listController->remove();
        system("pause");
        break;
    case INSERT:
        listController->insert();
        system("pause");
        break;
    case FIND_BY_CHAR:
        listController->find();
        system("pause");
        break;
    case UPDATE:
        listController->update();
        system("pause");
        break;
    case EXIT:
        break;
    default:
        throw "Invalid option";
    }
}
