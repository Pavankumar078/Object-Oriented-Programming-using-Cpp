//Bank transaction
#include<iostream>
#include<stdlib.h>
using namespace std;


class Bank
{
	static int acc;
	float bal;
	char n[10];
	public:
		void open();
		void deposit(float);
		void show();
		void withdraw(float);
};
int Bank::acc;
void Bank::open()
{
	int age;       bal=500;
	char city[10];
	cout<<"Enter Ur Name\n";
	cin>>n;
	cout<<"Enter Ur city\n";
	cin>>city;
	cout<<"Enter Ur age\n";
	cin>>age;
	cout<<"Ur account number is:"<<++acc<<endl;
}
void Bank::show()
{
	cout<<"Name:"<<n<<endl;
	cout<<"Balance:"<<bal<<endl;
}
void Bank::deposit(float amt)
{
	bal+=amt;
	cout<<"Ur total amount is:"<<bal<<endl;
}
void Bank::withdraw(float amt)
{
	if(bal-amt<500)
	    cout<<"Amount can not be withdrawn\n";
	else
	{
	    bal-=amt;
	    cout<<"Ur total amt is:"<<bal<<endl;
	}
}
int main()
{
	
	int c,i,acc;
	float amt;
	i=1;
	Bank *b=new Bank[100];
	do
	{
		cout<<"\n\n0 for exit\t1 for open account\n";
		cout<<"2for deposit\t3 for show\n4 for withdraw\n";
		cout<<"\n\nenter Ur choice\n";
		cin>>c;
		switch(c)
		{
		    case 0:exit(0);
			   break;
		    case 1:(*(b+i)).open();    i++;
			    break;

		    case 2:cout<<"\nEnter Ur account Number\n";
			cin>>acc;
			cout<<"\nEnter the amount to br deposited\n";
			cin>>amt;
			(*(b+acc)).deposit(amt);
			break;
		    case 3:cout<<"\nEnter Ur account number\n";
			cin>>acc;
			(*(b+acc)).show();
			break;
		    case 4:cout<<"\nEnter account number\n";
			cin>>acc;
			cout<<"\nEnter the amount to be withdrawn\n";
			cin>>amt;
			(*(b+acc)).withdraw(amt);
			break;
		    default:cout<<"\nInvalid choicce\n";
			break;
		}
	}while(c!=0);
}





