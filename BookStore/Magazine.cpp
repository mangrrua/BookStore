/**
* @file Magazine.cpp
* @Author Hasan Kaan TURAN (hasankaanturan33@gmail.com)
* @Author Mustafa OZKAN (mstfa.ozkan6655@gmail.com)
* @Author Oguzhan MANGIR (oguzhan.mangir55@gmail.com)
* @date January, 2017
* @brief Magazine Cpp File
*/


#include "Magazine.h"
#include<string>
#include<iostream>
using namespace std;


Magazine::Magazine(int id, string name, double price, int issue, string type) :Product(id,name,price), m_issue(issue), m_type(type)
{
	//! Magazine constructor
}
void Magazine::printProperties() const//! Print the attributes of book
{
	Product::printProperties();//! Call Product's print properties function
	cout << "Magazine Issue : " << m_issue << endl;
	cout << "Magazine Type  : " << m_type << endl;
}
int Magazine::getIssue()//! Its get issue function
{
	return m_issue;//! return Magazine's issue
}
void Magazine::setIssue(int issue)//! Its set issue function
{
	m_issue = issue;//! set Magazine's issue
}
string Magazine::getType()//! Its get type function
{
	return m_type;//! return Magazine's type
}
void Magazine::setType(string type)//! Its set type function
{
	m_type = type;//! set Magazine's type
}

/*!
void main()
{
	Magazine* m= new Magazine(5 , "Magazine", 5.99, 20, "Rihanna");

	cout<<m->getIssue()<<endl;

	m->printProperties();
}
*/