//============================================================================
// Name        : Assignment_3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<math.h>
using namespace std;

class quadratic{
	int a,b,c;
public:
	quadratic(){
		a=0;
		b=0;
		c=0;
	}
	friend istream &operator>>(istream &obj,quadratic &c);
	friend ostream &operator<<(ostream &obj,quadratic &c);
	friend quadratic operator+(quadratic,quadratic);
	int eval();
	void compute();


};

istream &operator>>(istream &obj,quadratic &c){
cin>>c.a;
cin>>c.b;
cin>>c.c;
return (cin);
}

ostream &operator<<(ostream &obj,quadratic &c){
	cout <<c.a << endl;
	cout <<c.b << endl;
	cout <<c.c << endl;
	return (cout);
}

quadratic operator+(quadratic c1,quadratic c2){
quadratic t;
t.a=c1.a+c2.a;
t.b=c1.b+c2.b;
t.c=c1.c+c2.c;
return t;
}

int quadratic::eval(){
	int t,n;
	cout << "Enter x: " << endl;
	cin>>n;
	t=(a*n*n)+(b*n)+c;
	return t;
}

void quadratic::compute(){
	float t1,t2;

	t1=((-b)+(sqrt((b*b)-(4*a*c))))/(2*a);
	t2=((-b)-(sqrt((b*b)-(4*a*c))))/(2*a);
	cout<<t1 << endl <<t2;


}

int main() {
quadratic c1,c2,r;
int n;
cout << "Enter a,b and c for c1: " << endl;
cin>>c1;
cout << "Enter a,b and c for c2: " << endl;
cin>>c2;
r=c1+c2;
cout<< "Addition is: "<< r << endl;
n=c1.eval();
cout<<n;
cout << "Roots are: ";
c1.compute();

return 0;
}
