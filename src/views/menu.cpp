#include "menu.h"
#include <iostream>

void Menu::main()
{
    cout << "=========== MAIN ===========.\n"
         << "1) Doc file va ghi du lieu vao danh sach dac.\n"
         << "2) Doc file va ghi du lieu vao danh sach lien ket don.\n"
         << "3) Doc file va ghi du lieu vao danh sach lien ket doi.\n"
         << "4) Doc file va ghi du lieu vao Stack.\n"
         << "5) Doc file va ghi du lieu vao Queue.\n"
         << "6) Doc file va ghi du lieu vao Tree.\n"
         << "7) Thoat chuong trinh.\n";
    cout << "=== MOI BAN LUA CHON ===.\n";
}

void Menu::list(string title)
{
    cout << "=========== " << title << " ==========.\n"
         << "1) Xuat danh sach sinh vien.\n"
         << "2) Tim sinh vien co so diem cao nhat.\n"
         << "3) Tim sinh vien co diem thap nhat.\n"
         << "4) Sap xep danh sach sinh vien theo thu tu tang dan theo diem so.\n"
         << "5) Xoa mot sinh vien ra khoi danh sach.\n"
         << "6) Them sinh vien vao vi tri bat ki trong danh sach.\n"
         << "7) Tim kiem mot sinh vien thong qua mot ki tu o ten.\n"
         << "8) Sua thong tin cua mot sinh vien.\n"
         << "9) Thoat.\n"
         << "=== MOI BAN LUA CHON ===.\n";
}

void Menu::stack()
{
    cout << "========= STACK ==========.\n"
         << "1) Kiem tra xem queue co rong hay khong.\n"
         << "2) Xuat danh sach cac sinh vien.\n"
         << "3) Them mot sinh vien.\n"
         << "4) Lay va xoa thong tin sinh vien dau danh sach.\n"
         << "5) Thoat chuong trinh.\n"
         << "=== MOI BAN LUA CHON ===.\n";
}

void Menu::queue()
{
    cout << "========= QUEUE ==========.\n"
         << "1) Kiem tra xem queue co rong hay khong.\n"
         << "2) Xuat danh sach cac sinh vien.\n"
         << "3) Them mot sinh vien.\n"
         << "4) Lay va xoa thong tin sinh vien dau danh sach.\n"
         << "5) Thoat chuong trinh.\n"
         << "=== MOI BAN LUA CHON ===.\n";
}

void Menu::tree()
{
    cout << "========= TREE ==========.\n"
         << "1) Xuat danh sach cac sinh vien.\n"
         << "2) Xuat danh sach cac sinh vien duyet theo NLR.\n"
         << "3) Xuat danh sach cac sinh vien duyet theo LNR.\n"
         << "4) Xuat danh sach cac sinh vien duyet theo RNL.\n"
         << "5) Them thong tin cua mot sinh vien.\n"
         << "6) Tim kiem thong tin cua mot sinh vien.\n"
         << "7) Xoa mot sinh vien khoi danh sach.\n"
         << "8) Thoat chuong trinh.\n"
         << "=== MOI BAN LUA CHON ===\n";
}

void Menu::update()
{
    cout << "=== UPDATE ===.\n"
         << "1) Ho ten.\n"
         << "2) Ma so sinh vien.\n"
         << "3) Ngay thang nam sinh.\n"
         << "4) Diem so.\n"
         << "5) Sua toan bo.\n"
         << "6) Thoat.\n"
         << "== MOI LUA CHON ==.\n";
}
