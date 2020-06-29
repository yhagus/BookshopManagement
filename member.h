#pragma once
#include "headers.h"
using namespace std;
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
		cin >> a;
		cout << "\tPassword\t: ";
		cin >> b;

		for (int i = 0; i < sizeof(user.adminId); i++) {
			//
			//
			if (a == user.memberId[i] && b == user.memberPassword[i]) {
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

	void withoutLogin()
	{
		cout << "\n\n";
		cout << "\tSuccess without logged in" << endl;
		system("PAUSE");
	}
};