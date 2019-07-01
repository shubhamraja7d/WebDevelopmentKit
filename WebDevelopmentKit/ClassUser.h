#include<iostream>
#include<string>

using namespace std;

class UserDet
{
//	static int Counter;
//	int ctr;
	public:
	string name;
	string u_id;
	string password;
	string role;

	UserDet() { }
	UserDet(string name,string u_id,string password,string role)
	{
	//	this->ctr=ctr;
		this->name=name;
		this->u_id=u_id;
		this->password=password;
		this->role=role;
	}
/*	static int getcounter()
	{
		Counter++;
		return Counter;
	}    
	*/

	string getUserId()
	{
		return this->u_id;
	}
	string getPassword()
	{
		return this->password;
	}
	
}; 
//int UserDet :: Counter = 0;

