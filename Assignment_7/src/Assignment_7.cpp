//============================================================================
// Name        : Assignment_7.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string.h>
using namespace std;

int main() {
	int age,income,wheel;
	char arr[100];
	cout << "Enter age: ";
	cin >> age;
	cout << "Enter income: ";
	cin >> income;
	cin.ignore(1);
	cout << "Enter residence: ";
	cin.getline(arr,98);
	cout << "Enter number of wheels: ";
	cin >> wheel;
	int a;
	float b;
	char c;
	double d;
	int cnt=0;
	bool error;
	do{
		try{
				if(age>18 && age<55){
					cout << "Age Ok" << endl;
					error=0;
				}
				else{
					error=1;
					throw a;
				}
				if(income>50000 && income<100000){
					cout << "Income Ok" << endl;
					error=0;
				}
				else{
					error=1;
					throw b;
				}
				if(strcmp(arr,"Mumbai")==0 || strcmp(arr,"Pune")==0 || strcmp(arr,"Chennai")==0 || strcmp(arr,"Banglore")==0){
					cout << "City Ok" << endl;
					error=0;
				}
				else{
					error=1;
					throw c;
				}
				if(wheel==4){
					cout << "Wheel Ok" << endl;
					error=0;
				}
				else{
					error=1;
					throw d;
				}
			}

			catch(int a){
				cout << "Error age" << endl;
				cout << "Please enter valid age: ";
				cin >> age;
			}
			catch(float b){
					cout << "Error income" << endl;
					cout << "Please enter valid income: ";
					cin >> income;
				}
			catch(char c){
					cout << "Error city" << endl;
					cout << "Please enter valid city: ";
					cin >> arr;
				}
			catch(double d){
					cout << "Error wheel" << endl;
					cout << "Please enter valid wheel: ";
					cin >> wheel;
				}
			cnt++;
		}while(error!=0);

	}
