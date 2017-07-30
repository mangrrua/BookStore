/*
* @file TestBookStoreApplication.cpp
* @Author Mustafa OZKAN (mstfa.ozkan6655@gmail.com)
* @Author HASAN KAAN TURAN (hasankaanturan33@gmail.com)
* @Author Oguzhan Mangir (oguzhan.mangir55@gmail.com)
* @date January, 2017

* 
*/

/*!
	Include all classes header
*/
#include"Cash.h"
#include"Check.h"
#include"CreditCard.h"
#include"Customer.h"
#include"Payment.h"
#include"Product.h"
#include"ProductToPurchase.h"
#include"ShoppingCart.h"
#include"Book.h"
#include"Magazine.h"
#include"MusicCD.h"
#include<iostream>
#include<string>
#include<list>
#include<conio.h>
#include<Windows.h>
#include <cwchar>
using namespace std;
 
/*!
* Create a list to hold customer objects and an iterator to scan the list
* Create a list to hold book objects and an iterator to scan the list
* Create a list to hold magazine objects and an iterator to scan the list
* Create a list to hold musicCD objects and an iterator to scan the list
*/
list<Customer* > listCustomer;
typedef list<Customer* >::iterator customerIterator;

list<Book* > listBook;
typedef list<Book* >::iterator bookIterator;

list<Magazine* > listMagazine;
typedef list<Magazine* >::iterator magazineIterator;

list<MusicCD* > listMusicCD;
typedef list<MusicCD* >::iterator musicCDIterator;

/*!
	Define TEST Functions 
*/
void Control_userName(Customer* custom);
void MENU_MainMenu();
void MENU_CustomerMenu();
void MENU_ItemMenu();
void MENU_AddItem();
void MENU_ShoppingMenu();
void ADD_AddNewCustomer();
void LIST_ShowCustomerInTheSystem();
void LIST_ListBook();
void LIST_ListMagazine();
void LIST_ListMusicCD();
void TEST_ListItem();
void ADD_AddBookItem();
void ADD_AddMagazineItem();
void ADD_AddMusicItem();
void TEST_Login();
void ADD_AddProductoShoppingCart(ShoppingCart* shoppingCart);
void Remove_RemoveProduct(ShoppingCart* shoppingcart);
void Title();

