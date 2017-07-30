#pragma once

/**
* @file CreditCard.h
* Author Oguzhan MANGIR (oguzhan.mangir55@gmail.com)
* Author Hasan Kaan TURAN (hasankaanturan33@gmail.com)
* Author MUSTAFA OZKAN (mstfa.ozkan6655@gmail.com)
* @date January, 2017
* @brief Payment Header File
*
* This class derives from the Payment base class. 
  Represent a form of Payment. 
  Credit card information is required for this type of payment.
*/


#include"Payment.h"
#include<string>
using namespace std;

/*! 
	Private mumber;
		credit card number
		credit card type 
		credit card expDate

	Public;
		Private members's get and set functions
	Its necessary function performPayment. Message indicating which payment methods was selected 
*/

class CreditCard : public Payment
{
	//! credit card number
	long m_number;
	//! credit card type
	string m_type;
	//! credit card expDate
	string m_expDate;
public:
	//! A constuctor
	CreditCard(long number, string type, string expDate);
	//! get number function
	long getNumber();
	//! set number function
	void setNumber(long number);
	//! get type funtion
	string getType();
	//! set type function
	void setType(string type);
	//! get expdate function
	string getExpdate();
	//! set expdate function
	void setExpdate(string expDate);
	//! A performPayment function. This function is requaired because it is pure virtual
	void performPayment() const;
	//! A destructor
   	~CreditCard();
};

