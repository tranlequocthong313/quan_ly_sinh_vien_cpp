#include <iostream>
#include "./src/views/menu.h"
#include "./src/routes/router.h"
#include <unordered_map>
#include "./src/utils/io.h"
#include <ctime>
#include <limits>

using namespace std;

int main()
{
    cout << "======== QUAN LY SINH VIEN ========" << endl;

    Menu menu;
    Router router;

    unordered_map<int, ListOption> listOptions;
    listOptions[1] = ListOption::PRINT;
    listOptions[2] = ListOption::MAX_POINT;
    listOptions[3] = ListOption::MIN_POINT;
    listOptions[4] = ListOption::SORT_BY_POINT;
    listOptions[5] = ListOption::REMOVE;
    listOptions[6] = ListOption::INSERT;
    listOptions[7] = ListOption::FIND_BY_CHAR;
    listOptions[8] = ListOption::UPDATE;
    listOptions[9] = ListOption::EXIT;

    unordered_map<int, VectorOption> vectorOptions;
    vectorOptions[1] = VectorOption::CHECK_EMPTY;
    vectorOptions[2] = VectorOption::PRINT;
    vectorOptions[3] = VectorOption::PUSH;
    vectorOptions[4] = VectorOption::GET_FIRST;
    vectorOptions[5] = VectorOption::GET_AND_POP;
    vectorOptions[6] = VectorOption::EXIT;

    unordered_map<int, TreeOption> treeOptions;
    treeOptions[1] = TreeOption::PRINT;
    treeOptions[2] = TreeOption::PREORDER;
    treeOptions[3] = TreeOption::INORDER;
    treeOptions[4] = TreeOption::POSTORDER;
    treeOptions[5] = TreeOption::INSERT;
    treeOptions[6] = TreeOption::FIND;
    treeOptions[7] = TreeOption::REMOVE;
    treeOptions[8] = TreeOption::EXIT;

    srand((int)time(0));

    while (true)
    {
        menu.main();

        int choose = get_option(1, 7, "Chon cau truc du lieu ma ban muon", "Lua chon khong hop le! Vui long nhap lai.");

        switch (choose)
        {
        case 1:
        {
            int option;
            do
            {
                menu.list("ARRAY");
                option = get_option(1, 9);
                router.array(listOptions[option]);
                system("pause");
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } while (option != 9);
            break;
        }
        case 2:
        {
            int option;
            do
            {
                menu.list("LINKED LIST");
                option = get_option(1, 9);
                router.list(listOptions[option]);
                system("pause");
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } while (option != 9);
            break;
        }
        case 3:
        {
            int option;
            do
            {
                menu.list("DOUBLY LINKED LIST");
                option = get_option(1, 9);
                router.doublyList(listOptions[option]);
                system("pause");
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } while (option != 9);
            break;
        }
        case 4:
        {
            int option;
            do
            {
                menu.stackQueue("STACK");
                option = get_option(1, 6);
                router.stack(vectorOptions[option]);
                system("pause");
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } while (option != 6);
            break;
        }
        case 5:
        {
            int option;
            do
            {
                menu.stackQueue("QUEUE");
                option = get_option(1, 6);
                router.queue(vectorOptions[option]);
                system("pause");
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } while (option != 6);
            break;
        }
        case 6:
        {
            int option;
            do
            {
                menu.tree();
                option = get_option(1, 8);
                router.tree(treeOptions[option]);
                system("pause");
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } while (option != 8);
            break;
        }
        case 7:
            cout << "=== CAM ON BAN DA SU DUNG CHUONG TRINH CUA CHUNG TOI ===\n";
            exit(0);
            break;
        default:
            cout << "Co loi xay ra, xin vui long thu lai." << endl;
            break;
        }
        cout << endl;
    }
}
