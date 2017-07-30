/**
* @file CreditCard.cpp
* Author Oguzhan MANGIR (oguzhan.mangir55@gmail.com)
* Author Hasan Kaan TURAN (hasankaanturan33@gmail.com)
* Author MUSTAFA OZKAN (mstfa.ozkan6655@gmail.com)
* @date January, 2017
* @brief CreditCard Cpp File
*/


#include "CreditCard.h"
#include<iostream>
using namespace std;


CreditCard::CreditCard(long number, string type, string expDate): m_number(number), m_type(type), m_expDate(expDate)
{
	//! This Credit card consturctor. Paramaters are number, type and expdate
}
CreditCard::~CreditCard()
{
	//! A destructor
}
long CreditCard::getNumber()//! Its get number a credit card 
{
	return m_number;//! return credit card number
}
void CreditCard::setNumber(long number)//! Its set number a credit card 
{
	m_number = number;//! set credit card's number
}

string CreditCard::getType()//! Its get type a credit card 
{
	return m_type;//! return credit card type
}
void CreditCard::setType(string type)//! Its set type a credit card 
{
	m_type = type;//! set credit card's type
}
string CreditCard::getExpdate()//! Its get expdate a credit card 
{
	return m_expDate;//! return credit card expDate
}
void CreditCard::setExpdate(string expDate)//! Its set expDate a credit card 
{
	m_expDate = expDate;//! set credit card's expdate
}

void CreditCard::performPayment() const //! Its performPayment a credit card. Payment is done. 
{
	cout << "Credit Card Payment..." << endl;
}


/*! Test Program for CreditCard Class
void main()
{
	CreditCard *C = new CreditCard(12345678910, "Master Card", "19/20");

	C->performPayment();

	C->setNumber(5);
	cout<<C->getNumber<<endl;

}*/



