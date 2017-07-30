/*
*@file Product.h
* @Author Mustafa OZKAN (mstfa.ozkan6655@gmail.com)
* @Author HASAN KAAN TURAN (hasankaanturan33@gmail.com)
* @Author Oguzhan Mangir (oguzhan.mangir55@gmail.com)
* @date January, 2017
* @brief Product Header File

*  In this file, a base class is defined for the products. 
   This class is polymorphism. Manages other derived classes
*/


#pragma once
#include <string>
using namespace std;


/*! An abstract for Products
	Attributes
		Name, price and ID,
	public;
		private member's get and set functions
*/
class Product
{
	//! Product ýd
	int m_ID;
	//! Product name
	string m_name;
	//! Product price
	double m_price;
public:
	//! A constructor
	Product(int id, string name, double price);
	//! get id function
	int getID();
	//! set id function
	void setID(int ID);
	//! get name function
	string getName();
	//! set name function
	void setName(string name);
	//! get pricd function
	double getPrice();
	//! set price function
	void setPrice(double price);
	//! Paid or not. printfProperties function (Pure virtual)  
	virtual void printProperties() const = 0;
	//! A destructor
	virtual ~Product();
};

