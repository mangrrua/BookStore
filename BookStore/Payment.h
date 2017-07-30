#pragma once
/*
*@file Payment.h
* @Author Mustafa OZKAN (mstfa.ozkan6655@gmail.com)
* @Author HASAN KAAN TURAN (hasankaanturan33@gmail.com)
* @Author Oguzhan Mangir (oguzhan.mangir55@gmail.com)
* @date January, 2017
* @brief Payment Header File

* Indicating the types of payment, 
  assigning amounts to be paid.
  This class composition to Shopping Cart
*/

/*! An abstract for payment methods
	Attributes
	amount to pay
*/
//!Description class Payment
class Payment
{
private:
	//!amount to pay
	double m_amount;
public:
	//!Destructor
	~Payment();
	//!get a amount
	double getAmount();
	//!set a amount.
	void setAmount(double amount);
	//! Paid or not. perform payment (Pure virtual) 
	virtual void performPayment() const = 0;
};//!end of Payment class

