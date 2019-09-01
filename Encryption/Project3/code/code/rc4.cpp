#include <iostream>
#include <string>
#include "Base64_RC4.h"

using namespace std;

void rc4Decrypt(string data,string key,string &dataout)
{
	CRC4 rc4;
	// Key 
	char *theKey = new char[key.size() + 80];
	strcpy(theKey, key.c_str()); 
	// Data
	const int theSize = data.size();
	char *pd = new char[data.size() + 80];
	strcpy(pd, data.c_str()); 
	rc4.Decrypt(pd,theKey);
	dataout = pd;
	delete [] pd;
//	return *out;
}
	
void rc4Encrypt(string data,string key,string &dataout)
{
	CRC4 rc4;
	// Key 
	char *theKey = new char[key.size() + 80];
	strcpy(theKey, key.c_str()); 
	// Data
	const int theSize = data.size();
	char *pd = new char[data.size() + 80];
	strcpy(pd, data.c_str()); 
	rc4.Encrypt(pd,theKey);
	dataout = pd;
	delete [] pd;
//	return *out;
}

