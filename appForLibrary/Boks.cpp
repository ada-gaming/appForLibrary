#include "Boks.h"
#include<iostream>

Books::Books()
{
	Books::Empty_Book();
}

Books::Books(std::string nB, std::string nA, int y, genre g)
{
	this->name = nB;
	this->author = nA;
	this->year = y;
	this->g = g;
	this->available = 1;
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

std::string Books::WhatGenre(genre x)
{

	switch (x)
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
	out << "--------------------------------------------------------------------------------------\n";
	out << "Book name: " << book.name << "\nAutthor name: " << book.author << "\nGenre :" << book.WhatGenre() << "\nDate : " << book.year;
    (book.available) ? out << "\nThe book is available\n" : out << "\nThe book is not available\n";  //переписать
	out << "--------------------------------------------------------------------------------------\n";
	return out;
}
std::istream& operator>>(std::istream& in, Books& book)
{

	std::cout << "Enter name book:\t";
	in >> book.name;
	std::cout << "Enter name Author:\t";
	in >> book.author;
	std::cout << "Enter Year of book:\t";
	in >> book.year;
	if (!(std::cin.good())) throw Books::Invalid();
	std::cout << "Choise genre of this book:\n";
	for (int i = Books::none; i <= Books::fantasy; i++)
	{
		std::cout<<i<<"\t"<<book.WhatGenre(static_cast<Books::genre>(i))<<"\n";
	}
	int x;
	in >> x;
	while ((x < 0) || (x > Books::fantasy))
	{
		std::cout << "incorrect input try again:\n";
		in >> x;
	}
	book.g = static_cast<Books::genre>(x);
	


	return in;

}

