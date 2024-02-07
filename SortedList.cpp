#include "SortedList.h"
#include<iostream>
using namespace std;

SortedList::SortedList()
{
	cout << "Enter the size of the list: ";
	cin >> size;
	noOfElements = 0;
	A = new int[size];
}

void SortedList::insertItem(int value)
{
	int pos = 0, shifts=0;
	if (noOfElements == size)
		cout << "List is full!!" << endl;
	else if (noOfElements == 0)
	{
		A[0] = value;
		noOfElements++;

	}
	else
	{
		for (int i = 0; i < noOfElements; i++)
		{
			pos = i;
			if (A[i] > value)
			{
				for (int i = noOfElements - 1; i >= pos; i--)
				{
					A[i + 1] = A[i];
					shifts++;
				}
				A[i] = value;

			}
			else
				A[noOfElements] = value;

		}
		noOfElements++;
		cout << shifts << " items are shifted to insert this value!!" << endl;

	}
	
}

int SortedList::getValue(unsigned int index)
{
	if (index >= size)
		cout << "Index is out of boundary!!" << endl;
	else if (index >= noOfElements && index < size)
		cout << "Value does'nt exist at this index " << endl;
	else
		return A[index];
}

bool SortedList::findValue()
{
	int value;
	cout << "Enter the value to find in the list: " << endl;
	cin >> value;
	bool found = false;
	for (int i = 0; i < noOfElements && found == false; i++)
	{
		if (A[i] == value)
		{
			found = true;
			cout << "Value founded: " << A[i] << endl;
			return true;

		}
			
	
	}
	if (found == false)
	{
		cout << "Value did'nt found in the list!!" << endl;
		return false;

	}
		

}

void SortedList::deleteItem()
{
	int value, shifts=0;
	if (noOfElements == 0)
		cout << "List is already empty!!" << endl;
	else
	{
		cout << "Enter the value which you want to delete:" << endl;
		cin >> value;
		for (int i = 0; i < noOfElements; i++)
		{
			if (A[i] == value)
			{
				for (int j = i; j < noOfElements; j++)
				{
					A[j] = A[j + 1];
					shifts++;

				}
					
				noOfElements--;

			}
				
		}		
		
		cout <<shifts<< " elements are shifted to delete an item!!" << endl;

	}
}

void SortedList::updateItem(unsigned int index)
{
	if (index > size)
		cout << "Index is out of bound!!" << endl;
	else if (index >= noOfElements && index < size)
		cout << "Value does'nt exist at this index" << endl;
	else
	{
		int value;
		cout << "Enter the value which you want to update at this index: " << endl;
		cin >> value;
		A[index] = value;
		cout << "Value updated successfully!!" << endl;
	}
	

}

bool SortedList::checkEmptyList()
{
	if (noOfElements == 0)
	{
		cout << "List is empty!!!" << endl;
		return true;
	}
		
	else
	{
		cout << "List is not empty!!" << endl;
		return false;
	}
		
}

void SortedList::printAllItems()
{
	for (int i = 0; i < noOfElements; i++)
		cout << A[i] << endl;
}