/*
*@file ProductToPurchase
* @Author Mustafa OZKAN (mstfa.ozkan6655@gmail.com)
* @Author HASAN KAAN TURAN (hasankaanturan33@gmail.com)
* @Author Oguzhan Mangir (oguzhan.mangir55@gmail.com)
* @date January, 2017
* @brief ProductToPurchase Cpp File
*/

#include "ProductToPurchase.h"

//!Constructor
//!Assignment value of product and quantity
ProductToPurchase::ProductToPurchase(Product* product, int quantity) : m_product(product), m_quantity(quantity)
{
}

//!Destructor
ProductToPurchase::~ProductToPurchase()
{
}

//!Get a product and return this
Product* ProductToPurchase::getProduct()
{
	return m_product;
}
//!Assignment value of product to add in purchase list. 
void ProductToPurchase::setProduct(Product* product)
{
	m_product = product;
}
//!Get a quantity in the ProdcutPurchase list
int ProductToPurchase::getQuantity()
{
	return m_quantity;
}
//!Assignment value of quantity before add it to ProcductPurchase list.
void ProductToPurchase::setQuantity(int quantity)
{
	m_quantity = quantity;
}
//!Print of product properties
void ProductToPurchase::print() const
{
	m_product->printProperties();
}
//!Calculate price pf product and return this value
double ProductToPurchase::PriceInvoce()
{
	return (m_product->getPrice() * m_quantity);
}

/* Test Program for ProductToPurchase Class
void main()
{
	Product *P1, *P2, *P3;
	ProductToPurchase *PTP1, *PTP2, *PTP3;

	P1 = new Book(1000, "Asi Melekler", 20.50, "Danielle Trussoni", "Dogan Kitap", 432);
	P2 = new Magazine(2000, "Turk Dili Dergisi", 6.99, 20, "Derleme");
	P3 = new MusicCD(3000, "Maximum", 120.00, "Murat Boz", "Pop");

	PtP1 = new ProductToPurchase(P1,5);
	PtP2 = new ProductToPurchase(P2,10);
	PtP3 = new ProductToPurchase(P3,15);

	cout << "There are " << PtP1->getQuantity() << "piece(s) " << PTP1->getProduct()->getName() << endl;
	cout << "There are " << PtP2->getQuantity() << "piece(s) " << PTP2->getProduct()->getName() << endl;
	cout << "There are " << PtP3->getQuantity() << "piece(s) " << PTP3->getProduct()->getName() << endl;

}
*/