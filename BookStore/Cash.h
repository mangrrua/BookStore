/*
* @file Cash.h
* @Author Mustafa OZKAN (mstfa.ozkan6655@gmail.com)
* @Author HASAN KAAN TURAN (hasankaanturan33@gmail.com)
* @Author Oguzhan Mangir (oguzhan.mangir55@gmail.com)
* @date January, 2017
* @brief Cash Header File

* This class derives from the Payment base class. 
  Represent a form of Payment. 
*/

#pragma once
//include Payment header.
#include"Payment.h"
//Description Cash class

/*! 
	The payment method is cash and specifies the amount of payment
*/

class Cash : public Payment
{
public:
	//!Constructor.
	Cash();
	//! Destructor
	~Cash();
	//!Message indicating which payment method was selected.
	void performPayment() const;
};//!end of Cash class