#include"Header.h"
////////////////////////////////// Constructor 
	List::List(int maxsize)
	{
		size = maxsize;
		elements = new int[size];
		length = 0;
	}
	/////////////////////////////////// Destructor 
	List::~List()
	{
		delete[]elements;
	}

	/////////////////////////////////////// List status operations 

	// check if List is empty 
	bool List:: isEmpty()
	{
		if (length == 0)
			return true;
		else
			return false;
	}

	// check if List is full                     
	bool List::isFull()
	{
		if (length < size)
			return false;
		else
			return true;
	}