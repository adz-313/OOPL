//============================================================================
// Name        : Assignment_5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
//class Database;
class CommonData{
	char name[30], division;
	int rollno, grade, marks;
	static int sum;
	public:
		friend class Database;
		CommonData();
		CommonData(CommonData &);
		inline void getData();
		inline void putData();
		static int putAvg(int);
		~CommonData();
};

CommonData::CommonData(){
	rollno = 0;
	grade = 0;
	marks = 0;
}

CommonData::CommonData(CommonData & objc){
	strcpy(this->name, objc.name);
	this->division = objc.division;
	this->rollno = objc.rollno;
	this->grade = objc.grade;
	this->marks = objc.marks;
}

int CommonData::sum;

inline void CommonData::getData(){
	cout<<"Enter the following: "<<endl;
	cout<<"Name, rollno, grade, division and marks: "<<endl;
	cin>>name>>rollno>>grade>>division>>marks;
	sum += marks;
}

inline void CommonData::putData(){
	cout<<"\n"<<name<<"\t"<<rollno<<"\t"<<grade<<"\t"<<division<<"\t"<<marks;
}

int CommonData::putAvg(int nos){
	return sum/nos;
}

CommonData::~CommonData(){
	//Commondata destructor called
}

class Database{
	CommonData cd;
	long int telephone;
	char bdate[11], bgroup[3], lic[16], addr[100];
	//string addr;
	public:
		//friend class CommonData;
		Database();
		inline void accept();
		Database(Database &);
		inline void display();
		~Database();
};

Database::Database(){
	telephone = 0;
}

inline void Database::accept(){
	cd.getData();
	cout<<"Enter Birthdate, telephone, blood group and lic no. "<<endl;
	cin>>bdate>>telephone>>bgroup>>lic;
	cout<<"Enter address: ";
	cin>>addr;
}

Database::Database(Database & objd){
	strcpy(cd.name, objd.cd.name);
	cd.division = objd.cd.division;
	cd.rollno = objd.cd.rollno;
	cd.grade = objd.cd.grade;
	cd.marks = objd.cd.marks;
	strcpy(bdate, objd.bdate);
	telephone = objd.telephone;
	strcpy(bgroup, objd.bgroup);
	strcpy(addr, objd.addr);
	strcpy(lic, objd.lic);
}

inline void Database::display(){
	cd.putData();
	cout<<"\t"<<bdate<<" "<<telephone<<" "<<bgroup<<"\t"<<lic<<"\t"<<addr<<endl;
}

Database::~Database(){
	//Database Destructor called
}

int main(){
	int nos,choice;
	char access;
	Database *d1;
	d1 = new Database[nos];
	CommonData *c1;
	c1 = new CommonData[nos];
	cout<<"Enter the number of students: ";
	cin>>nos;
	cout<<"Menu: "<<endl;
	cout<<"1. Enter the details of Students"<<endl;
	cout<<"2. View the details of Students"<<endl;
	cout<<"3. Calculate average marks"<<endl;
	cout<<"4. Copy details of database to another database"<<endl;
	cout<<"5. Exit"<<endl<<endl;
	while(1){
		 cout<<"Enter your choice: "<<endl;
		 cin>>choice;
		 switch(choice){
		 	case 1:
		 		cout<<"Enter access level (s = student, t = teacher): ";
				cin>>access;
		 		cout<<"Enter the details of students: "<<endl;
		 		if(access == 't'){
		 			for(int i=0;i<nos;i++)
						d1[i].accept();
				}
				else if(access == 's'){
					for(int i=0;i<nos;i++)
						c1[i].getData();
				}
				else
					cout<<"Invalid access level, try again"<<endl;
				break;
			case 2:
				if(access == 't'){
					cout<<"Name\tRollno\tGrade\tDiv\tMarks\tB.date     Mobile     B.Group\tLic\tAddress"<<endl;
					for(int i=0;i<nos;i++)
						d1[i].display();
				}
				else if(access == 's'){
					cout<<"Name\tRollno\tGrade\tDiv\tMarks"<<endl;
					for(int i=0;i<nos;i++)
						c1[i].putData();
				}
				else
					cout<<"Invalid access level, try again"<<endl;
				break;
			case 3:
				cout<<"Average marks are: "<<CommonData::putAvg(nos)<<endl;
				break;
			case 4:
				if(access == 't'){
		 			Database *d2(d1);
				}
				else if(access == 's'){
					CommonData *c2(c1);
				}
				else
					cout<<"Invalid access level, try again"<<endl;

				break;
			case 5:
				exit(0);
			default:
				cout<<"Invalid choice, try again"<<endl;
				break;
		}
	}
	delete []d1;
	delete []c1;
	return 0;
}
