#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
using namespace std;

//Read’s data
void readAllDataFromFile(string theFileName,string &outdata)
{
	ifstream fileIn;
	fileIn.open(theFileName, ios::in | ios::binary);
	string *theOutData = new string((istreambuf_iterator<char>(fileIn)), istreambuf_iterator<char>());
	outdata = *theOutData;
	delete(theOutData);
	fileIn.close();
}	

// Writes data
void writeDataToFile(string theFileName,string theData)
{
	ofstream fileOut;
	fileOut.open(theFileName, ios::out | ios::binary);
	{
		string out;
		out = theData;
		fileOut.write(out.c_str(), out.size());
		fileOut.close();
		out.resize(10);
		out.shrink_to_fit();
	}
}

