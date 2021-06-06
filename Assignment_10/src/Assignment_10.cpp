//============================================================================
// Name        : Assignment_10.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
template<class select>
select sort()
{
	int i,j,n;
	cout<<"Enter No. of Elements: ";
	cin>>n;
	select arr[n];
	cout<<"Enter Elements:\n";
	for(i=0;i<n;i++)
		cin>>arr[i];
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(arr[i]>arr[j])
			{
				select temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
	cout<<"Sorted Array is: \n";
	for(i=0;i<n;i++)
		cout<<arr[i]<<" ";
}
int main()
{
	int ch;
	while(ch<2)
	{
		cout<<"Enter Choice 0. Integer 1. Float: ";
		cin>>ch;
		if(ch==0)
		{
			cout<<"Integer sorting...\n";
			sort<int>();
		}
		else
		{
			cout<<"Floating sorting...\n";
			sort<float>();
		}
	}
	return 0;
}
