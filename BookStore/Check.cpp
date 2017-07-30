/*
*@file Check.cpp
* @Author Mustafa OZKAN (mstfa.ozkan6655@gmail.com)
* @Author HASAN KAAN TURAN (hasankaanturan33@gmail.com)
* @Author Oguzhan Mangir (oguzhan.mangir55@gmail.com)
* @date January, 2017
* @brief Check Cpp File

*/


#include "Check.h"
#include<iostream>
using namespace std;

Check::Check(string name, string bankID) : m_name(name), m_bankID(bankID)
{
	//! Constructor Function
}
Check::~Check()
{
	//! Destructor Function
}

string Check::getName() //! Get Check's Name
{
	return m_name;
}
void Check::setName(string name) //! Set Check's Name
{
	m_name = name;
}
string Check::getbankID() //! Get Bank ID
{
	return m_bankID;
}
void Check::setbankID(string bankID) //! Set Bank ID
{
	m_bankID = bankID;
}
void Check::performPayment() const //! Message indicating which payment method was selected
{
	cout << "Check Payment..." << endl; //! Output For Check Payment
}

/*! Test program for Check class
void main(){
	Check *c;
	c = new Check("Ziraat Bank", "331247");

	cout << "c. check's name is :" << c->getName() << endl;
	cout << "c. check's Bank ID is :" << c->getbankID() << endl;

}*/