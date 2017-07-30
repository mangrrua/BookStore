/*
*@file ShoppingCart.cpp
* @Author Mustafa OZKAN (mstfa.ozkan6655@gmail.com)
* @Author HASAN KAAN TURAN (hasankaanturan33@gmail.com)
* @Author Oguzhan Mangir (oguzhan.mangir55@gmail.com)
* @date January, 2017
* @brief ShoppingCart Cpp File
*/


#include "ShoppingCart.h"
#include<iostream>
#include<iomanip>
using namespace std;

/*!
* Shopping Constructor
* When the A object is created, the customer object is sent as a parameter.
* Then, the object that is sent as a parameter is assigned to the customer object in the class.
* In the first case we made the bonus status false
* In the first case we made the payment station status false (m_PS)
*/
ShoppingCart::ShoppingCart(Customer* customer)
{
	m_customer = customer;
	m_isBonusUsed = false;
	m_PS = false;
}
/*!
* When the object is destroyed, 
	it is destroyed in the elements and payment type in the list.

	Because there is a composition relation between them.
*/
ShoppingCart::~ShoppingCart()
{
	iter it;
	for (it = m_productsToPurchase.begin(); it != m_productsToPurchase.end(); it++)
		m_productsToPurchase.erase(it);//! delete product in the list

	delete m_paymentMethod;// delete payment method
}
/*!
	Shopping Cart get payment method function
	return ShoppingCart's payment method
*/
Payment* ShoppingCart::getPaymentMethod()
{
	return m_paymentMethod;
}
/*!
	Shopping Cart set payment method function
	Parameter; Payment object
	set ShoppingCart's payment methods
*/
void ShoppingCart::setPaymentMethod(Payment* paymentMethod)
{
	m_paymentMethod = paymentMethod;
}
/*!
	Shopping Cart get customer method function
	return ShoppingCart's customer
*/
Customer* ShoppingCart::getCustomer()
{
	return m_customer;
}
/*!
	Shopping Cart set customer method function
	Parameter; Customer object
	set ShoppingCart's customer
*/
void ShoppingCart::setCustomer(Customer* customer)
{
	m_customer = customer;
}
/*!	
* If m_isBonusUsed is false, enable bonus
	Show person's bonus amount
* If m_isBonusUsed is true, disable bonus
	Show person's bonus amount
*/
void ShoppingCart::setBonusUsed()
{
	if (m_isBonusUsed == true)
	{
		m_isBonusUsed = false; // Bonus available
		cout << "You can use bonus amount : "<<m_customer->getBonus()<< endl;
		cout << "You can not use the bonus " << endl << endl;
	}
	else
	{
		m_isBonusUsed = true;// Bonus disable
		cout << "You can use bonus amount : " << m_customer->getBonus() << endl;
		cout << "You can use the bonus" << endl << endl;
	}
}
/*!
* ShoppingCart Remove Product 
* This function first checks whether a list is empty.
* If it is not empty, it tries to find the product that is sent as parameter to the list with ID.
* If it finds the product, it will compare the amount we want to delete with the amount of the product in the ShoppingCart.
* If the amount in the basket is too much, the product is reduced to the desired amount, 
	if it is the same, it remove the product, 
	and if it is less, there is not enough product warnings.
* If list is empty list gives empty warning.
*/
void ShoppingCart::removeProduct(ProductToPurchase* product)
{
	iter it;

	if (!m_productsToPurchase.empty())// if list not empty
	{
		for (it = m_productsToPurchase.begin(); it != m_productsToPurchase.end(); it++){
			if ((*it)->getProduct()->getID() == product->getProduct()->getID()){
				if ((*it)->getQuantity() > product->getQuantity())// if product quantity is greater than 
				{
					(*it)->setQuantity((*it)->getQuantity() - product->getQuantity());// product's quantity minus we want to quantity
					cout << product->getProduct()->getName() << " was found and " << setw(5) << product->getQuantity() << " Piece(s) was Deleted" << endl << endl;

					break;//! exit the loop
				}
				else if ((*it)->getQuantity() == product->getQuantity()) {//! if product quantity is equal to
					m_productsToPurchase.erase(it);
					cout << "Product was removed" << endl << endl;
					break;// exit the loop
				}
				else// if product quantity is less than 
					cout << "There is not enough of the relevant product to delete" << endl << endl;
			}
		}
	}
	else
		cout << "Shopping Cart is empty! You can't delete! " << endl << endl;
}
/*!
* ShoppingCart Add Product
* This function first checks whether a list is empty.
* If it is not empty, it tries to find the product that is sent as parameter to the list with ID.
* If the product is available, the piece(s) we want to add is added to the product piece(s) and 
	gives found the product message
* If the product is not available, add it to the product (m_productToPurchase.push_back(product))
* If the list is empty, add the product directly (m_productToPurchase.push_back(product))
*/
void ShoppingCart::addProduct(ProductToPurchase* product)
{
	iter it;
	bool contain = false; // Availability
	if (!m_productsToPurchase.empty()) { // if list not empty
		for (it = m_productsToPurchase.begin(); it != m_productsToPurchase.end(); it++)
			if ((*it)->getProduct()->getID() == product->getProduct()->getID()) {
				(*it)->setQuantity((*it)->getQuantity() + product->getQuantity());
				cout << product->getProduct()->getName() << " found and " <<setw(5)<< product->getQuantity() << " piece(s) added to your cart" << endl << endl;
				contain = true;
				break;// exit the loop
			}
		if (!contain) // If it is available
			m_productsToPurchase.push_back(product);// Add to end of list
	}
	else {
		m_productsToPurchase.push_back(product);// Add to end of list
	}
}
/*!
* ShoppingCart Print Product
* This function first checks whether a list is empty.
* If it is not empty, it shows the names, quantities and ID(s) of the products in the list.
* If it is empty, it shows no product message
*/
void ShoppingCart::printProducts() 
{
	cout << "+--------------------+" << endl;
	cout << "| List Shopping Cart |" << endl;
	cout << "+--------------------+" << endl << endl;

	iter it; // Iterator to scan on the list
	int i = 1;
	if (!m_productsToPurchase.empty()) { // if list not empty
		for (it = m_productsToPurchase.begin(); it != m_productsToPurchase.end(); it++, i++) {
			cout << i << ". product: " << (*it)->getProduct()->getName() <<setw(7)<< (*it)->getQuantity() << " piece(s)" <<endl;
			cout << "|-> " << "ID: " << (*it)->getProduct()->getID() << endl;
		}
	}
	else
		cout << "No items purchased" << endl << endl;
}
void ShoppingCart::showInvoce()
{
	cout << "+-------------+" << endl;
	cout << "| Show Invoce |" << endl;
	cout << "+-------------+" << endl << endl;

	iter it;
	double totalPrice = 0;
	int i = 1;
	if (!m_productsToPurchase.empty()){
		cout << "No" << setw(25) << "Product Name" << setw(27) << "Quantity" << endl;
		for (it = m_productsToPurchase.begin(); it != m_productsToPurchase.end(); it++, i++)
		{
			cout << i << "-" << setw(25) << (*it)->getProduct()->getName() << setw(20) << (*it)->getQuantity() << " piece(s) " << endl;
			totalPrice += ((*it)->getQuantity()) * ((*it)->getProduct()->getPrice());
		}
	}
	cout << endl;

	cout << "Total Price " << totalPrice << endl;
}
/*!
* Ordering the purchase made.
* Firstly, payment type is requested
	asked to enter information according to the selected payment type.
* The status of using the bonus before the payment is completed is questioned
	and the payment process is completed.
* If credit cart is selected then get a informations of credit cartcreate the credit card object with
	this information and transfer it to the payment card
* If shopping cart is not empty, then calculate the total price in ProdcutToPurchase list
* !If selected Cash then create the cash object with this information and transfer it to the payment card
* If selected Check then give a informations of check create the credit card object withthis information and 
	transfer it to the payment card
* Finally, the listed elements are removed
*/
void ShoppingCart::placeOrder()
{
	cout << "+-------------+" << endl;
	cout << "| Place Order |" << endl;
	cout << "+-------------+" << endl << endl;

	if (!m_productsToPurchase.empty())
	{
		cout << "Please select your payment method : " << endl;
		cout << "1. Credit Card " << endl;
		cout << "2. Cash " << endl;
		cout << "3. Chech " << endl;
		int choice;
		cout << "Choose one:";
		cin >> choice;
		cin.ignore();
		system("cls");
		if (choice == 1)
		{
			long int number;
			string type;
			string expDate;
			cout << "Please enter your credit card informations" << endl;

			cout << "Enter the your credit card type : ";
			getline(cin, type); cout << endl;

			cout << "Enter the your credit card number : ";
			cin >> number; cout << endl; cin.ignore();

			cout << "Enter the your credit card expdate : ";
			getline(cin, expDate);; cout << endl << endl;

			m_paymentMethod = new CreditCard(number, type, expDate);
			setPaymentMethod(m_paymentMethod);
			m_paymentMethod->performPayment();
			m_PS = true;
			iter it;
			double totalPrice = 0;
			int i = 1;
			if (!m_productsToPurchase.empty())//!If shopping cart is not empty
				//!Then calculate the total price in ProdcutToPurchase list
			{
				for (it = m_productsToPurchase.begin(); it != m_productsToPurchase.end(); it++, i++)
				{
					totalPrice += ((*it)->getQuantity()) * ((*it)->getProduct()->getPrice());
				}
			}
			cout << endl;
			//! If bonus used and payment is completed
			//! Then the bonus amount is substract from the total price
			//! And assignment to bonus is zero
			if (m_isBonusUsed == true && m_PS == true)
			{
				totalPrice = totalPrice - m_customer->getBonus();
				m_customer->setBonus(0);
			}
			//! If bonus is not used and payment is completed
			//! Then add one percent of total price for bonus
			//! Show the last bonus amount
			if (m_isBonusUsed == false && m_PS == true)
			{
				m_customer->setBonus((m_customer->getBonus() + totalPrice / 100));
				cout << "Total Bonus: " << m_customer->getBonus() << endl;
			}
			cout << "Total Price " << totalPrice << endl;
		}
		if (choice == 2)
		{
			cout << "Cash selected" << endl << endl;
			m_paymentMethod = new Cash;
			m_paymentMethod->performPayment();
			m_PS = true;
			iter it;
			double totalPrice = 0;
			int i = 1;
			if (!m_productsToPurchase.empty())//If shopping cart is not empty
				//Then calculate the total price in ProdcutToPurchase list
			{
				for (it = m_productsToPurchase.begin(); it != m_productsToPurchase.end(); it++, i++)
				{
					totalPrice += ((*it)->getQuantity()) * ((*it)->getProduct()->getPrice());
				}
			}
			cout << endl;
			//!If bonus used and payment is completed
			//!Then the bonus amount is substract from the total price
			//!And assignment to bonus is zero
			if (m_isBonusUsed == true && m_PS == true)
			{
				totalPrice = totalPrice - m_customer->getBonus();
				m_customer->setBonus(0);
			}
			//! If bonus is not used and payment is completed
			//! Then add one percent of total price for bonus
			//! Show the last bonus amount
			if (m_isBonusUsed == false && m_PS == true)
			{
				m_customer->setBonus((m_customer->getBonus() + totalPrice / 100));
				cout << "Total Bonus: " << m_customer->getBonus() << endl;
			}
			cout << "Total Price " << totalPrice << endl;
		}
		if (choice == 3)
		{
			string name;
			string bankID;
			cout << "Enter the your name : ";
			getline(cin, name);

			cout << "Enter the your Bank ID : ";
			cin >> bankID; cout << endl;
			cout << endl;

			m_paymentMethod = new Check(name, bankID);
			setPaymentMethod(m_paymentMethod);
			m_paymentMethod->performPayment();
			m_PS = true;
			iter it;
			double totalPrice = 0;
			int i = 1;
			if (!m_productsToPurchase.empty())//If shopping cart is not empty
				//Then calculate the total price in ProdcutToPurchase list
			{
				for (it = m_productsToPurchase.begin(); it != m_productsToPurchase.end(); it++, i++)
				{
					totalPrice += ((*it)->getQuantity()) * ((*it)->getProduct()->getPrice());
				}
			}
			cout << endl;
			//!If bonus used and payment is completed
			//!Then the bonus amount is substract from the total price
			//!And assignment to bonus is zero
			if (m_isBonusUsed == true && m_PS == true)
			{
				totalPrice = totalPrice - m_customer->getBonus();
				m_customer->setBonus(0);
			}
			//! If bonus is not used and payment is completed
			//! Then add one percent of total price for bonus
			//! Show the last bonus amount
			if (m_isBonusUsed == false && m_PS == true)
			{
				m_customer->setBonus((m_customer->getBonus() + totalPrice / 100));
				cout << "Total Bonus: " << m_customer->getBonus() << endl;
			}
			cout << "Total Price " << totalPrice << endl;
		}
		for (int i = 0; m_productsToPurchase.size(); i++)// Empty List
			m_productsToPurchase.pop_back();

	}
	else// If shopping cart is empty give a this message
	{
		cout << "Your shopping card is empy, please add items ..." << endl;
	}
}
/*!
* Cancel products 
*/
void ShoppingCart::cancelOrder() 
{
	cout << "+--------------+" << endl;
	cout << "| Cancel Order |" << endl;
	cout << "+--------------+" << endl << endl;


	cout << "Order canceled" << endl << endl;
}
/*!
* Show person's bonus amount
*/
void ShoppingCart::CustomerBonus()
{
	cout << "Your Can Bonus Quantity : " << m_customer->getBonus() << endl << endl;
}

/*!
void main()
{
	Customer* custom = new Customer("Oguzhan Mangir", "Samsun / 19 Mayis", "05438325848", "oguzhan.mangir@gmail.com", "mangrrua", "123456");
	ShoppingCart* shop = new ShoppingCart(custom);

	shoppingCart->printProducts();
	shoppingCart->setBonusUsed();
	shoppingCart->showInvoce();

}
*/