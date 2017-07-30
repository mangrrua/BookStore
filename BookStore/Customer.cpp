/**
* @file Customer.cpp
* @Author Hasan Kaan TURAN (hasankaanturan33@gmail.com)
* @Author Mustafa OZKAN (mstfa.ozkan6655@gmail.com)
* @Author Oguzhan MANGIR (oguzhan.mangir55@gmail.com)
* @date January, 2017
* @brief Customer Cpp File
*/

#include "Customer.h"
#include<iostream>
using namespace std;


Customer::Customer(string name, string address, string phone, string email, string username, string password) : m_name(name), m_address(address), m_phone(phone), m_email(email), m_username(username), m_password(password)
{
	m_bonus = 10;
	//! Constructor
}
Customer::Customer()
{
	//! Constructor
}
Customer::~Customer()
{
	//! Destructor
}

/*!
* Get Customer's ID Function
* Output for user notification
*/
void Customer::sendBill()
{
	cout << "Send Bill" << endl; 
}

/*!
* Get Customer's ID Function
* return customer id 
*/
long Customer::getCustomerID()
{
	return m_customerID;
}
/*!
* Set Customer's ID Function
* Value Assigment
*/
void Customer::setCustomerID(long customerID)
{
	m_customerID = customerID;
}

/*!
* Get Customer's Name Function
*  return customer name
*/
string Customer::getName()
{
	return m_name;
}
/*! 
* Set Customer's Name Function
* Value Assigment
*/
void Customer::setName(string name)
{
	m_name = name; 
}
/* !
* Get Customer's Adress Function
* return customer address
*/
string Customer::getAddress()
{
	return m_address; 
}
/*!
* Set Customer's Adress Function
* Value Assigment
*/
void Customer::setAddress(string address)
{
	m_address = address; 
}
/*!
* Get Customer's Phone
* return customer phone
*/
string Customer::getPhone()
{
	return m_phone; 
}
/*!
* Set Customer's Phone
* Value Assigment
*/
void Customer::setPhone(string phone)
{
	m_phone = phone; 
}
/*!
* Get Customer's Bonus
* return customer bonus
*/
double Customer::getBonus()
{
	return m_bonus; 
}
/*!
* Set Customer's Bonus
* Value Assigment
*/
void Customer::setBonus(double bonus)
{
	m_bonus = bonus; 
}
/*!
* Get Customer's E-Mail
* return customer e-mail
*/
string Customer::getEmail()
{
	return m_email; 
}
/*!
* Set Customer's E-Mail
* Value Assigment
*/
void Customer::setEmail(string email)
{
	m_email = email;
}
/*!
* Get Customer's Username
* return customer username
*/
string Customer::getUsername()
{
	return m_username; 
}
/*!
* Set Customer's Username
* Value Assigment
*/
void Customer::setUsername(string username)
{
	m_username = username; 
}
/*!
* Get Customer's Password
* return customer password
*/
string Customer::getPassword()
{
	return m_password; 
}
/*!
* Set Customer's Password
* Value Assigment
*/
void Customer::setPassword(string password)
{
	m_password = password; 
}
//! It is checked whether there is a record of the information entered
bool Customer::checkAccount(string username, string password)
{
	//! If the entered user information matches the information in the system
	if (m_username == username && m_password == password)
	{
		return true;
	}
	else
	{
		return false;
	}
}
//! Bonus amount of the product is added to the bonus amount of the customer
void Customer::addBonus(double bonus)
{
	m_bonus = m_bonus + bonus;
}
//! The bonus amount of the customer is deducted from the price
void Customer::useBonus()
{
	cout << "Bonus was used" << endl; //! User notification
	m_bonus = 0;
}

void Customer::printfPerson()
{
	cout << "Name   : " << m_name << endl;     //! User notification
	cout << "Address: " << m_address << endl;  //! User notification
	cout << "Phone  : " << m_phone << endl;    //! User notification
	cout << "E mail : " << m_email << endl;    //! User notification
}

/* Test program for Customer class
void main()
{
	Customer *c;
	c = new Customer("Mustafa Yildizdogan", "Mersin/Turunclu", "05065887458", "mstyldz@gmail.com", "m.yildiz33", 12345);

	cout << "Customer's Name :" << c->getName() << endl;
	cout << "Customer's Adress :" << c->getAdress() << endl;
	cout << "Customer's Phone :" << c->getPhone() << endl;
	cout << "Customer's E-Mail :" << c->getEmail() << endl;
	cout << "Customer's Username :" << c->getUsername() << endl;
	cout << "Customer's Password :" << c->getPassword() << endl;
	cout << "Customer's Bonus :" << c->getBonus() << endl;
	cout << "Customer's ID :" << c->getCustomerID() << endl;

}*/