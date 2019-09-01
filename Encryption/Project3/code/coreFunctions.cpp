#include <iostream>
#include <string>
#include <fstream>
#include <thread>
#include "adevlib.h"

using namespace std;

class Core
{
	private:
		string MTbuffer;
		size_t buffer_size;
		string data;
		string output;
		string buffer1;
		string buffer2;
	public:
		string encode(string &,string);
		string decode(string &,string);
		void readEncode(string,string,string);
		void readDecode(string,string,string);
};

string Core::encode(string &data,string key)
{
	MTbuffer = "";
	//TeaEncode(data,key,&MTbuffer);
	thread encode(TeaEncode,data,key,&MTbuffer);
	encode.join();
	//encode.detach();
	data.erase(data.begin(), data.end());
	return MTbuffer;
}

string Core::decode(string &data,string key)
{
	MTbuffer = "";
	//TeaDecode(data,key,&MTbuffer);
	thread decode(TeaDecode,data,key,&MTbuffer);
	decode.join();
	//decode.detach();
	data.erase(data.begin(), data.end());
	return MTbuffer;
}

int getSize(string fname)
{
	ifstream infile(fname, ios::in | ios::binary);
	infile.seekg (0,infile.end);
	long size = infile.tellg();
	infile.seekg (0);
	infile.close();
	return size; 
}

void Core::readDecode(string fname,string outFileName,string key)
{
	//buffer_size = 1188648;
	buffer_size = 3200004;
    string buffer(buffer_size,'\0');
    string data,output(buffer_size,'\0');
	
    std::ifstream fin(fname,ios::binary);
    ofstream outFile(outFileName,ios::binary);// | ios::app);
    if(getSize(outFileName) > 0)
    {
        cout << "Overwrite error" << endl;
        exit(0);
    }
    while (fin)
    {
		buffer,data,output = "","","";
        fin.read(&buffer.front(), buffer_size);
        size_t count = fin.gcount();
        data = buffer;
		output.resize(count);
		data.resize(count);
		output = decode(data,key);		
		outFile.write(output.c_str(),output.length()); 
        if (!count) 
            break;      
    }
    outFile.close();
    fin.close();
}

void Core::readEncode(string fname,string outFileName,string key)
{
	//buffer_size = 1188644;
	buffer_size = 3200000;
	string buffer(buffer_size,'\0');
    
    std::ifstream fin(fname,ios::binary);
    ofstream outFile(outFileName,ios::binary);// | ios::app);
    if(getSize(outFileName) > 0)
    {
        cout << "Overwrite error" << endl;
        exit(0);
    }
    while (fin)
    {
        fin.read(&buffer.front(), buffer_size);
        size_t count = fin.gcount();
        data = buffer;
		output.resize(count);
		data.resize(count);
        output = encode(data,key);		
        outFile.write(output.c_str(),output.length());      
        //cout << output.length() << endl;
		if (!count) 
            break;      
    }
    outFile.close();
    fin.close();
}


void readSystem(string fname,string outFileName,string key,string mode)
{
	Core AM;
	if(mode == "E")
	{
		AM.readEncode(fname,outFileName,key);
	}
	if(mode == "D")
	{
		AM.readDecode(fname,outFileName,key);
	}
}