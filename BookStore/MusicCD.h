/**
* @file MusicCD.h
* @Author Hasan Kaan TURAN (hasankaanturan33@gmail.com)
* @Author Mustafa oZKAN (mstfa.ozkan6655@gmail.com)
* @Author Oguzhan MANGIR (oguzhan.mangir55@gmail.com)
* @date January, 2017
* @brief MusicCD Header File
*
* This class is one of the subclasses of the product class.
* In this class, the name ,id ,price ,singer and type of the Music Product
* form is requested and the constructor function works like this
*/
#pragma once
#include"Product.h"
#include<string>
using namespace std;

/*!
-private:
MusicCD's Singer Name
MusicCD's Type
-public:
Private Member's get and set functions.
printProperties() - Message indicating Show music features
*/

class MusicCD : public Product
{
	string m_singer; //! MusicCD's Singer Name
	string m_type; //! MusicCD's Type
public:
	//! Constructor Function
	MusicCD(int id, string name, double price, string singer, string type);
	//! Destructor Function
	~MusicCD();
	//! Get MusicCD's Singer Name Function
	string getSinger();
	//! Set MusicCD's Singer Name Function
	void setSinger(string singer);
	//! Get MusicCD's Type Function
	string getType();
	//! Set MusicCD's Type Function
	void setType(string type);
	//! Message indicating which product was selected
	void printProperties() const;
};