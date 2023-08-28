#include "router.h"

void Router::tree(TreeOption option)
{
    switch (option)
    {
    case TreeOption::PRINT:
        treeController->print();
        break;
    case TreeOption::INSERT:
        treeController->insert();
        break;
    case TreeOption::INORDER:
        treeController->inorder();
        break;
    case TreeOption::POSTORDER:
        treeController->postorder();
        break;
    case TreeOption::PREORDER:
        treeController->preorder();
        break;
    case TreeOption::FIND:
        treeController->find();
        break;
    case TreeOption::REMOVE:
        treeController->remove();
        break;
    case TreeOption::EXIT:
        break;
    default:
        throw "Invalid option";
    }
}
