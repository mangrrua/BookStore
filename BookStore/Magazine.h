/**
* @file Magazine.h
* @Author Hasan Kaan TURAN (hasankaanturan33@gmail.com)
* @Author Mustafa oZKAN (mstfa.ozkan6655@gmail.com)
* @Author OGuzhan MANGIR (oguzhan.mangir55@gmail.com)
* @date January, 2017
* @brief Magazine Header File
*
* This class is one of the subclasses of the product class.
* In this class, the name ,id ,price ,issue and type of the Magazine Product
* form is requested and the constructor function works like this
*/


#pragma once
#include"Product.h"
#include<string>
using namespace std;

/*!
	-private:
	Magazine's issue
	Magazine's Type
	-public:
	Private Member's get and set functions.
	printProperties() - Message indicating Show Magazine features
*/

class Magazine : public Product
{
	//! Magazine issue
	int m_issue;
	//! Magazine type
	string m_type;
public:
	//! A constructor
	Magazine(int id, string name, double price, int issue, string type);
	//! Print attributes of book
	void printProperties() const;
	//! get issue function
	int getIssue();
	//! set issue function
	void setIssue(int issue);
	//! get type function
	string getType();
	//set type function
	void setType(string type);
};

