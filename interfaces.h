#pragma once
#include "headers.h"
#include "centered.h"
using namespace std;

enum option { CREATE = '1', EDIT = '2', HAPUS = '3', READ = '4', EXIT = '5' };
void ReadKey() 
{
	cout << "\tPress ENTER to continue . . .";
	cin.ignore();cin.ignore();
}

void addBook()
{
	system("CLS");
	cout << "\n\n";
	cout << "\tMenambah Data Buku" << endl;
	ReadKey();
}

class Interface
{
public:
	void LoginMenu()
	{

	}
};

class AdminInterface
{
public:

	void AdminDashboard(char a) 
	{
		system("CLS");
		cout << "\n\n";
		cout << setw(100) << centered("Selamat Datang Di Toko Buku") << endl;
		cout << setw(100) << centered("Anda sedang login sebagai admin") << endl << endl;
		cout << "\t1. Tambah Data Buku" << endl;
		cout << "\t2. Edit Data Buku" << endl;
		cout << "\t3. Hapus Data Buku" << endl;
		cout << "\t4. Tampilkan Semua Buku" << endl;
		cout << "\t5. Logout" << endl << endl;
		cout << "\tPilih [1-5] : ";
		cin >> a;
		
		switch (a)
		{
		case CREATE:
			//
			addBook();
			break;
		case EDIT:
			//
			break;
		case HAPUS:
			//
			break;
		case READ:
			//
			break;
		case EXIT:
			//
			break;
		default:break;
		}
	}
};