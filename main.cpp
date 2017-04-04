
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include "user.h"
#include "account.h"


int main() {
user users[2];
account accounts[2];
  users[0].setname("Kostas");
users[0].setid(345);
users[0].setemail("kostas@ist.gr");
users[0].setaddress("Ag. Saranta 43");
users[0].setbalance(3422.22);
users[1].setname("Yannis");
users[1].setid(346);
users[1].setemail("yannis@ist.gr");
users[1].setaddress("Ag. Saranta 47");
users[1].setbalance(5221.22);
cout<<":=================================="<<endl;
cout<<":=================================="<<endl;
users[1].print();
cout<<":=================================="<<endl;
users[0].print();
cout<<":=================================="<<endl;
cout<<":=================================="<<endl;
accounts[0].setname(users[0].getname());
accounts[0].setid(users[0].getid());
accounts[0].setbalance(users[0].getbalance());
accounts[0].print();


	return 0;
}
