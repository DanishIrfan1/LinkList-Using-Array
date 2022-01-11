#include"Header.h"
// Insert after cursor 
void List::insert(int newDataItem)
{
	if (!isFull())
	{
		elements[length] = newDataItem;
		length++;
	}
	else
	{
		cout << "Insert: Cannot insert more items. List is full\n";
	}
}