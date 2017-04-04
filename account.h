#ifndef ACCOUNT_H
#define ACCOUNT_H
#include "user.h"
class account
{
	user name;
	long id;
	double balance;
	public:
		account();
		account(user, long ,double);
		

	
		string getname();
		void setname(string);
		long getid();
		void setid(long);
		double getbalance();
		void setbalance(double);
		void print();
		/*destructor trexei otan teliwsei i klasi*/
		~account();
	protected:
};

#endif
