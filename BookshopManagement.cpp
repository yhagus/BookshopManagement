// BookshopManagement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "users.h"

using namespace std;

int main()
{
    //CENTERED TEXT
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    int width, height;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    width = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    height = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
    //


    //CLASS
    Admin admin;
    Member member;
   
    //VARIABLES
    //
    //
    string username;
    string password;

    //
    //
    enum option { ADMIN = '1', MEMBER = '2', UNREGISTERED = '3' };
    //
    //Program Start
    //
    //
    insert(&head, "Habis Gelap Terbitlah Terang", 50000);
    insert(&head, "Tips & Trick Penguasa Algoritma", 75000);
    insert(&head, "Structure Data Algorithm", 55000);

    input("Bagus Pranowo");
    input("Akmal Jawsund");
    input("Erwin Syahrul");
  
    char pilihan;
    while (1)
    {
        do {
            system("CLS");
            cout << "\n\n";
            cout << setw(width) << centered("SELAMAT DATANG DI TOKO BUKU") << endl << endl;
            cout << "\t1. Login sebagai admin" << endl;
            cout << "\t2. Login sebagai member" << endl;
            cout << "\t3. Masuk tanpa login" << endl << endl;
            cout << "\tPilihan [1-3] : ";
            cin >> pilihan;cin.ignore();
            //

            //
            switch (pilihan) {

            case ADMIN:
                //LOG IN AS ADMIN
                //
                //
                //
                admin.login(username, password);
                break;

            case MEMBER:
                //LOGIN AS MEMBER
                //
                //
                //
                member.login(username, password);
                break;
            case UNREGISTERED:
                //CONTINUE WITHOUT LOGIN
                //
                //
                //
                cout << "\tAnda memilih masuk tanpa login" << endl << endl;
                memberInterface.TampilanBuku();
                break;
            default:
                break;
            }
        } while (1);
    }
}
