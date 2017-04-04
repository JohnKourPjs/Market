#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>

using namespace std;


class user
{ 	private:
		string name;
		long id;
		string email;
		string address;
		double balance;
	public:
		user();
		user(string,long,string,string,double);
		string getname();
		void setname(string);
		long getid();
		void setid(long);
		string getemail();
		void setemail(string);
		string getaddress();
		void setaddress(string);
		double getbalance();
		void setbalance(double);
		void print();
};

#endif
