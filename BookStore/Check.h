/**
* @file Check.h
* @Author Hasan Kaan TURAN (hasankaanturan33@gmail.com)
* @Author Mustafa OZKAN (mstfa.ozkan6655@gmail.com)
* @Author Oguzhan MANGIR (oguzhan.mangir55@gmail.com)
* @date January, 2017
* @brief Check Header File
*
* This class is one of the subclasses of the payment class.
* In this class, the name and bank id of the check payment
* form is requested and the constructor function works like this
*/


#pragma once
#include<string>
#include"Payment.h"
using namespace std;

/*!
	-private:
		Check's Name
		Check's Bank ID
	-public:
		Private Member's get and set functions.
		performpayment() - Message indicating which payment method was selected
*/

class Check : public Payment
{
	string m_name;
	string m_bankID;
public:
	//! A constructor
	Check(string name, string bankID);
	//! get name function
	string getName();
	//! set name function
	void setName(string name);
	//! get bank id
	string getbankID();
	//! set bank id
	void setbankID(string bankID);
	//! A performPayment function. This function is requaired because it is pure virtual
	void performPayment() const;
	~Check();
};

