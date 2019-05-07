#include<iostream>
#include<string>
#include<vector>
#include"Boks.h"
#include"Reader.h"
void Add_new_book(std::vector<Books>& x);
void Add_new_User(std::vector<Reader>& x);
void printBooks(std::vector<Books>& x);
void printUser(std::vector<Reader>& x);

int main()
try{
	std::vector<Books> inLib;
	std::vector<Reader>readers;

	char choise;
	int ch;
	do
	{
		std::cout << "Choise:\n1-Add new book in library\n2-Add new Customers\n";
		std::cin >> ch;
		switch (ch)
		{
		case 1:
			Add_new_book(inLib);
			system("cls");
			break;
		case 2:
			Add_new_User(readers);
			system("cls");
			break;
		}
			std::cout << "Next book?\ny-yes\nn-no\n";
		
		std::cin >> choise;

	} while (choise != 'n');
	
	printBooks(inLib);
	printUser(readers);
}
catch (Books::Invalid)
{
	std::cout << "Error when entering the date\n";
	return 1;
}

void Add_new_book(std::vector<Books>& x)
{
	Books temp;
	std::cin >> temp;
	x.push_back(temp);
}

void Add_new_User(std::vector<Reader>& x)
{
	Reader temp;
	std::cin >> temp;
	x.push_back(temp);
}

void printBooks(std::vector<Books>& x)
{
	std::vector<Books>::const_iterator iter;
	for (iter = x.begin(); iter != x.end(); iter++)
	{
		std::cout << *iter;
	}
}

void printUser(std::vector<Reader>& x)
{
	std::vector<Reader>::const_iterator iter;
	for (iter = x.begin(); iter != x.end(); iter++)
	{
		std::cout << *iter;
	}
}
