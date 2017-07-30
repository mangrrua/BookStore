/*
*@file Payment.h
* @Author Mustafa OZKAN (mstfa.ozkan6655@gmail.com)
* @Author HASAN KAAN TURAN (hasankaanturan33@gmail.com)
* @Author Oguzhan Mangir (oguzhan.mangir55@gmail.com)
* @date January, 2017
* @brief Payment Cpp File

*Detailed description of file.
*/

#include "Payment.h"
#include<iostream>
using namespace std;

//!Destrutor.
Payment::~Payment()
{
}

/*!
	set amount of payment
*/
void Payment::setAmount(double amount)
{
	m_amount = amount;
}

/*!
	get amount of payment.
	return Payment's amount
*/
double Payment::getAmount()
{
	return m_amount;
}

/*!
	Give information on completion of payment.
*/
void Payment::performPayment() const
{
	cout << "Payment is done..." << endl;
}

/*! Test Program for Payment Class
void main()
{
	Payment *P1, *P2, *P3;

	P1 = new CreditCard(1234567890, "MasterCard", "February 2021");
	P2 = new Cash();
	P3 = new Check("Garanti Bank", "124567");

	cout << "P1 payment method name is : " << P1->performPayment() << endl;
	cout << "P2 payment method name is : " << P2->performPayment() << endl;
	cout << "P3 payment method name is : " << P3->performPayment() << endl;
*/