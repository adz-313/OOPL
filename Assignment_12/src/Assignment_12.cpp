//============================================================================
// Name        : Assignment_12.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iterator>
#include <deque>
using namespace std;

int main() {
	deque <int> dq;
	deque <int> :: iterator it;
	cout << "Enter 1 to Insert value from Front." << endl;
	cout << "Enter 2 to Insert value from Back." << endl;
	cout << "Enter 3 to Delete value from Front." << endl;
	cout << "Enter 4 to Delete value from Back." << endl;
	cout << "Enter 5 to Display Dequeue." << endl;
	cout << "Enter 6 to Display Size of Dequeue." << endl;
	cout << "Enter 7 to Delete Dequeue." << endl;
	cout << "Enter 8 to Exit." << endl;
	int ch,x;
	int cnt = 0;
	do{
		cout << "Enter choice: ";
		cin >> ch;
		switch(ch){
		case 1:
			cout << "Enter data to be Inserted from Front: ";
			cin >> x;
			dq.push_front(x);
			break;

		case 2:
			cout << "Enter data to be Inserted from Back: ";
			cin >> x;
			dq.push_back(x);
			break;

		case 3:
			dq.pop_front();
			break;

		case 4:
			dq.pop_back();
			break;

		case 5:
			it = dq.begin();
			if(dq.empty()){
				cout << "List is Empty.";
				break;
			}
			while(it != dq.end()){
				cout << *it << endl;
				it++;
			}
			break;

		case 6:
			it = dq.begin();
			if(dq.empty()){
				cout << "Size: 0" << endl;
				break;
			}
			while(it != dq.end()){
				//cout << *it << endl;
				cnt++;
				it++;
			}
			cout << "Size: " << cnt << endl;
			break;

		case 7:
			dq.clear();
			cnt = 0;
			break;
		}
	}while(ch<8);
}
