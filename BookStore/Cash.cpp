/*
*@file Cash.cpp
* @Author Mustafa OZKAN (mstfa.ozkan6655@gmail.com)
* @Author HASAN KAAN TURAN (hasankaanturan33@gmail.com)
* @Author Oguzhan Mangýr (oguzhan.mangir55@gmail.com)
* @date January, 2017
* @brief Cash Cpp File

*Detailed description of file.
*/
#include "Cash.h"
#include<iostream>
using namespace std;

Cash::Cash()
{
	 //! constructor
}
Cash::~Cash()
{
	//! destructor
}
//!Scan the message 'Cash Payment'.
void Cash::performPayment() const
{
	cout << "Cash Payment..." << endl;
}//!end of the Cash function.


 /*! Test Program for Cash Class
 void main()
 {
	 Cash *P1 = new Cash();
	 P1->performPayment();
	 cout << P1->performPayment() << endl;
 }
 */