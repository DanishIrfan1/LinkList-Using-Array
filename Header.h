#pragma once
#include<iostream>
using namespace std;
class List {
private:
	int* elements;
	int size;
	int length; 
public:
	List(int maxsize);
	~List();
	void showStructure(); 
	void insert(int newDataItem);
	int remove();
	void replace(int newDataItem, int position);
	bool find(int searchDataItem);
	bool isEmpty();
	bool isFull();
};