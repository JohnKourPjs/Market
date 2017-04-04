#include "user.h"
#include <iostream>
using namespace std;

user::user()
	{
		name="";
		id=0;
		email="";
		address="";
		balance=0;
}

user::user(string sn,long sid,string sem,string sadr,double sba)
	{
		name=sn;
		id=sid;
		email=sem;
		address=sadr;
		balance=sba;
}
 	 

		string user::getname()
		{ return name;
}
		void user:: setname (string sn)
{			name=sn;
}
		long user:: getid()
{		return id;
}
		void user:: setid(long sid)
{			id=sid;
}
		string user:: getemail()
{		return email;
}
		void user:: setemail(string sem)
{			email=sem;
}
		string user:: getaddress()
{
}
		void user:: setaddress(string sadr)
{		address=sadr;
}
		double user:: getbalance()
{		return balance;
}
		void user:: setbalance(double sbal)
{			balance=sbal;
}

		void user::print()
{
		cout << "Name= " <<name << endl;
		cout << "ID= "<< id<< endl;
		cout << "Email= "<< email <<endl;
		cout << "Address= "<< address <<endl;
		cout << "Balance= "<<balance <<endl;
}

