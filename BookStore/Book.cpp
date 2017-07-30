/*
*@file Book.h
* @Author Mustafa OZKAN (mstfa.ozkan6655@gmail.com)
* @Author HASAN KAAN TURAN (hasankaanturan33@gmail.com)
* @Author Oguzhan Mangir (oguzhan.mangir55@gmail.com)
* @date January, 2017
* @brief Book Cpp File
*/

#include "Book.h"
#include<string>
#include<iostream>
using namespace std;

/*!Constructor
Assignment of values
*/
Book::Book(int id, string name, double price, string author, string publisher, int page) :Product(id, name, price), m_author(author), m_publisher(publisher), m_page(page)
{
}
//!Print the attributes of book
void Book::printProperties() const
{
	Product::printProperties();
	cout << "Book Author    : " << m_author << endl;
	cout << "Book Publisher : " << m_publisher << endl;
	cout << "Book Page      : " << m_page << endl;
}
/*!
	Get a author of book and return this
	return book's author
*/
string Book::getAuthor()
{
	return m_author;
}
/*!
	Assignment a author of book
	set Book's author 
*/
void Book::setAuthor(string author)
{
	m_author = author;
}
/*!
	Get a publisher of book and return this
	return Book's publisher
*/
string Book::getPublisher()
{
	return m_publisher;
}
/*!
	Assignment publisher of book
	set Author's publisher
*/
void Book::setPublisher(string publisher)
{
	m_publisher = publisher;
}
//!Get a page pf book and return this
int Book::getPage()
{
	return m_page;
}
//!Assignment page of book
void Book::setPage(int page)
{
	m_page = page;
}

/*! Test Program for Book Class
void main()
{
	Book *P1 = new Book(1000, "Asi Melekler", 20.50, "Danielle Trussoni", "Dogan Kitap", 432);

	P1->printProperties();
}
*/