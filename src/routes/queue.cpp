#include "router.h"

void Router::queue(VectorOption option)
{
    switch (option)
    {
    case VectorOption::PRINT:
        queueController->print();
        break;
    case VectorOption::PUSH:
        queueController->push();
        break;
    case VectorOption::GET_FIRST:
        queueController->getFirst();
        break;
    case VectorOption::GET_AND_POP:
        queueController->getFirstAndRemove();
        break;
    case VectorOption::CHECK_EMPTY:
        queueController->checkEmpty();
        break;
    case VectorOption::EXIT:
        break;
    default:
        throw "Invalid option";
    }
}
