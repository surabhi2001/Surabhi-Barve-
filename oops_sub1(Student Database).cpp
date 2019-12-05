//ASSIGNMENT 1

//Name : Surabhi Barve    Gr. No. 21810819

/*problem statment:Develop an object oriented program in C++ to create a database of student information 
system containing the following information: Name, Roll number, Class, division, Date of Birth, Blood group, 
Contact address, telephone number, driving license no. etc Construct the database with suitable member 
functions viz, static member functions, friend class/ friend function, this pointer, inline code and dynamic 
memory allocation operators-new and delete. Implement all the keywords as mentioned in the problem statement. */


#include<iostream>
#include<unistd.h>
#include<cstring>
#include<string>
using namespace std;
int cnt=0;
class student
{
private:
//variable declarations
int roll_no;
//int age;
long int mob_no;
string b_g,clas,div;
string name,adr;
public:
static int age; // static variable
student() // constructor
{
name="Aayushi";
roll_no=0;
clas="SY";
div="A";
adr="PUNE";
b_g="AB+";
mob_no=076654332;
age=20;
}

//function declarations

friend int Enter(student list[100]); // friend function

friend int update(student list[100]); // friend function

void display(student list[100]);

~student(){}; // Destructor

};
int student:: age=0; // static variable defination
//function definations

void student ::display(student list[20])
{
int r;
cout<<"Enter roll no to display record: ";
cin>>r;
cout<<endl;
for(int i=0;i<20;i++)
{
if(r==list[i].roll_no)
{
cout<<"name: "<<list[i].name<<"\n";
cout<<"age: "<<list[i].age<<"\n";
cout<<"class: "<<list[i].clas<<endl;
cout<<"division: "<<list[i].div<<endl;
cout<<"address: "<<list[i].adr<<endl;
cout<<"mobile number: "<<list[i].mob_no<<endl;
cout<<"blood group: "<<list[i].b_g<<endl;
}
else
cout<<"No such roll number found!"<<endl;
break;
}

}

int Enter(student list[100]) //friend function defination
{
char temp[30];
student *ptr=new student(); //dynamic memory allocation
cout<<"Enter name:\n";
cin.clear();
cin.ignore();
cin.getline(temp,30);
ptr->name=temp;
cout<<"Enter roll number:\n";
cin>>ptr->roll_no;
cout<<"Enter class :\n";
cin>>ptr->clas;
cout<<"Enter division:\n";
cin>>ptr->div;
cout<<"Enter address:\n";
cin>>ptr->adr;
cout<<"Enter mobile number:\n";
cin>>ptr->mob_no;
cout<<"Enter blood group:\n";
cin>>ptr->b_g;
cout<<"Enter age:\n";
cin>>ptr->age;
list[cnt]=*ptr;
cnt++;
return 0;
}
int update(student list[20])
{
int r;
cout<<"Enter roll number you want to update: ";
cin>>r;
for(int i=0;i<20;i++)
{
if(r==list[i].roll_no)
{
cout<<"OLD DATA\n";
cout<<"Name: "<<list[i].name<<endl;
cout<<"Age: "<<list[i].age<<endl;
cout<<"Enter NEW DATA: "<<endl;
cout<<"Name: ";
cin>>list[i].name;
cout<<endl;
cout<<"Class: \n";
cin>>list[i].clas;
cout<<endl;
cout<<"Division: \n";
cin>>list[i].div;
cout<<endl;
cout<<"Address: \n";
cin>>list[i].adr;
cout<<endl;
cout<<"Mobile number: \n";
cin>>list[i].mob_no;
cout<<endl;
cout<<"Blood group: \n";
cin>>list[i].b_g;
cout<<endl;
cout<<"Age: \n";
cin>>list[i].age;
cout<<endl;
cout<<"Data updated succesfully";
cout<<endl;
}
else
cout<<"No data found\n";
break;
}
return 0;

}


int main()
{
int ch;
student s;        //class object creation
student list[100];
char c;
do
{
cout<<"                         STUDENT DATABASE";
cout<<endl;
cout<<"1. INSERT DATA"<<endl;
cout<<"2. MODIFY DATA"<<endl;
cout<<"3. DISPLAY DATA"<<endl;
cout<<"4. DELETE DATA"<<endl;
cout<<"5. EXIT"<<endl;
cout<<"Enter your choice: ";
cin>>ch;
cout<<endl;
switch (ch)
{
case 1:
cout<<"1) INSERT DATA"<<endl;
  Enter(list);
cout<<endl;
      break;

case 2:
     cout<<"2) MODIFY DATA"<<endl;
      update(list);
     cout<<endl;
     break;
case 3:
     cout<<"3) DISPLAY DATA"<<endl;
       s.display(list);
     cout<<endl;
     break;
case 4:
     cout<<"4) DELETE DATA"<<endl;
     s.~student();         //calling destructor
     cout<<"Deleted\n";
     cout<<endl;
     break;

}
if(ch==5)
c='n';
else
{
cout<<endl<<"Do you want to continue (y/n)? "<<endl;
cin>>c;
}
}while(c=='y'||c=='Y'); //ending do_while loop

cout<<endl<<"Thank you!...../n";
return 0;
}
