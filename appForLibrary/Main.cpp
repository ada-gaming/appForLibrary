#include<iostream>
#include<string>
#include<vector>
#include"Boks.h"

int main()
{
	std::vector<Books> horror;
	std::vector<Books>::iterator iterHorror;
	char choise;
	Books temp;
	do
	{
		std::cin>>temp;
		horror.push_back(temp);
		std::cout << "Next book?\ny-yes\nn-no\n";
		std::cin >> choise;
	} while (choise != 'n');
	
	for (iterHorror = horror.begin(); iterHorror != horror.end(); iterHorror++)
	{
		std::cout << *iterHorror;
	}
	return 0;
}