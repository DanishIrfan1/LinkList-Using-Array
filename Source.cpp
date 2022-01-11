#include<iostream>
#include"Header.h"
using namespace std;

int main() {
	int size,val,rem,ind,elem,findEle;
	cout << "Enter Size of array : ";
	cin >> size;
	List obj(size);
	cout << endl << "Insert Valuse " << endl;
	for (int i = 0; i < size; i++) {
		cin >> val;
		obj.insert(val);
	}
	cout << endl<<"Show Array  "<<endl;
	obj.showStructure();
	cout << "How much You want remove elements : ";
	cin >> rem;
	for (int i = 0; i < rem; i++){
			cout<<"Element removes: "<<obj.remove();
	}
	cout << endl << "Show Array  " << endl;
	obj.showStructure();
	cout << "Which index you want to replace: ";
	cin >> ind;
	cout << "What is Your New Element: ";
	cin >> elem;
	cout << endl << "Show Array  " << endl;
	
	obj.replace(elem, ind);
	obj.showStructure();
	cout << "Which Element You want to find : ";
	cin >> findEle;
	if (obj.find(findEle))
		cout <<endl<< "Element is present";
	else
		cout << endl << "Element is present";
	return 0;
}