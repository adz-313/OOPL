//============================================================================
// Name        : Assignment_9.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main(int argc,char* argv[]){
	string s="",s2;
	string old_word = argv[1];
	string new_word = argv[2];
	string file_name = argv[3];
	ifstream fin;
	fin.open(file_name.c_str());
	if(fin.fail()){
		cout << "Error";
		return -1;
	}
	while(fin.eof()==0){
		getline(fin,s2);
		s=s+s2+"\n";
	}
	int i=0;
	while(s.find(old_word)!=s.npos){
		i=s.find(old_word);
		s.replace(i,old_word.length(),new_word);
	}
	fin.close();
	ofstream fout;
	fout.open(file_name.c_str());
	fout << s;
	fout.close();

}
