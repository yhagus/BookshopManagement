#pragma once
#include "headers.h"
#include "centered.h"
#include "books.h"
#include "queue.h"
#define CREATE '1'
#define DELETE '2'
#define READ '3'
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
			cout << "\t2. Hapus Data Buku" << endl;
			cout << "\t3. Tampilkan Semua Buku" << endl;
			cout << "\t4. Riwayat Pembeli" << endl;
			cout << "\t0. Logout" << endl << endl;
			cout << "\tPilih [1-5] : ";
			cin >> a;cin.ignore();
			int newBookData;
			string newBookName;
			char clearHistory;
			switch (a)
			{
			case '4':
				tampil();
				cout << "\n\tReply 1 to clear history\n\tReply anything to go back\n\n\tInput: ";
				cin >> clearHistory;
				if (clearHistory == '1') bersih();
				break;
			case CREATE:
				//
				system("CLS");
				cout << "\n\n";
				cout << "\tSilakan tambahkan buku baru" << endl << endl;
				cout << "\tNama Buku: ";
				getline(cin, newBookName);
				cout << "\tHarga Buku: ";
				cin >> newBookData;cin.ignore();
				insert(&head, newBookName, newBookData);
				cout << "\n\tBuku telah ditambahkan" << endl;
				ReadKey();
				break;
			case DELETE:
				//
				system("CLS");
				cout << "\n\n";
				cout << "\tSilakan hapus buku berdasarkan nama" << endl;
				cout << "\tNama buku: ";
				getline(cin, newBookName);
				deleteNode(&head, newBookName);
				ReadKey();
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
		} while (1);
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
					cout << "\t2. Search Buku" << endl;
					cout << "\t3. Beli Buku" << endl;
					cout << "\t0. Exit" << endl;
					cout << "\tPilihan anda [1-0] : ";
					cin >> unregisteredChoice2;cin.ignore();
					string searchBookName, namaPemesan, orderBookname;
					switch (unregisteredChoice2) {
					case '1':
						sortData(&head);
						show(head);
						break;
					case '2':
						system("CLS");
						cout << "\n\n";
						cout << "\tNama buku yang anda cari: ";
						getline(cin, searchBookName);
						search(head, searchBookName) ? cout << "" : cout << "\tBuku tidak ditemukan\n\n";
						ReadKey();
						show(head);
						break;
					case '3':
						cout << endl;
						cout << "\tNama anda (pemesan): ";
						getline(cin, namaPemesan);
						cout << "\tNama buku yang anda pesan: ";
						getline(cin, orderBookname);
						pembayaranNonMember(head, namaPemesan, orderBookname);
						ReadKey();
						break;
					case '0':
						return;
					default:break;
					}
				} while (1);
			}
			else {
				TampilanBuku();
			}
		} while (1);
	}


	void MemberDashboard(char a, string namaPemesan)
	{
		char unregisteredChoice;
		char unregisteredChoice2;
		do {
			system("CLS");
			cout << "\n\n";
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
					cout << "\t2. Search Buku" << endl;
					cout << "\t3. Beli Buku" << endl;
					cout << "\t0. Exit" << endl;
					cout << "\tPilihan anda [1-0] : ";
					cin >> unregisteredChoice2;cin.ignore();
					string searchBookName, orderBookname;
					double diskon = 0;
					switch (unregisteredChoice2) {
					case '1':
						sortData(&head);
						show(head);
						break;
					case '2':
						system("CLS");
						cout << "\n\n";
						cout << "\tNama buku yang anda cari: ";
						getline(cin, searchBookName);
						search(head, searchBookName) ? cout << "" : cout << "\tBuku tidak ditemukan\n\n";
						ReadKey();
						show(head);
						break;
					case '3':
						cout << endl;
						cout << "\tNama buku yang anda pesan: ";
						getline(cin, orderBookname);
						pembayaranMember(head, namaPemesan, orderBookname,diskon);
						ReadKey();
						break;
					case '0':
						return;
					default:break;
					}
				} while (1);
			}
			else {
				TampilanBuku();
			}
		} while (1);
	}
};