#pragma once
class SortedList
{
	int size;
	unsigned int noOfElements;
	int* A;
public:
	SortedList();
	void insertItem(int);
	int getValue(unsigned int);
	bool findValue();
	void deleteItem();
	bool checkEmptyList();
	void updateItem(unsigned int);
	void printAllItems();

};

