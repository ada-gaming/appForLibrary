#pragma once
#include <string>
#include<iostream>
class Reader;
class Books
{
public:
	static enum genre { none, novel, horror, scientific, detective, comedy, fantasy };  //������������ ������
	class Invalid {};
	Books();                                                   //����������� �� ���������
	Books(std::string nB, std::string  nA, int y, genre g);    //�����������
	Books& Empty_Book();                                       //������� ��� ������������ �� ���������
	std::string WhatGenre()const;                             // ���������� ������� ����������� ����������� ����� � ������
	std::string WhatGenre(genre x);
	friend std::ostream& operator <<(std::ostream& out, const Books& book);   //������������� ������� ������ ������ � �����
	friend std::istream& operator >>(std::istream& in,  Books& book);
private:
	std::string name;
	std::string author;
	genre g;
	int year;
	int available;


	
};


