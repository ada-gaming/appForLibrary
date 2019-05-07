#include "Reader.h"






Reader::Reader()
{
	indicator++;
	id = indicator;
	firstName = "None";
	secondName = "None";
	status = User;
	date.age = 0;
	date.day = 0;
	date.month = static_cast <Month> (1);
}

void Reader::print()
{
	std::cout << firstName << std::endl;
}


int Reader::indicator = 0;

std::istream& operator>>(std::istream& in, Reader& customers)
{
	int m;
	std::cout<<"Enter first name\t";
	in >> customers.firstName;
	std::cout << "\nEnter second nam\t";
	in >> customers.secondName;
	std::cout << "Enter date of Customer(format: year(xxxx) month(xx) day(xx) )\n";
	in >> customers.date.age;
	if ((customers.date.age < 1900) || (customers.date.day > 2019))
	{
		std::cout << "Inccorect Year\n";
		customers.date.age = 2000;
	}
	in >> m;
	if ((m < 1) || (m > 12))
	{
		std::cout << "Inccorect Month\n";
		m = 1;
	}
	customers.date.month = static_cast<Month>(m);
	in >> customers.date.day;
	if ((customers.date.day < 1) || (customers.date.day > 30))
	{
		std::cout << "Inccorect Day\n";
		customers.date.day = 1;
	}
	system("cls");
	return in;
}

std::ostream& operator<<(std::ostream& out, const Reader& customers)
{
	out << "id" << customers.id<<"\n";
	out << customers.firstName << "  " << customers.secondName << "\n";
	out << customers.date.age << " " << customers.date.month << " " << customers.date.day<<"\n";
	out << "Reader status  " << customers.status<<"\n";

	return out;
}
