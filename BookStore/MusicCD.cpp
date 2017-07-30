/**
* @file MusicCD.cpp
* @Author Hasan Kaan TURAN (hasankaanturan33@gmail.com)
* @Author Mustafa ÖZKAN (mstfa.ozkan6655@gmail.com)
* @Author Oðuzhan MANGIR (oguzhan.mangir55@gmail.com)
* @date January, 2017
* @brief MusicCD Cpp File
*/
#include "MusicCD.h"
#include<string>
#include<iostream>
using namespace std;

MusicCD::MusicCD(int id, string name, double price, string singer, string type) :Product(id, name, price), m_singer(singer), m_type(type)
{
	//! Constructor Function
}
MusicCD::~MusicCD()
{
	//! Destructor Function
}
void MusicCD::printProperties() const //! Message indicating which product was selected
{
	Product::printProperties(); //! Call Product's print properties function
	cout << "Music Singer   : " << m_singer << endl; // Output
	cout << "Music Type     : " << m_type << endl; // Output
}

string MusicCD::getSinger() //! Get MusicCD's Singer Name Function
{
	return m_singer; //! Return Value
}
void MusicCD::setSinger(string singer) //! Set MusicCD's Singer Name Function
{
	m_singer = singer; //! Value Assigment
}
string MusicCD::getType() //! Get MusicCD's Type Function
{
	return m_type; //! Return Value
}
void MusicCD::setType(string type) //! Set MusicCD's Type Function
{
	m_type = type; //! Value Assigment
}

/* Test program for MusicCD class
void main(){
	MusicCD *m;
	m = new MusicCD("INNA", "Pop");

	cout << "MusicCD's singer name is :" << m->getSinger() << endl;
	cout << "MusicCD's type is :" << m->getType() << endl;

}*/