#include <stdexcept>
#include <sstream>
#include <iomanip>
#include <bitset>
#include <iostream>
#include <limits>
#include <string>
// This code as nicked by Atton!
using namespace std;

// The base64 encoder
void base64_encode(const string &s,string &dataout)
{
    static const std::string base64_chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    size_t i=0,ix=0,leng = s.length();
    string r; r.reserve( (1 + ((leng - 1) / 3))*4 );
 
    for(i=0,ix=leng - leng%3; i<ix; i+=3)
    {
        r+= base64_chars[ (s[i] & 0xfc) >> 2 ];
        r+= base64_chars[ ((s[i] & 0x03) << 4) + ((s[i+1] & 0xf0) >> 4)  ];
        r+= base64_chars[ ((s[i+1] & 0x0f) << 2) + ((s[i+2] & 0xc0) >> 6)  ];
        r+= base64_chars[ s[i+2] & 0x3f ];
    }
    if (ix<leng)
    {
        r+= base64_chars[ (s[ix] & 0xfc) >> 2 ];
        r+= base64_chars[ ((s[ix] & 0x03) << 4) + (ix+1<leng ? (s[ix+1] & 0xf0) >> 4 : 0)];
        r+= ix+1<leng ? base64_chars[ ((s[ix+1] & 0x0f) << 2) ] : '=';
        r+= "=";
    }
	dataout = r;
    //return r;
}

// Base64 Decoder
void base64_decode(const string &s,string &dataout)
{
    static unsigned char base64_reverse[] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,62,-1,-1,-1,63,52,53,54,55,56,57,58,59,60,61,-1,-1,-1,-1,-1,-1,-1,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,-1,-1,-1,-1,-1,-1,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    size_t i=0,ix=0,leng = s.length();
    string r; r.reserve(leng * 3/4);
    if ((leng%4)==0)
    {
        leng = s[leng-1]=='=' ? leng-1 : leng;
        leng = s[leng-1]=='=' ? leng-1 : leng;
 
        for(i=0,ix=leng-(leng%4); i<ix; i+=4)
        {
            r+= ((base64_reverse[ s[i] ] << 2)           + ((base64_reverse[ s[i+1] ] & 0x30) >> 4));
            r+= (((base64_reverse[ s[i+1] ] & 0xf) << 4) + ((base64_reverse[ s[i+2] ] & 0x3c) >> 2));
            r+= (((base64_reverse[ s[i+2] ] & 0x3) << 6) + base64_reverse[ s[i+3] ]);
        }
        if (ix<leng)
        {
            r+= (   (base64_reverse[ s[ix] ] << 2)          + (ix+1<leng ? (base64_reverse[ s[ix+1] ] & 0x30) >> 4 : 0)   );
            r+= ix+1<leng ? ((base64_reverse[ s[ix+1] ] & 0xf) << 4) + (ix+2<leng ? (base64_reverse[ s[ix+2] ] & 0x3c) >> 2 :0 ) : '\0';
            r+= ix+2<leng ? (base64_reverse[ s[ix+2] ] & 0x3) << 6  : '\0';
        }
    }
	dataout = r;
    //return r;
}

// Converts to binary
void to_binary ( const std::string& src,string &dataout)
{
	const int bits = std::numeric_limits<unsigned char>::digits;
	std::string ret;
 
	for ( std::string::size_type i = 0; i < src.size(); i++ ) {
	ret += std::bitset<bits> ( src[i] ).to_string();
 
	if ( i < src.size() - 1 )
	ret += ' ';
	}
	dataout = ret;
	//return ret;
}
 
// Converts from binary
void from_binary ( const std::string& src,string &dataout)
{
	const int bits = std::numeric_limits<unsigned char>::digits;
 
	std::stringstream in ( src );
	std::string byte;
	std::string ret;
 
	while ( in>> byte )
	ret += char ( std::bitset<bits> ( byte ).to_ulong() );
	dataout = ret;
	//return ret;
}

//Hex v3
void string_to_hex(const std::string& input,string &dataout)
{
    static const char* const lut = "0123456789ABCDEF";
    size_t len = input.length();

    std::string output;
    output.reserve(2 * len);
    for (size_t i = 0; i < len; ++i)
    {
        const unsigned char c = input[i];
        output.push_back(lut[c >> 4]);
        output.push_back(lut[c & 15]);
    }
	dataout = output;
    //return output;
}

void hex_to_string(const std::string& input,string &dataout)
{
    static const char* const lut = "0123456789ABCDEF";
    size_t len = input.length();
    if (len & 1) throw std::invalid_argument("odd length");

    std::string output;
    output.reserve(len / 2);
    for (size_t i = 0; i < len; i += 2)
    {
        char a = input[i];
        const char* p = std::lower_bound(lut, lut + 16, a);
        if (*p != a) throw std::invalid_argument("not a hex digit");

        char b = input[i + 1];
        const char* q = std::lower_bound(lut, lut + 16, b);
        if (*q != b) throw std::invalid_argument("not a hex digit");

        output.push_back(((p - lut) << 4) | (q - lut));
    }
	dataout = output;
    //return output;
}

