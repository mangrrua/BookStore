/*
*@file ShoppingCart.h
* @Author Mustafa OZKAN (mstfa.ozkan6655@gmail.com)
* @Author HASAN KAAN TURAN (hasankaanturan33@gmail.com)
* @Author Oguzhan Mangir (oguzhan.mangir55@gmail.com)
* @date January, 2017
* @brief ShoppingCart Header File
*/

/*! This class aggregation with Customer class
* This class composition with Payment class
* With the product to ProductToPurchase class
* the value of the product is reached,
* Also by reaching payment types in the payment class
* Makes shopping happen
*/

#pragma once
#include"Payment.h"
#include<list>
#include"Customer.h"
#include"ProductToPurchase.h"
#include<vector>
#include"CreditCard.h"
#include"Cash.h"
#include"Check.h"

class ProductToPurchase;
class Payment;
class Customer;

//! m_productToPurchase define list iterator
typedef list<ProductToPurchase *>::iterator iter;


/*!
	m_productToPurchase; a list that hold productToPurchase object
	m_paymentMethods; this is payment object
	m_customer; this is customer object
	placeOrder(); This function selects how to make the payment
	ShowInvoce();  This function displays the total price of the products received
	orderCanceled(); This function cancellation of products
	printProducts(); This function list of products in the shopping cart
	addProduct(); This function adds the Product object to the list m_productToPurchase
	removeProduct(); This function remove the Product object to the list m_productToPurchase 
	setCustomer(); This function takes the customer object as a parameter and assigns it to the customer object in the class
	getCustomer(); This function return customer object
*/
class ShoppingCart
{
private:

	list<ProductToPurchase* > m_productsToPurchase;
	Payment* m_paymentMethod;
	Customer* m_customer;
	bool m_isBonusUsed;
	bool m_PS;
public:
	//! ShoppingCart constructor
	ShoppingCart(Customer* customer);
	//!ShoppingCat destructor
	~ShoppingCart();
	Payment* getPaymentMethod();
	void setPaymentMethod(Payment* paymentMethod);
	Customer* getCustomer();
	void setCustomer(Customer* customer);
	void setBonusUsed();
	void addProduct(ProductToPurchase* product);
	void removeProduct(ProductToPurchase* product);
	void placeOrder();
	void cancelOrder();
	void printProducts();
	void showInvoce();
	void CustomerBonus();
};

