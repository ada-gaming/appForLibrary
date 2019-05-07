#pragma once
#include <string>
#include<iostream>
#include"Boks.h"

enum Month { jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec };
struct births
{
	int age;
	Month month;
	int day;

};

class Reader
{
public:
	Reader();
	void print();
	friend std::istream& operator >>(std::istream& in, Reader& customers);
	friend std::ostream& operator<<(std::ostream& out, const Reader& customers);
private:
	static int indicator;
	static enum readerStatus{badPerson,User,goodUser};
	static enum age{};
	std::string firstName;
	std::string secondName;
	births date;
	int id;
	readerStatus status;
};



