#pragma once
#include <string>
#include<iostream>
class Reader;
class Books
{
public:
	static enum genre { none, novel, horror, scientific, detective, comedy, fantasy };  //перечисление жанров
	class Invalid {};
	Books();                                                   //конструктор по умолчанию
	Books(std::string nB, std::string  nA, int y, genre g);    //конструктор
	Books& Empty_Book();                                       //функция для конструктора по умолчанию
	std::string WhatGenre()const;                             // Константая функция преобразует перечиление жанра в строку
	std::string WhatGenre(genre x);
	friend std::ostream& operator <<(std::ostream& out, const Books& book);   //Дружественная функция вывода класса в поток
	friend std::istream& operator >>(std::istream& in,  Books& book);
private:
	std::string name;
	std::string author;
	genre g;
	int year;
	int available;


	
};


