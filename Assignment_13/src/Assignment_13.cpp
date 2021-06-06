//============================================================================
// Name        : Assignment_13.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string.h>
#include <algorithm>
using namespace std;

struct record
{
	string name;
	int age;
	long phone;
};

void display(record r[],int n)
{

	for(int i=0;i<n;i++)
	{
		cout<<"\n\nName  : "<<r[i].name<<endl;
        cout<<"Phone   : "<<r[i].phone<<endl;
        cout<<"Age     : "<<r[i].age<<endl;
	}
}

bool compare_name(record r1,record r2)
{
	return (r1.name<r2.name);
}

bool compare_age(record r1,record r2)
{
	return (r1.age<r2.age);
}

bool compare_phone(record r1,record r2)
{
	return (r1.phone<r2.phone);
}

int main() {

   record r[10];
   record srch;
   int choice,n,i,age;

   cout<<"Enter no of students to enter records : ";cin>>n;
   for(i=0;i<n;i++)
   {
	   cout<<"\nEnter name of student "<<i+1<<" : ";cin>>r[i].name;
	   cout<<"\nEnter age of student "<<i+1<<" : ";cin>>r[i].age;
	   cout<<"\nEnter phone number of student "<<i+1<<" : ";cin>>r[i].phone;
   }

   do
   {
	   cout<<"\n1. Sort according to name\n"
		   <<"2. Sort according to age\n"
		   <<"3. Sort according to phone\n"
		   <<"4. Search for name\n"
		   <<"5. Search phone no\n"
		   <<"6. Exit"<<endl;
	   cin>>choice;

	   switch(choice)
	   {
	   case 1 : sort(r,r+n,compare_name);

	            cout<<"\nAfter sorting according to name :"<<endl;
	            display(r,n);break;

	   case 2 : sort(r,r+n,compare_age);
	   	   	   	cout<<"\nAfter sorting according to age :"<<endl;
	   	   	   	display(r,n);break;

	   case 3 : sort(r,r+n,compare_phone);
	   	   	   	cout<<"\nAfter sorting according to phone no :"<<endl;
	   	   	    display(r,n);break;

	   case 4 :  cout<<"\nEnter name to search : ";cin>>srch.name;
	             sort(r,r+n,compare_name);
	             if(binary_search(r,r+n,srch,compare_name))
	            	 cout<<"\nRecord found"<<endl;
	             else
	            	 cout<<"\nRecord not found"<<endl;
	             break;

	   case 5 : cout<<"\nEnter phone no to search : ";cin>>srch.phone;
	            sort(r,r+n,compare_phone);
	            if(binary_search(r,r+n,srch,compare_phone))
	            	cout<<"\nRecord found"<<endl;
	            else
	            	cout<<"\nRecord not found"<<endl;
	            break;

	   case 6 : exit(0);
	   }
   }while(1);

	return 0;
}
