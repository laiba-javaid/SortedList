#include "SortedList.h"
#include<iostream>
using namespace std;

int main()
{
	SortedList list;
	unsigned int choice;
	char choice1;
	cout << "1. Insert an Item" << endl;
	cout << "2. Get any Value" << endl;
	cout << "3. Find any Value" << endl;
	cout << "4. Delete an Item" << endl;
	cout << "5. Check if the list is empty or not" << endl;
	cout << "6. Update an Item" << endl;
	cout << "7. Display all Values" << endl;
	cout << "8. Exit" << endl;

	do 
	{
		cout << "Enter your choice: " << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			int value1;
			cout << "Enter the value which you want to insert: " << endl;
			cin >> value1;
			list.insertItem(value1);
			break;
		case 2:
			int index2;
			cout << "Enter the index from which you wanna get a value: " << endl;
			cin >> index2;
			cout << list.getValue(index2) << endl;
			break;
		case 3:
			list.findValue();
			break;
		case 4:
			list.deleteItem();
			break;
		case 5:
			list.checkEmptyList();
			break;
		case 6:
			unsigned int index1;
			cout << "Enter the indxe: " << endl;
			cin >> index1;
			list.updateItem(index1);
			break;
		case 7:
			list.printAllItems();
			break;
		case 8:
			exit(0);
			break;
		default:
			cout << "Invalid choice" << endl;

		}

		cout << "Do you again want to enter anything?" << endl;
		cin >> choice1;

	} while (choice1 == 'y');
	
	return 0;
}