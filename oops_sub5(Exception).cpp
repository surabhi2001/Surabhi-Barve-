// ASSIGNMENT 5

//Name : Surabhi Barve    Gr. no. 21810819

Create User defined exception to check the following conditions and throw the exception 
if the criterion does not meet.
 a. User stays in Pune/ Mumbai/ Bangalore / Chennai
 b. User has 4-wheeler
City, Vehicle from the user and check for the conditions mentioned above. 
If any of the condition not met then throw the 	exception. If user does not enter proper input throw the exception.	
*/




#include<iostream>
#include<string>
using namespace std;

class excep
{
	public:
	char vehicle;
 	string city;
  	excep()		//constructor
  	{
   		vehicle=0;
  	}
	void getdata();	//function defining
};
void excep::getdata()	//function defination
{

 	cout<<"Enter Your City name ";
 	cin>>city;
 	if(city=="pune" || city=="mumbai" || city=="bangalore" || city=="chennai" ||
       city=="Pune" || city=="Mumbai" || city=="Bangalore" || city=="Chennai" ||
       city=="PUNE" || city=="MUMBAI" || city=="BANGALORE" || city=="CHENNAI")
 	{
 		cout<<"Valid city"<<endl;
 	}
 	else
 	{
  		throw 1;	// throwing exception for invalid city
 	}
 	cout<<"Do you have four wheeler(y/n) ";
 	cin>>vehicle;
	if(vehicle=='n' ||vehicle=='N')
  	{
   		throw 2;	// throwing exception for 2 wheeler
  	}

}

int main()
{
 	excep e;
 	try			//try block for exception checking
 	{
  		e.getdata();	// function call

  	}
 	catch(int i)		// catch block to caught exception
 	{
  		switch(i)
  		{
   			case 1:
    			cout<<"\nException! Invalid city"<<endl;
    			break;

   			case 2:
    			cout<<"\nException! User Do'nt have four vehicle"<<endl;
    			break;

		}
 	}
 	return 0;
}
