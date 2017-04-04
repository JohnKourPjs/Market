#include "account.h"

account::account()
{
	 
	id=0;
	balance=0;
}

account::account(user sn,long sid,double sba)
	{
	name=sn;
		id=sid;
		balance=sba;
}


	string account::getname()
		{ return name.getname();
}
		void account:: setname (string sn)
{			name.setname(sn);
}
		long account:: getid()
{		return id;
}
		void account:: setid(long sid)
{			id=sid;
}

		double account:: getbalance()
{		return balance;
}
		void account:: setbalance(double sbal)
{			balance=sbal;
}


	void account::print()
{
		cout << "Name= " <<name.getname() << endl;
		cout << "ID= "<< id<< endl;
		cout << "Balance= "<<balance <<endl;
}
account::~account()
{


}
