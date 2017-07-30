/**
* @file Customer.h
* @Author Hasan Kaan TURAN (hasankaanturan33@gmail.com)
* @Author Mustafa OZKAN (mstfa.ozkan6655@gmail.com)
* @Author Oguzhan MANGIR (oguzhan.mangir55@gmail.com)
* @date January, 2017
* @brief Customer Header File
*
* This class aggregation to ShoppingCart class
* In this class, the customer's personal information,
* bonus information, billing information and account
* information are kept
*/
#pragma once
#include<string>
#include<vector>
using namespace std;

/*!
	-private:
		Customer's ID
		Customer's Name
		Customer's Adress
		Customer's Phone
		Customer's Bonus
		Customer's E-Mail
		Customer's Username
		Customer's Password
	-public:
		Private Member's get and set functions.
		performpayment() - Message indicating which payment method was selected
*/

class Customer
{
private:
	long m_customerID; //! Customer's ID
	string m_name; //! Customer's Name
	string m_address; //! Customer's Adress
	string m_phone; //! Customer's Phone
	double m_bonus; //! Customer's Bonus
	string m_email; //! Customer's E-Mail
	string m_username; //! Customer's Username
	string m_password; //! Customer's Password
public:
	//! Constructor 1
	Customer(string name, string address, string phone, string email, string username, string password);
	//! Constructor 2
	Customer();
	//! Destructor
	~Customer();
	//! It contains information that the bill has been sent
	void sendBill();
	//! Get Customer's ID Function
	long getCustomerID();
	//! Set Customer's ID Function
	void setCustomerID(long customerID);
	//! Get Customer's Name Function
	string getName();
	//! Set Customer's Name Function
	void setName(string name);
	//! Get Customer's Adress Function
	string getAddress();
	//! Set Customer's Adress Function
	void setAddress(string address);
	//! Get Customer's Phone
	string getPhone();
	//! Set Customer's Phone
	void setPhone(string phone);
	//! Get Customer's Bonus
	double getBonus();
	//! Set Customer's Bonus
	void setBonus(double bonus);
	//! Get Customer's E-Mail
	string getEmail();
	//! Set Customer's E-Mail
	void setEmail(string email);
	//! Get Customer's Username
	string getUsername();
	//! Set Customer's Username
	void setUsername(string username);
	//! Get Customer's Password
	string getPassword();
	//! Set Customer's Password
	void setPassword(string password);
	//! This function gives the name address phone and mail information of the customer
	void printfPerson();
	//! It is checked whether there is a record of the information entered
	bool checkAccount(string username, string password);
	//! Bonus amount of the product is added to the bonus amount of the customer
	void addBonus(double bonus);
	//! The bonus amount of the customer is deducted from the price
	void useBonus();
};