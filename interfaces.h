#pragma once
#include "headers.h"
#include "centered.h"
#include "books.h"
#define CREATE '1'
#define EDIT '2'
#define DELETE '3'
#define READ '4'
#define EXIT '0'

using namespace std;
void ReadKey()
{
	cout << "\tPress ENTER to continue . . .";
	cin.ignore();
}
class AdminInterface
{
public:
	
	void AdminDashboard(char a)
	{
		while(1){
		do {
			system("CLS");
			cout << "\n\n";
			cout << setw(100) << centered("Selamat Datang Di Toko Buku") << endl;
			cout << setw(100) << centered("Anda sedang login sebagai admin") << endl << endl;
			cout << "\t1. Tambah Data Buku" << endl;
			cout << "\t2. Edit Data Buku" << endl;
			cout << "\t3. Hapus Data Buku" << endl;
			cout << "\t4. Tampilkan Semua Buku" << endl;
			cout << "\t0. Logout" << endl << endl;
			cout << "\tPilih [1-5] : ";
			cin >> a;cin.ignore();
			int newBookData;
			string newBookName;
			switch (a)
			{
			case CREATE:
				//
				system("CLS");
				cout << "\n\n";
				cout << "\tSilakan tambahkan buku baru" << endl << endl;
				cout << "\tNama Buku: ";
				getline(cin, newBookName);
				cout << "\tJumlah Buku: ";
				cin >> newBookData;cin.ignore();
				insert(&head, newBookName, newBookData);
				cout << "\n\tBuku telah ditambahkan";
				cin.ignore();
				break;
			case EDIT:
				//
				break;
			case DELETE:
				//
				system("CLS");
				cout << "\n\n";
				cout << "\tSilakan hapus buku berdasarkan nama" << endl;
				cout << "\tNama buku: ";
				getline(cin, newBookName);
				deleteNode(&head, newBookName);
				return;
				break;
			case READ:
				//
				show(head);
				cin.ignore();
				break;
			case EXIT:
				//
				return;
				break;
			default:break;
			}
		} while (!(a == '1' || a == '2' || a == '3' || a == '4' || a == '5'));
	}
	}
};

class MemberInterface
{
public:
	void TampilanBuku() {

		char unregisteredChoice;
		char unregisteredChoice2;
		do {
			system("CLS");
			cout << "\n\n";
			cout << "\tAnda memilih masuk tanpa login" << endl << endl;
			cout << "\t1. Tampilkan Buku" << endl;
			cout << "\t0. Kembali" << endl << endl;
			cout << "\tPilihan anda [1-0] : ";
			cin >> unregisteredChoice;cin.ignore();
			if (unregisteredChoice == '1') {
				do {
					show(head);
					cout << "\n\n";
					cout << "\tPilihan yang tersedia:" << endl;
					cout << "\t1. Sort Buku (Ascending)" << endl;
					cout << "\t2. Sort Buku (Descending)" << endl;
					cout << "\t3. Search Buku" << endl;
					cout << "\t4. Beli Buku" << endl;
					cout << "\t0. Exit" << endl;
					cout << "\tPilihan anda [1-0] : ";
					cin >> unregisteredChoice2;cin.ignore();
					string searchBookName;
					switch (unregisteredChoice2) {
					case '1':
						break;
					case '2':
						break;
					case '3':
						system("CLS");
						cout << "\n\n";
						cout << "\tNama buku yang anda cari: ";
						getline(cin, searchBookName);
						search(head, searchBookName) ? cout << "" : cout << "\tBuku tidak ditemukan\n\n", ReadKey(), TampilanBuku();
						ReadKey();
						break;
					case '4':
						break;
					case '0':
						break;
					default:break;
					}
				} while (!(unregisteredChoice2 == '1' || unregisteredChoice2 == '2' || unregisteredChoice2 == '3' || unregisteredChoice2 == '4' || unregisteredChoice2 == '0'));
			}
			else {
				TampilanBuku();
			}
		} while (!(unregisteredChoice == '1' || unregisteredChoice2 == '0'));
	}


	void MemberDashboard(char a)
	{
		do {
			system("CLS");
			cout << "\n\n";
			cout << setw(100) << centered("Selamat Datang Di Toko Buku") << endl;
			cout << setw(100) << centered("Anda sedang login sebagai admin") << endl << endl;
			cout << "\t1. Tampilkan Buku" << endl;
			cout << "\t0. Logout" << endl << endl;
			cout << "\tPilih [1-0] : ";
			cin >> a;cin.ignore();

			switch (a)
			{
			case '1':
				//
				TampilanBuku();
				break;
			case '0':
				//
				return;
				break;
			default:break;
			}
		} while (!(a == '1' || a == '2' || a == '3' || a == '4' || a == '5'));
	}
};