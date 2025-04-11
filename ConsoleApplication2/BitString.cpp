#include <string>
#include <iostream>
#include <format>



class BitString 
{
public:
	~BitString() {}
	BitString(std::string line);
	BitString(const BitString& p);
	BitString(int val);
	BitString& operator+();
	BitString& operator!=(const int);
	BitString& operator==(const int) ;
	BitString& operator+=(const int);


private: 
	std::string line;
};

BitString::BitString(std::string line)
{
	
}

BitString::BitString(const BitString& p)
{
	line = p.line;
}

BitString::BitString(int val)
{
	line = val.line;
}

BitString& BitString::operator+()
{
	return;
}

BitString& BitString::operator!=(const int)
{
	return;
}

BitString& BitString::operator==(const int)
{
	return;
}

BitString& BitString::operator+=(const int)
{
	return;
}




