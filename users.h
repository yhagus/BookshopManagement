#pragma once
#include "headers.h"
#include "interfaces.h"
using namespace std;

AdminInterface adminInterface;
class Users
{
public:
	string adminId[6] = { 
		"admin"
	};
	string adminPassword[6] = { 
		"123" 
	};

	string memberId[25] = { 
		"member" };
	string memberPassword[25] = { 
		"member" 
	};

} user;

class Member
{
public:
	void login(string a, string b)
	{
		int loop = 0;
		system("CLS");
		cout << "\n\n";
		cout << "\tLogin sebagai member" << endl << endl;
		cout << "\tUsername\t: ";
		cin >> a;cin.ignore();
		cout << "\tPassword\t: ";
		cin >> b;cin.ignore();

		for (int i = 0; i < sizeof(user.adminId); i++) {
			//
			//
			if (a == user.memberId[i] && b == user.memberPassword[i]) {
				cout << "\tLogin success" << endl << endl;
				ReadKey();
				loop = 1;
				
				//
			}
			//
		}
		if (loop == 0) {
			cout << "\tIncorrect username or password" << endl << endl;
			cout << "\tReply 1 to try again : ";
			char reply;
			cin >> reply;
			if (reply == '1') {
				login(a, b);
			}
			else {
				ReadKey();
			}
		}
	}

	void withoutLogin()
	{
		cout << "\n\n";
		cout << "\tSuccess without logged in" << endl << endl;
		ReadKey();
	}
};

class Admin
{
public:
	char getOptionAdmin;
	void login(string a, string b)
	{
		int loop = 0;
		system("CLS");
		cout << "\n\n";
		cout << "\tLogin sebagai admin" << endl << endl;
		cout << "\tUsername\t: ";
		cin >> a;cin.ignore();
		cout << "\tPassword\t: ";
		cin >> b;cin.ignore();

		for (int i = 0; i < sizeof(user.adminId); i++) {
			//
			//
			if (a == user.adminId[i] && b == user.adminPassword[i]) {
				cout << "\tLogin success" << endl << endl;
				ReadKey();
				adminInterface.AdminDashboard(getOptionAdmin);
				loop = 1;
				//
			}
			//
		}
		if (loop == 0) {
			cout << "\tIncorrect username or password" << endl << endl;
			cout << "\tReply 1 to try again : ";
			char reply;
			cin >> reply;cin.ignore();
			if (reply == '1') {
				login(a, b);
			}
			else {
				ReadKey();
			}
		}
	}

};