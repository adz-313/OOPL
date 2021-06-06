//============================================================================
// Name        : Assignment_2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
using namespace std;
class complex{
float real,img;


public:
complex(){
real=0;
img=0;
}

void input();
void output();

friend istream &operator>>(istream &obj,complex &c1);
friend ostream &operator<<(ostream &obj,complex &c1);
friend complex operator+(complex,complex);
friend complex operator-(complex,complex);
friend complex operator*(complex,complex);
friend complex operator/(complex,complex);



};

complex operator+(complex c1,complex c2){
complex t;
t.real = c1.real + c2.real;
t.img = c1.img + c2.img;
return t;
}

complex operator-(complex c1,complex c2){
complex t;
t.real = c1.real - c2.real;
t.img = c1.img - c2.img;
return t;
}

complex operator*(complex c1,complex c2){
complex t;
t.real = (c1.real*c2.real) - (c1.img*c2.img);
t.img = (c1.img*c2.real) + (c1.real*c2.img);
return t;
}

complex operator/(complex c1,complex c2){
complex t;
t.real = ((c1.real*c2.real) + (c1.img*c2.img)) / (c2.real*c2.real + c2.img*c2.img)  ;
t.img = ((c1.real*c2.img) - (c1.img*c2.real)) / (c2.real*c2.real + c2.img*c2.img) ;
return t;
}

istream &operator>>(istream &obj,complex &c1){
cin>>c1.real;
cin>>c1.img;
return (cin);
}

ostream &operator<<(ostream &obj,complex &c1){
if(c1.img>=0)
{cout<<c1.real<< "+i" <<c1.img;}
else{cout<<c1.real<<c1.img<<"i";}
return (cout);
}

void complex::input(){
cout << "Enter real part: ";
cin >> real;
cout << "Enter imaginary part: ";
cin >> img;
}

void complex::output(){
cout << real << endl;
cout << img << endl;
}

int main(){
complex c1,c2,result;
cin>>c1;
cin>>c2;
//c1.input();
//c2.input();
char c;
cout << "Enter Operator: ";
cin >> c;
switch(c){

case '+': result=c1+c2;
          cout<<result;
          break;
case '-': result=c1-c2;
          cout<<result;
          break;
case '*': result=c1*c2;
          cout<<result;
          break;
case '/': result=c1/c2;
          cout<<result;
          break;
}

}

