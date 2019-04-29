#include "Boks.h"
#include<iostream>

Books::Books()
{
}

Books::Books(std::string nB, std::string nA, int y, genre g)
{
	this->name = nB;
	this->author = nA;
	this->year = y;
	this->g = g;
	this->available = true;
}

Books& Books::Empty_Book()
{
	 static Books d("None", "None", 0000, horror);
	 return d;
}

std::string Books::WhatGenre() const
{
	switch (this->g)
	{
	case novel:
		return "Novel";
		break;
	case horror:
		return "Horror";
		break;
	case scientific:
		return "Scientific";
		break;
	case detective:
		return "Detective";
		break;
	case comedy:
		return "Comedy";
		break;
	case fantasy:
		return"Fantasy";
		break;
	default:
		return "None";
		break;

	}
}


std::ostream& operator<<(std::ostream& out, const Books& book)
{
	out << "Book name: " << book.name << "\nAutthor name: " << book.author << "\nGenre :" << book.WhatGenre() << "\nDate : " << book.year;
    (book.available) ? out << "\nThe book is available" : out << "\nThe book is not available";  //переписать
	return out;
}
std::istream& operator>>(std::istream& in, Books& book)
{

	std::cout << "Enter name book: ";
	in >> book.name;
	std::cout << "Enter name Author: ";
	in >> book.author;
	std::cout << "Enter Year of book: ";
	in >> book.year;

	return in;

}

