/*
*@file ProductToPurchase
* @Author Mustafa OZKAN (mstfa.ozkan6655@gmail.com)
* @Author HASAN KAAN TURAN (hasankaanturan33@gmail.com)
* @Author Oguzhan Mangir (oguzhan.mangir55@gmail.com)
* @date January, 2017
* @brief ProductToPurchase Header File

/*!This class aggregation to Prodcut class
/*!This class composition to Shopping Cart
*/

#pragma once
#include"Product.h"

/*!This class includes item and quantity
/*!The contains adding the Shopping Cart
*/

class Product;

class ProductToPurchase
{
private:
	//Object of product
	Product* m_product;
	// Quantity of Product to purchase
	int m_quantity;
public:
	//!Constructor
	ProductToPurchase(Product* product, int quantity);
	//!Destructor
	~ProductToPurchase();
	//!Get from Product
	Product* getProduct();
	//!Assignment product
	void setProduct(Product* product);
	//!Get a quantity
	int getQuantity();
	//!Assignment a value of quantity
	void setQuantity(int quantity);
	//!Calculate the price of received product
	double PriceInvoce();
	//!Print the properties
	void print() const;
};
