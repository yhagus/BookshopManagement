#pragma once
#include "headers.h"
#include "users.h"
using namespace std;

Users user;

class Admin
{
public:
	void login(string a, string b)
	{
		int loop = 0;
		system("CLS");
		cout << "\n\n";
		cout << "\tLogin sebagai admin" << endl << endl;
		cout << "\tUsername\t: ";
		cin >> a;
		cout << "\tPassword\t: ";
		cin >> b;
		
		for (int i = 0; i < sizeof(user.adminId); i++) {
			//
			//
			if (a == user.adminId[i] && b == user.adminPassword[i]) {
				cout << "\tLogin success" << endl;
				system("PAUSE");
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
				system("PAUSE");
			}
		}
	} 

};