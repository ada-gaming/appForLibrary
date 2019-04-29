#include<iostream>
#include<string>
#include<vector>
#include"Boks.h"

void Add_new_book(std::vector<Books>& x);

int main()
try{
	std::vector<Books> inLib;
	std::vector<Books>::iterator iterHorror;
	char choise;

	do
	{
		Add_new_book(inLib);
		std::cout << "Next book?\ny-yes\nn-no\n";
		std::cin >> choise;
	} while (choise != 'n');
	
	for (iterHorror = inLib.begin(); iterHorror != inLib.end(); iterHorror++)
	{
		std::cout << *iterHorror;
	}
	return 0;
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
