//============================================================================
// Name        : Assignment_11.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <list>
#include <iterator>
#include <iostream>
using namespace std;
void stk();
void que();

int main(){
		char ch;
		cout << "Stack or Queue: ";
		cin >> ch;
		switch(ch){
		case 's': stk(); break;
		case 'q': que(); break;
		default: cout << "Invalid choice";
		}

	}

void stk(){
	list <int> l;
	list <int> :: iterator it;
	do{
		cout << "Enter 1 to insert in Stack." << endl;
		cout << "Enter 2 to display in Stack." << endl;
		cout << "Enter 3 to delete in Stack." << endl;
		cout << "Enter 4 to top in Stack." << endl;

		int ch;
		cin >> ch;
		switch(ch){
		case 1:
			cout << "Enter number of elements: ";
			int n;
			cin >> n;
			for(int i=0;i<n;i++){
				int x;
				cout << "Enter data: ";
				cin >> x;
				l.push_front(x);
			}
			break;

		case 2:
			it = l.begin();
			if(l.empty()){
				cout << "List is Empty." << endl;
			}
			while(it != l.end()){
				cout << *it << endl;
				it++;
			}
			break;

		case 3:
			l.pop_front();
			break;

		case 4:
			cout << l.front() << endl;
			break;

		}
	}while(1);
}

void que(){
	list <int> l;
	list <int> :: iterator it;
	do{
		cout << "Enter 1 to insert in Queue." << endl;
		cout << "Enter 2 to display in Queue." << endl;
		cout << "Enter 3 to delete in Queue." << endl;
		cout << "Enter 4 to top in Queue." << endl;
		int ch;
		cin >> ch;
		switch(ch){
		case 1:
			cout << "Enter number of elements: ";
			int n;
			cin >> n;
			for(int i=0;i<n;i++){
				int x;
				cout << "Enter data: ";
				cin >> x;
				l.push_back(x);
			}
			break;
			case 2:
			it = l.begin();
			if(l.empty()){
				cout << "List is Empty." << endl;
			}
			while(it != l.end()){
				cout << *it << endl;
				it++;
			}
			break;
			case 3:
			l.pop_front();
			break;
			case 4:
			cout << l.front() << endl;
			break;
			}
	}while(1);
}
