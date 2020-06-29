// BookshopManagement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "centered.h"
#include "users.h"
#include "headers.h"
#include "admin.h"
#include "member.h"

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

    //Program Start
    //
    //
    char pilihan;
    while (1) {

        do {
            system("CLS");
            cout << "\n\n";
            cout << setw(width) << centered("SELAMAT DATANG DI TOKO BUKU") << endl << endl;
            cout << "\t1. Login sebagai admin" << endl;
            cout << "\t2. Login sebagai member" << endl;
            cout << "\t3. Masuk tanpa login" << endl << endl;
            cout << "\tPilihan [1-3] : ";
            cin >> pilihan;
            //
            //
            switch (pilihan) {

            case '1':
                //LOG IN AS ADMIN
                //
                //
                //
                admin.login(username, password);
                break;

            case '2':
                //LOGIN AS MEMBER
                //
                //
                //
                member.login(username, password);
                break;
            case '3':
                //CONTINUE WITHOUT LOGIN
                //
                //
                //
                member.withoutLogin();
                break;
            default:
                break;
            }


        } while (!(pilihan == '1' || pilihan == '2' || pilihan == '3'));
    }
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
