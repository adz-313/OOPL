//============================================================================
// Name        : Assignment_4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include<iostream>
using namespace std;

class calc{
float a,b;

public:
calc()
{
a=0;
b=0;
}
void getdata();
void add();
void sub();
void mul();
void div();


};


void calc::getdata(){
cout<< "Enter First Number, Second Number: ";
cin >> a >> b;

}

void calc::add(){
cout << a+b;
}

void calc::sub(){
cout << a-b;
}

void calc::mul(){
cout << a*b;
}

void calc::div(){
cout << a/b;
}


int main(){
char ch;


char o;
calc s;
do{
s.getdata();
cout << "Enter operation: ";
cin >> o;
switch(o){
case '+':s.add();break;
case '-':s.sub();break;
case '*':s.mul();break;
case '/':s.div();break;
default: cout<< "Wrong operator";}
 cout << "Do another:";
cin >> ch;}
while(ch == 'y');

}
