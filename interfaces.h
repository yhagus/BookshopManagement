#pragma once
#include "headers.h"
#include "centered.h"

using namespace std;

struct BookData {
	int bookId;
	string bookName;
	int bookStock;
};
enum option { CREATE = '1', EDIT = '2', HAPUS = '3', READ = '4', EXIT = '5' };

void ReadKey() 
{
	cout << "\tPress ENTER to continue . . .";
	cin.ignore();cin.ignore();
}
void addBook()
{
	// CREATE NEW BOOK
	//

}
void editBook()
{
	//EDIT EXISTING BOOK
	//

}
void deleteBook()
{
	//DELETE EXISTING BOOK
	//

}
void showAllBooks()
{
	//SHOW ALL BOOKS
	//

}

class AdminInterface
{
public:
	
	void AdminDashboard(char a) 
	{
		do {
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
				editBook();
				break;
			case HAPUS:
				//
				deleteBook();
				break;
			case READ:
				//
				showAllBooks();
				break;
			case EXIT:
				//
				return;
				break;
			default:break;
			}
		} while (!(a == '1' || a == '2' || a == '3' || a == '4' || a == '5'));
	}
};