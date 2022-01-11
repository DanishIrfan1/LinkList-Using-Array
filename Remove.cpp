#include"Header.h"
// Remove data item
int List:: remove()
{
	if (!isEmpty())
	{
		length--;
		return elements[length];
	}
	else
	{
		cout << "Remove: Cannot remove the item. List is empty\n";
	}
}