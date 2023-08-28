#include "router.h"

void Router::stack(VectorOption option)
{
    switch (option)
    {
    case VectorOption::PRINT:
        stackController->print();
        break;
    case VectorOption::PUSH:
        stackController->push();
        break;
    case VectorOption::GET_FIRST:
        stackController->getFirst();
        break;
    case VectorOption::GET_AND_POP:
        stackController->getFirstAndRemove();
        break;
    case VectorOption::CHECK_EMPTY:
        stackController->checkEmpty();
        break;
    case VectorOption::EXIT:
        break;
    default:
        throw "Invalid option";
    }
}
