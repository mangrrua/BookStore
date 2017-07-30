/*
*@file Book.h
* @Author Mustafa OZKAN (mstfa.ozkan6655@gmail.com)
* @Author HASAN KAAN TURAN (hasankaanturan33@gmail.com)
* @Author Oguzhan Mangir (oguzhan.mangir55@gmail.com)
* @date January, 2017
* @brief Book Header File

*This class is one of the subclasses of Product class.
*/

/*! Assignment of book attribute :
*	Author
*	Publisher
*	Page
*/
#pragma once
#include"Product.h"
#include<string>
using namespace std;
class Book : public Product
{
	//!Author of book
	string m_author;
	//!Publisher of book
	string m_publisher;
	//!Page of book
	int m_page;
public:
	//!Destructor.
	Book(int id, string name, double price, string author, string publisher, int page);
	//!Print attributes of book
	void printProperties() const;
	//!Get a author of book
	string getAuthor();
	//!Set a author of book
	void setAuthor(string author);
	//!Get a publisher of book
	string getPublisher();
	//!Set a publisher of book
	void setPublisher(string publisher);
	//!Get a page of book
	int getPage();
	//!Set a page of book
	void setPage(int page);
};

