/*
*@file Product.cpp
* @Author Mustafa OZKAN (mstfa.ozkan6655@gmail.com)
* @Author HASAN KAAN TURAN (hasankaanturan33@gmail.com)
* @Author Oguzhan Mangir (oguzhan.mangir55@gmail.com)
* @date January, 2017
* @brief Product Cpp File

*/


#include "Product.h"
#include <iostream>
#include <string>
using namespace std;


Product::Product(int id, string name, double price) : m_ID(id), m_name(name), m_price(price)
{
	//! A constructor
}
/*!
	return product id 
*/
int Product::getID()//! Its get ýd function
{
	return m_ID;//! return product id
}
/*!
	set product id
*/
void Product::setID(int ID)//! Its set id function
{
	m_ID = ID;//! set Product's id
}
/*!
	return product name
*/
string Product::getName()//! Its get name function
{
	return m_name;//! return product name
}
/*!
	set product name
*/
void Product::setName(string name)//! Its set name function
{
	m_name = name;//! set Product'sname
}
/*!
	return product price
*/
double Product::getPrice()//! Its get price function
{
	return m_price;//! return product price
}
/*!
	set product price
*/
void Product::setPrice(double price)//! Its set price function
{
	m_price = price;// set Product's price
}

void Product::printProperties() const//! Its printfProperties. Products attiributes 
{
	cout << "Product Name   : " << m_name << endl;
	cout << "Product ID     : " << m_ID << endl;
	cout << "Product Price  : " << m_price << endl;
}

Product::~Product()
{
	//! A destructor
}
/*!
void main()
{
	Product *P = new Product(5, "Magazine", 9.99);

	cout<<P->getPrice()<<endl;

	P->printfProperties();

}
*/