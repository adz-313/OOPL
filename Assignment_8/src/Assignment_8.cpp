//============================================================================
// Name        : Assignment_8.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ofstream fout;
	fout.open("Student2.txt");
	if(fout.fail()){
		cout << "Error";
		return -1;
	}
	string s="";
	string b;
	string s2;
	while(1){
		cout << "Enter data: ";
		getline(cin,b);
		if(b=="stop"){
			break;
		}
		fout << b << endl;
	}
	fout.close();

	ifstream fin("Student2.txt");
	while(fin.eof()==0){
		getline(fin,s2);
		s=s+s2+'\n';
	}
	cout << s << endl;
	string a;
	cout << "Enter string to be searched: ";
	getline(cin,a);
	if(s.find(a)!=s.npos){
		cout << "found";
	}
	else{
		cout << "not found";
	}
	fin.close();

}
