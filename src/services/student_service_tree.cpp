#include "student_service_tree.h"
#include <iostream>
#include <string>
#include "../utils/io.h"

using namespace std;

StudentServiceTree::StudentServiceTree(Tree *tree)
{
    this->tree = tree;
}

void StudentServiceTree::print()
{
    cout << "\n\t\t\t Thong tin cac sinh vien \n";
    auto result = tree->inorder();
    print_students(result, tree->getSize());
    delete result;
}

void StudentServiceTree::inorder()
{
    cout << "\n\t\t\t Thong tin sinh vien duyet theo LNR\n";
    auto result = tree->inorder();
    print_students(result, tree->getSize());
    delete result;
}

void StudentServiceTree::postorder()
{
    cout << "\n\t\t\t Thong tin sinh vien duyet theo RNL\n";
    auto result = tree->postorder();
    print_students(result, tree->getSize());
    delete result;
}

void StudentServiceTree::preorder()
{
    cout << "\n\t\t\t Thong tin sinh vien duyet theo NLR\n";
    auto result = tree->preorder();
    print_students(result, tree->getSize());
    delete result;
}

void StudentServiceTree::add()
{
    auto s = enter_student();
    tree->push(*s);
    cout << "* Them thanh cong.\n";
}

void StudentServiceTree::find()
{
    cout << "+ Nhap vao MSSV cua sinh vien ma ban muon tim: ";
    string id;
    cin.ignore();
    getline(cin, id);
    auto search = tree->find(id);
    if (search == nullptr)
        cout << "* Khong tim thay sinh vien co MSSV la: " << id << endl;
    else
    {
        cout << "\n\t\t Thong tin sinh vien co MSSV " << id << endl;
        print_student(search);
    }
}

void StudentServiceTree::remove()
{
    cout << "+ Nhap vao MSSV cua sinh vien ma ban muon xoa: ";
    string id;
    cin.ignore();
    getline(cin, id);
    auto search = tree->find(id);
    if (search == nullptr)
        cout << "+ Khong co sinh vien nao co MSSV:" << id << endl;
    else
    {
        if (tree->remove(id))
        {
            cout << "* Xoa thanh cong.\n";
        }
        else
        {
            cout << "* Xoa khong thanh cong.\n";
        }
    }
}
