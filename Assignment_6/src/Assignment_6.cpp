//============================================================================
// Name        : Assignment_6.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Per{
public:

	char emp_name[50];
	int emp_id;

	void get_Per(){
		cout << "Enter Name: " << endl;
		cin.getline(emp_name,48);
		cout << "Enter ID: " << endl;
		cin >> emp_id;
	}

	void disp_Per(){
		cout << "Enter Name is: ";
		cout << emp_name << endl;
		cout << "Enter ID: ";
		cout << emp_id << endl;

	}
};

class Prof{
public:
	int emp_exp,emp_sal;

	void get_Prof(){
		cout << "Enter Salary: " << endl;
		cin >> emp_sal;
		cout << "Enter Experience : " << endl;
		cin >> emp_exp;
	}

	void disp_Prof(){
		cout << "Enter Salary is: ";
		cout << emp_sal << endl;
		cout << "Enter Experience is: ";
		cout << emp_exp << endl;

		}


};

class Acad{
public:

	int emp_marks;
	char emp_degree[50];

	void get_Acad(){
		cout << "Enter Marks: " << endl;
		cin >> emp_marks;
		cout << "Enter Degree : " << endl;
		cin.ignore(1);
		cin.getline(emp_degree,48);
	}

	void disp_Acad(){
		cout << "Enter Marks is: ";
		cout << emp_marks << endl;
		cout << "Enter Degree is: ";
		cout << emp_degree << endl;
	}
};

class Bio: public Per, public Prof, public Acad{
public:

	void get(){
		get_Per();
		get_Prof();
		get_Acad();
	}

	void disp(){
		disp_Per();
		disp_Prof();
		disp_Acad();
	}
};

int main() {

	Bio b;
	b.get();
	b.disp();

}