int main()
{
	/*!
	* Before we opened the program, 
		we created two books, one magazine and two music objects and added them to the list.
	*/


	/*!
	* Before we opened the program,
		we created five customer objects and added them to the customer list.
	*/
	Title();
	int choice;
	/*!
		Create products and customers
	*/
	Book* book = new Book(1000, "Asi Melekler", 20.50, "Danielle Trussoni", "Dogan Kitap", 432);
	Book* book1 = new Book(1001, "Camlar Sehri", 18.40, "Cassandra Clare", "Artemis Yayinlari", 624);
	Magazine* magazine = new Magazine(2000, "Turk Dili Dergisi", 6.99, 20, "Derleme");
	MusicCD* music = new MusicCD(3000, "Maximum", 120.00, "Murat Boz", "Pop");
	MusicCD* music1 = new MusicCD(3001, "Anti", 200.00, "Rihanna", "Foreign");
	Customer* custom = new Customer("Oguzhan Mangir", "Samsun / 19 Mayis", "05438325848", "oguzhan.mangir@gmail.com", "mangrrua", "123456");
	Customer* custom1 = new Customer("Hasan Kaan Turan", "Mersin", "05426541258", "kaanturan@gmail.com", "kaant", "123456");
	Customer* custom2 = new Customer("Mustafa Ozkan ", "Ankara", "05354521546", "mustafaozkan@gmail.com", "mustafao", "123456");
	Customer* custom3 = new Customer("Berkant Mangir", "Samsun / 19 Mayis", "05365214563", "berkantmangir@gmail.com", "berkantm", "123456");
	Customer* custom4 = new Customer("Sarp Yilmaz", "Istanbul / Avcilar", "05054215896", "sarpyilmaz@gmail.com", "sarpy", "123456");
	/*!
		Products and customers added int the lists.
	*/
	listCustomer.push_back(custom);
	listCustomer.push_back(custom1);
	listCustomer.push_back(custom2);
	listCustomer.push_back(custom3);
	listCustomer.push_back(custom4);
	listBook.push_back(book);
	listBook.push_back(book1);
	listMagazine.push_back(magazine);
	listMusicCD.push_back(music);
	listMusicCD.push_back(music1);

	MENU_MainMenu();//Call Main Menu

	system("pause");
}
/*!
* Show Main Menu
	Customer Menu
		If selected one, call Customer Menu
	Item Menu,
		If selected two, call Item Menu
	Shopping Menu
		If selected three, call Shopping Menu
*/
void MENU_MainMenu()
{
	int choice;
	do {
		cout << " ->> Main Menu <<- " << endl;
		cout << "1. Customer" << endl;
		cout << "2. Item" << endl;
		cout << "3. Shopping" << endl;
		cout << "4. Exit" << endl; cout << endl;
		cout << "Choose one: ";
		cin >> choice; cout << endl;
		cin.ignore();
		system("cls");

		if (choice == 1)
			MENU_CustomerMenu();
		else if (choice == 2)
			MENU_ItemMenu();
		else if (choice == 3)
			MENU_ShoppingMenu();
		else if (choice == 4)
			cout << "Exit program..." << endl;
	} while (choice != 4);
}
/*!
	Show Customer Menu
	User has to choose go to
	Add new customer
		If selected one, call Add customer
	Show customers in the system.
		If selected two, call List customer
*/
void MENU_CustomerMenu()
{
	int choice1;
	do {
		cout << " ->> Customer Menu <<- " << endl;
		cout << "1. Add a new Customer to system" << endl;
		cout << "2. Show to Customers in the system" << endl;
		cout << "3. Back" << endl; cout << endl;
		cout << "Choose one: ";
		cin >> choice1; cout << endl;
		system("cls");
		cin.ignore();

		if (choice1 == 1)
			ADD_AddNewCustomer();
		else if (choice1 == 2)
			LIST_ShowCustomerInTheSystem();
		else if (choice1 == 3)
			cout << "Back Main Menu..." << endl;
	} while (choice1 != 3);
}
/*!
	Show Item Menu
	User has to choose go to
	Add new Item
		If selected one, call Add Item
	Show Item in the system.
		If selected two, call List Item
*/
void MENU_ItemMenu()
{
	int choice2;
	do {
		cout << " ->> Item Menu <<- " << endl;
		cout << "1. Add Item" << endl;
		cout << "2. Show Item" << endl;
		cout << "3. Back menu" << endl << endl; cout << "Choose one: ";
		cin >> choice2; cout << endl;
		cin.ignore();
		system("cls");

		if (choice2 == 1)
			MENU_AddItem();
		else if (choice2 == 2)
			TEST_ListItem();
		else if (choice2 == 3)
			cout << "Back Main Menu..." << endl;
	} while (choice2 != 3);
}
/*!
	Add Item Menu
	User has to choose go to
	Add new Item
		If selected one, call Add Book Item
		If selected two, call Add Magazine Item
		If selected three, call Add MusicCD Item
*/
void MENU_AddItem()
{
	cout << "+--------------+" << endl;
	cout << "| Add New Item |" << endl;
	cout << "+--------------+" << endl << endl;
	int choice3;
	do {
		cout << "Which product do you want to add ? " << endl;
		cout << "1. Book" << endl;
		cout << "2. Magazine" << endl;
		cout << "3. Music CD" << endl;
		cout << "4. Back Menu" << endl; cout << endl;
		cout << "Choose one:";
		cin >> choice3;
		cin.ignore();
		system("cls");

		if (choice3 == 1)
			ADD_AddBookItem();
		else if (choice3 == 2)
			ADD_AddMagazineItem();
		else if (choice3 == 3)
			ADD_AddMusicItem();
		else if (choice3 == 4)
			cout << "Back Item Menu..." << endl;
	} while (choice3 != 4);
}
/*!
	Shopping Menu
	
* If you do not login in from the home screen,
	you can not access the other options in the system
*/
void MENU_ShoppingMenu()
{
	int choice;
	do {
		cout << "Shopping Menu" << endl;
		cout << "1. Login" << endl;
		cout << "2. Add Product" << endl;
		cout << "3. Remove Product" << endl;
		cout << "4. List All Product" << endl;
		cout << "5. List Shopping Cart" << endl;
		cout << "6. Show Bonus" << endl;
		cout << "7. Use Bonus" << endl;
		cout << "8. Place Order" << endl;
		cout << "9. Cancel Order" << endl;
		cout << "10. Show Invoce" << endl;
		cout << "11. Quit" << endl; cout << endl;
		cout << "Choose one: ";
		cin >> choice; cout << endl;
		cin.ignore();
		system("cls");

		if (choice == 1)
			TEST_Login();
		else if (choice == 11)
			cout << "Back Main Menu" << endl;
		else
			cout << endl; cout << "Please login in the system !" << endl << endl;
	} while (choice != 11);
}
/*!
* The user is asked to make a choice about the membership.
* According to the selection, two kinds of situations arise.
* If the member is a member, user name and password name are
	requested and the system is logged in.
* The login is checked and if the information matches the user is logged in and
	the user is informed.
* If the user does not have a subscription, the system will be registered and a shopping menu will
	come in front of the user and a transaction is expected.
*/
void TEST_Login()
{
	string name, username, password, phone, email, addres;
	char c;
	int choice;
	char ch;
	const char ENTER = 13;
	cout << "Are you registered? (Y or N) \nChoice: ";
	cin >> c;

	if (c == 'Y' || c == 'y')
	{
		cout << "Enter the username: ";
		cin >> username;
		cout << "Enter the password: ";
		cin >> password; cout << endl;

		customerIterator iterCustom;

		for (iterCustom = listCustomer.begin(); iterCustom != listCustomer.end(); iterCustom++)
		{
			if ((*iterCustom)->checkAccount(username, password) == true)
			{
				ShoppingCart* shoppingCart = new ShoppingCart((*iterCustom));
				cout << "Welcome " << (*iterCustom)->getName() << endl << endl;
				do {
					cout << endl;
					cout << "Shooping Menu" << endl;
					cout << "2. Add Product" << endl;
					cout << "3. Remove Product" << endl;
					cout << "4. List All Product" << endl;
					cout << "5. List Shopping Cart" << endl;
					cout << "6. Show Bonus" << endl;
					cout << "7. Use Bonus" << endl;
					cout << "8. Place Order" << endl;
					cout << "9. Cancel Order" << endl;
					cout << "10. Show Invoce" << endl;
					cout << "11. Quit" << endl; cout << endl;
					cout << "Choose one: ";
					cin >> choice; cout << endl;
					cin.ignore();
					system("cls");

					if (choice == 2)
						ADD_AddProductoShoppingCart(shoppingCart);
					else if (choice == 3)
						Remove_RemoveProduct(shoppingCart);
					else if (choice == 4)
						TEST_ListItem();
					else if (choice == 5)
						shoppingCart->printProducts();
					else if (choice == 6) 
						shoppingCart->CustomerBonus();
					else if (choice == 7)
						shoppingCart->setBonusUsed();
					else if (choice == 8)
						shoppingCart->placeOrder();
					else if (choice == 9)
						shoppingCart->cancelOrder();
					else if (choice == 10)
						shoppingCart->showInvoce();
					else if (choice == 11)
						cout << "Back Shopping Menu" << endl << endl;

				} while (choice != 11);
			}
			else
			{
				if (iterCustom == listCustomer.end() && (*iterCustom)->checkAccount(username, password) == false)
					cout << "Username or password is not correct" << endl;
			}
		}
	}
	else if (c == 'N' || c == 'n') {
		ADD_AddNewCustomer();
	}
}
/*!
* First he asks what product to remove.
* If you choose the book, it will show the book products
and reate an iterator to scan the book list
* Then, It ask the product ID and how many we will remove
If the product ID is not available, request another ID
* For this, create object productToPurchase and assign it to object shoppingCart's remove Product
* ProductToPurchase takes the ID of products and products as parameters

* First he asks what product to remove.
* If you choose the magazine, it will show the magazine products
and reate an iterator to scan the book list
* Then, It ask the product ID and how many we will remove
If the product ID is not available, request another ID
* For this, create object productToPurchase and assign it to object shoppingCart's remove Product
* ProductToPurchase takes the ID of products and products as parameters

* First he asks what product to remove.
* If you choose the musicCD, it will show the musicCD products
and reate an iterator to scan the book list
* Then, It ask the product ID and how many we will remove
If the product ID is not available, request another ID
* For this, create object productToPurchase and assign it to object shoppingCart's remove Product
* ProductToPurchase takes the ID of products and products as parameters
*/
void Remove_RemoveProduct(ShoppingCart* shoppingcart)
{
	int choice, id;
	int buyCount;
	cout << "+----------------+" << endl;
	cout << "| Remove Product |" << endl;
	cout << "+----------------+" << endl << endl;
	do {
		cout << "Which product do you want to remove?" << endl;
		cout << "1. Book" << endl;
		cout << "2. Magazine" << endl;
		cout << "3. Music Cd" << endl;
		cout << "4. Back" << endl;
		cout << "Choose one: ";
		cin >> choice;
		system("cls");

		if (choice == 1) {
			shoppingcart->printProducts(); cout << endl;
			cout << "Enter the book id: ";
			cin >> id;
			cout << "How many do you want to remove? : ";
			cin >> buyCount; cout << endl;
			bookIterator iterBook;
			for (iterBook = listBook.begin(); iterBook != listBook.end(); iterBook++)
			{
				if ((*iterBook)->getID() == id)
				{
					ProductToPurchase* product = new ProductToPurchase((*iterBook), buyCount);
					shoppingcart->removeProduct(product);

				}
			}
		}
		else if (choice == 2) {
			shoppingcart->printProducts(); cout << endl;
			cout << "Enter the Magazine id: ";
			cin >> id;
			cout << "How many do you want to remove? : ";
			cin >> buyCount; cout << endl;
			magazineIterator iterMagazine;
			for (iterMagazine = listMagazine.begin(); iterMagazine != listMagazine.end(); iterMagazine++)
			{
				if ((*iterMagazine)->getID() == id)
				{
					ProductToPurchase* product = new ProductToPurchase((*iterMagazine), buyCount);
					shoppingcart->removeProduct(product);

				}
			}
		}
		else if (choice == 3) {
			shoppingcart->printProducts(); cout << endl;
			cout << "Enter the Music CD id: ";
			cin >> id;
			cout << "How many do you want to remove? : ";
			cin >> buyCount; cout << endl;
			musicCDIterator iterMusic;
			for (iterMusic = listMusicCD.begin(); iterMusic != listMusicCD.end(); iterMusic++)
			{
				if ((*iterMusic)->getID() == id)
				{
					ProductToPurchase* product = new ProductToPurchase((*iterMusic), buyCount);
					shoppingcart->removeProduct(product);

				}
			}
		}
	} while (choice != 4);
}
/*!
* First he asks what product to add.
* If you choose the book, it will show the book products
	and reate an iterator to scan the book list
* Then, It ask the product ID and how many we will add
	If the product ID is available, request another ID
* For this, create object productToPurchase and assign it to object shoppingCart's add Product
* ProductToPurchase takes the ID of products and products as parameters

* If you choose the magazine, it will show the magazine products
and reate an iterator to scan the magazine list
* Then, It ask the product ID and how many we will add
If the product ID is available, request another ID
* For this, create object productToPurchase and assign it to object shoppingCart's add Product
* ProductToPurchase takes the ID of products and products as parameters

* If you choose the musiccd, it will show the musiccd products
and reate an iterator to scan the musiccd list
* Then, It ask the product ID and how many we will add
If the product ID is available, request another ID
* For this, create object productToPurchase and assign it to object shoppingCart's add Product
* ProductToPurchase takes the ID of products and products as parameters
*/
void ADD_AddProductoShoppingCart(ShoppingCart* shoppingCart)
{

	int choice, id, buyCount,flag = 0, flag1 = 0, flag2 = 0;
	do {
		cout << "Which product do you want to add?" << endl;
		cout << "1. Book" << endl;
		cout << "2. Magazine" << endl;
		cout << "3. Music Cd" << endl;
		cout << "4. Back" << endl;
		cout << "Choose one: ";
		cin >> choice;
		system("cls");

		if (choice == 1) {
			LIST_ListBook();
			cout << "Enter the product id:";
			cin >> id;

			cout << "How many do you want to buy? : ";
			cin >> buyCount; cout << endl;

			

			system("cls");
			bookIterator iterBook;

			for (iterBook = listBook.begin(); iterBook != listBook.end(); iterBook++)
			{
				if ((*iterBook)->getID() == id)
				{
					flag = 1;
					ProductToPurchase* product = new ProductToPurchase((*iterBook), buyCount);
					shoppingCart->addProduct(product);
				}
			}
			if(flag == 0)
			{
				cout << "ID is incorrect, please enter it again" << endl << endl;
				ADD_AddProductoShoppingCart(shoppingCart);
			}
		}
		else if (choice == 2) {
			LIST_ListMagazine();
			cout << "Enter the product id:";
			cin >> id;

			cout << "How many do you want to buy? : ";
			cin >> buyCount; cout << endl;

			system("cls");
			magazineIterator iterMagazine;

			for (iterMagazine = listMagazine.begin(); iterMagazine != listMagazine.end(); iterMagazine++)
			{
				if ((*iterMagazine)->getID() == id)
				{
					flag1 = 1;
					ProductToPurchase* product = new ProductToPurchase((*iterMagazine), buyCount);
					shoppingCart->addProduct(product);
				}
			}
			if (flag1 == 0)
			{
				cout << "ID is incorrect, please enter it again" << endl << endl;
				ADD_AddProductoShoppingCart(shoppingCart);
			}
		}
		else if (choice == 3) {
			LIST_ListMusicCD();
			cout << "Enter the product id:";
			cin >> id;

			cout << "How many do you want to buy? : ";
			cin >> buyCount; cout << endl;

			system("cls");
			musicCDIterator iterMusicCD;

			for (iterMusicCD = listMusicCD.begin(); iterMusicCD != listMusicCD.end(); iterMusicCD++)
			{
				if ((*iterMusicCD)->getID() == id)
				{
					flag2 = 1;
					ProductToPurchase* product = new ProductToPurchase((*iterMusicCD), buyCount);
					shoppingCart->addProduct(product);
				}
			}
			if (flag2 == 0)
			{
				cout << "ID is incorrect, please enter it again" << endl << endl;
				ADD_AddProductoShoppingCart(shoppingCart);
			}
		}
		else if (choice == 4)
		{
			cout << "Back Product Menu" << endl;
		}
	} while (choice != 4);


}
/*!
* Create an iterator to scan the customer list
* First, create a constructor named custom with customer class.
* The name, address, phone number, e-mail and password are
	taken from the user in turn and set to "custom".
*/
void ADD_AddNewCustomer()
{
	cout << "+------------------+" << endl;
	cout << "| Add New Customer |" << endl;
	cout << "+------------------+" << endl << endl;

	string name, username, password, phone, email, addres;
	customerIterator iter;
	Customer* custom = new Customer();//create customer object

	Control_userName(custom);

	cout << "Enter the name: ";
	getline(cin, name);
	custom->setName(name);

	cout << "Enter the address: ";
	getline(cin, addres);
	custom->setAddress(addres);

	cout << "Enter the phone number: ";
	cin >> phone; cin.ignore();
	custom->setPhone(phone);

	cout << "Enter the e-mail: ";
	cin >> email; cin.ignore();
	custom->setEmail(email);

	cout << "Enter the password: ";
	getline(cin, password); cout << endl;
	custom->setPassword(password);

	custom->setBonus(0);

	listCustomer.push_back(custom); //Add custom(customer) to Customer List
	cout << "Person added" << endl << endl;

}
/*!
* Create an iterator to scan the customer list.
* And this iteration is inserted into the loop and all
	the people in the system and their information are shown
*/
void LIST_ShowCustomerInTheSystem()
{
	cout << "+-----------------------------+" << endl;
	cout << "| Show Customer In The System |" << endl;
	cout << "+-----------------------------+" << endl << endl;
	int i = 1;
	customerIterator iter;

	for (iter = listCustomer.begin(); iter != listCustomer.end(); iter++)
	{
		cout << i << ". person;" << endl;
		cout << "--------------" << endl;
		cout << "Name: " << (*iter)->getName() << endl;
		cout << "Addres: " << (*iter)->getAddress() << endl;
		cout << "Phone: " << (*iter)->getPhone() << endl;
		cout << "Email: " << (*iter)->getEmail() << endl;
		cout << "Username: " << (*iter)->getUsername() << endl;
		cout << "Password: " << (*iter)->getPassword() << endl << endl;
		i++;

	}

}
/*!
* It can get a new username and
	is compared to the usernames in the list.
* If this username is listed, user will
	enter the username again.
* If this username is not listed,
* Then assignment the username in list.
*/
void Control_userName(Customer* custom)
{
	int flag = 0;
	customerIterator iter;
	string username;
	cout << "Enter username: ";
	cin >> username;
	cin.ignore();

	for (iter = listCustomer.begin(); iter != listCustomer.end(); iter++)
	{
		if ((*iter)->getUsername() == username)
			flag = 1;
	}
	if (flag == 0)
		custom->setUsername(username);
	else if (flag == 1){
		cout << "This username avaible. Please enter again username " << endl << endl;
		Control_userName(custom);
	}
}
/*!
*First, create an ýterator to scan the customer list
* Show attributes of items in ListBook
	Attributes:
	Name,ID,Price,Author,
	Publisher,Page
*/
void LIST_ListBook()
{
	int i = 1;
	bookIterator iterBook;
	cout << "+--------------------+" << endl;
	cout << "| Product Name: Book |" << endl;
	cout << "+--------------------+" << endl;

	for (iterBook = listBook.begin(); iterBook != listBook.end(); iterBook++)
	{
		cout << i << ". product ;" << endl;
		cout << "------------" << endl;
		cout << "Name: " << (*iterBook)->getName() << endl;
		cout << "ID: " << (*iterBook)->getID() << endl;
		cout << "Price: " << (*iterBook)->getPrice() << endl;
		cout << "Author: " << (*iterBook)->getAuthor() << endl;
		cout << "Publisher: " << (*iterBook)->getPublisher() << endl;
		cout << "Page: " << (*iterBook)->getPage() << endl << endl;
		i++;
	}
}
/*!
*First, create an ýterator to scan the customer list
* Show attributes of items in ListMagazine
	Attributes:
	Name, ID, Price, Issue,Type
*/
void LIST_ListMagazine()
{
	int i = 1;
	magazineIterator iterMagazine;

	cout << "+------------------------+" << endl;
	cout << "| Product Name: MAGAZINE |" << endl;
	cout << "+------------------------+" << endl;
	for (iterMagazine = listMagazine.begin(); iterMagazine != listMagazine.end(); iterMagazine++)
	{
		cout << i << ". product ;" << endl;
		cout << "------------" << endl;
		cout << "Name: " << (*iterMagazine)->getName() << endl;
		cout << "ID: " << (*iterMagazine)->getID() << endl;
		cout << "Price: " << (*iterMagazine)->getPrice() << endl;
		cout << "Issue: " << (*iterMagazine)->getIssue() << endl;
		cout << "Type: " << (*iterMagazine)->getType() << endl << endl;
		i++;
	}
}
/*!
*First, create an ýterator to scan the customer list
* Show attributes of items in ListMusicCD
	Attributes:
	Name, ID, Price, Singer, Type
*/
void LIST_ListMusicCD()
{
	musicCDIterator iterMusicCD;
	int i = 1;
	cout << "+------------------------+" << endl;
	cout << "| Product Name: Music CD |" << endl;
	cout << "+------------------------+" << endl;

	for (iterMusicCD = listMusicCD.begin(); iterMusicCD != listMusicCD.end(); iterMusicCD++)
	{
		cout << i << ". product ;" << endl;
		cout << "------------" << endl;
		cout << "Name: " << (*iterMusicCD)->getName() << endl;
		cout << "ID: " << (*iterMusicCD)->getID() << endl;
		cout << "Price: " << (*iterMusicCD)->getPrice() << endl;
		cout << "Singer: " << (*iterMusicCD)->getSinger() << endl;
		cout << "Type: " << (*iterMusicCD)->getType() << endl << endl;
		i++;
	}
}
/*!
* Show all ListItem
*/
void TEST_ListItem()
{
	cout << "+------------------+" << endl;
	cout << "| List All Product |" << endl;
	cout << "+------------------+" << endl << endl;

	LIST_ListBook();
	LIST_ListMagazine();
	LIST_ListMusicCD();
}
/*!
* Create an iterator to scan the book list
* The product id is requested from the user.
* This id is checked to see if it is in the book list.
* If it does, it will ask for the product id again.
* If not;
	Information required for the book is requested from the user. 
	With this information, the book object is created
	And adds the product to the book list.
*/
void ADD_AddBookItem()
{
	cout << "+--------------+" << endl;
	cout << "| Add New Book |" << endl;
	cout << "+--------------+" << endl << endl;

	bookIterator iterBook;
	string author, publisher;
	int page;
	int id, flag = 0;
	string name;
	double price;
	cout << "Enter the product id: ";
	cin >> id; cout << endl; cin.ignore();

	for (iterBook = listBook.begin(); iterBook != listBook.end(); iterBook++)
	{
		if ((*iterBook)->getID() == id)
		{
			flag = 1;
		}
	}
	if (flag == 0)// if flag is equal to zero enter the products attirubutes
	{
		cout << "Enter the product name: ";
		getline(cin, name);

		cout << "Enter the product price: ";
		cin >> price; cin.ignore();

		cout << "Enter the book author: ";
		getline(cin, author);

		cout << "Enter the book publisher: ";
		getline(cin, publisher);

		cout << "Enter the book page: ";
		cin >> page; cout << endl;

		Book* book = new Book(id, name, price, author, publisher, page);// Create book object
		listBook.push_back(book);
	}
	else if (flag == 1)// if flag is equal to one recall add function
	{
		cout << "Product available at this number" << endl << endl;
		ADD_AddBookItem();
	}
}
/*!
* Create an iterator to scan the Magazine list
* The product id is requested from the user.
* This id is checked to see if it is in the magazine list.
* If it does, it will ask for the product id again.
* If not;
	Information required for the magazine is requested from the user.
	With this information, the magazine object is created
	And adds the product to the Magazine list.
*/
void ADD_AddMagazineItem()
{
	cout << "+------------------+" << endl;
	cout << "| Add New Magazine |" << endl;
	cout << "+------------------+" << endl << endl;

	magazineIterator iterMagazine;
	string type;
	int issue;
	int id,flag = 0;
	string name;
	double price;
	cout << "Enter the product id: ";
	cin >> id; cout << endl; cin.ignore();

	for (iterMagazine = listMagazine.begin(); iterMagazine != listMagazine.end(); iterMagazine++)
	{
		if ((*iterMagazine)->getID() == id)
		{
			flag = 1;
		}
	}
	if(flag == 1)// if flag is equal to one recall add function
	{
		cout << "Product available at this number" << endl << endl;
		ADD_AddMagazineItem();
	}
	else if (flag == 0)// if flag is equal to zero enter the products attirubutes
	{
		cout << "Enter the product name: ";
		getline(cin, name);

		cout << "Enter the product price: ";
		cin >> price; cin.ignore();

		cout << "Enter the Magazine issue: ";
		cin >> issue; cin.ignore();

		cout << "Enter the Magazine type: ";
		getline(cin, type); cout << endl;

		Magazine* magazine = new Magazine(id, name, price, issue, type);// Create Magazine object
		listMagazine.push_back(magazine);
	}
}
/*!
* Create an iterator to scan the music list
* The product id is requested from the user.
* This id is checked to see if it is in the music list.
* If it does, it will ask for the product id again.
* If not;
	Information required for the book is requested from the user.
	With this information, the musiccd object is created
	And adds the product to the music list.
*/
void ADD_AddMusicItem()
{
	cout << "+------------------+" << endl;
	cout << "| Add New Music Cd |" << endl;
	cout << "+------------------+" << endl << endl;

	musicCDIterator iterMusic;
	string singer, type;
	int id,flag = 0;
	string name;
	double price;
	cout << "Enter the product id: ";
	cin >> id; cout << endl; cin.ignore();

	for (iterMusic = listMusicCD.begin(); iterMusic != listMusicCD.end(); iterMusic++)
	{
		if ((*iterMusic)->getID() == id)
			flag = 1;
	}
	if (flag == 0)// if flag is equal to zero enter the products attirubutes
	{
		cout << "Enter the product name: ";
		getline(cin, name);

		cout << "Enter the product price: ";
		cin >> price; cin.ignore();

		cout << "Enter the Music issue: ";
		getline(cin, singer);

		cout << "Enter the Music type: ";
		getline(cin, type); cout << endl;

		MusicCD* music = new MusicCD(id, name, price, singer, type);// Create musicCD object
		listMusicCD.push_back(music);
	}
	else if (flag == 1)// if flag is equal to one recall add function
	{
		cout << "Product available at this number" << endl << endl;
		ADD_AddMusicItem();
	}
}
void Title()
{
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;                   // Width of each character in the font
	cfi.dwFontSize.Y = 12;                  // Height
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	wcscpy_s(cfi.FaceName, L"Lucida Console"); // Choose your font

	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
	RECT r;
	HWND console = GetConsoleWindow();
	GetWindowRect(console, &r);
	MoveWindow(console, r.left, r.top, 800, 700, TRUE);
	HWND consoleWindow = GetConsoleWindow();
	SetWindowPos(consoleWindow, 0, 300, 0, 0, 0, SWP_NOSIZE | SWP_NOZORDER);
	cout << "________________________________________________________________________________";
	cout << "________________________________________________________________________________" << endl << endl;

	cout << "  AVHHHHHVA         HH                        AVHHHHHVA                 HH" << endl
		<< "  HH     HH         HH                        HH     HH                 HH" << endl
		<< "  HH     HH         HH OO                     HH     HH                 HH" << endl
		<< "  HH     HH         HH                        HH     HV                 HH" << endl
		<< "  HH     HH AVHHHVA HH HH AVHHHVA AVHHHVA     HHHHHHHH  AVHHHVA AVHHHVA HH  AH" << endl
		<< "  HH     HH HH   HH HH HH HH   HH HH   HH     HH     HA HH   HH HH   HH HH AH" << endl
		<< "  HH     HH HH   HH HH HH HH   HH HHHHHHH     HH     HH HH   HH HH   HH HHHH" << endl
		<< "  HH     HH HH   HH HH HH HH   HH HH          HH     HH HH   HH HH   HH HH VH" << endl
		<< "  VAHHHHHAV HH   HH HH HH HH   HH VAHHHAV     VAHHHHHAV VAHHHAV VAHHHAV HH  VH" << endl;
	cout << endl;

	cout << "		      AVHHHHHVA                                              " << endl
		<< "		      HH         HH                                           " << endl
		<< "		      HH         HH                                           " << endl
		<< "		      HH        HHHH                                          " << endl
		<< "		      VHHHHHHHA  HH   AVHHHVA AVHHVA AVHHHVA              " << endl
		<< "		             HH  HH   HH   HH HH     HH   HH                  " << endl
		<< "		             HH  HH   HH   HH HH     HHHHHHH                  " << endl
		<< "		             HH  HH   HH   HH HH     HH                       " << endl
		<< "		      VAHHHHHAV  VHHO VAHHHAV HH     VAHHHAV               " << endl;

	cout << endl << endl;
	cout << "________________________________________________________________________________";
	cout << "________________________________________________________________________________" << endl;


	cout << " +---------+----------------------+---------------------+---------------------+" << endl
		<< " |         |      Hasan Kaan      |       Mustafa       |       Oguzhan       |" << endl
		<< " | Authors |        TURAN         |        OZKAN        |       MANGIR        |" << endl
		<< " |         |     152120141067     |     152120141050    |     152120141044    |" << endl
		<< " +---------+----------------------+---------------------+---------------------+" << endl;
	cout << "________________________________________________________________________________";
	cout << "________________________________________________________________________________" << endl << endl;
}