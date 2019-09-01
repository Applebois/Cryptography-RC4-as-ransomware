#ifndef _adevlib_h_
#define _adevlib_h_

#include "code/tea.cpp"
#include "code/rc4.cpp"
#include "code/encode.cpp"
#include "code/file.cpp"
	// RC4
	void rc4Encrypt(string data,string key,string &dataout); 
	void rc4Decrypt(string data,string key,string &dataout);
	/*data string will take the plaintext or cypher text.
	key string will take the key.
	dataout will be the return of plaintext or cypher text from the cypher.
	*/
	// Tea
	void TeaEncode ( const std::string& str, const std::string& key, std::string* out ); // This takes three values the data,thekey,the output data.
	void TeaDecode ( const std::string& str, const std::string& key, std::string* out ); // This works in the same way as rc4.
	// Base64
	void base64_encode(const string &s,string &dataout); 
	void base64_decode(const string &s,string &dataout); 
	// Binary
	void to_binary ( const std::string& src,string &dataout );
	void from_binary ( const std::string& src,string &dataout );
	// Hex
	void string_to_hex(const std::string& input,string &dataout);
	void hex_to_string(const std::string& input,string &dataout);
	// base64,binary,hex work the same way, one string for the data and the other for the output.
	// File functions
	void readAllDataFromFile(string theFileName,string &outdata); 
	void writeDataToFile(string theFileName,string theData); 
	/*The file functions are a little bit more complex but they should be easy. For reading the file you would need the file name and then the variable you want to read the file to.
	For example
	string *data = new string; -- this is where the data goes
	readAllDataFromFile(“your file name or file name string here”,**&data);
	Another example would be writing it to a file which should be even less difficult.
	writeDataToFile(“your file name or file name string here”,*data);
	*/
#endif