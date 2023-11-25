/*Cpp program to illustrate pure virtual function
to convert given data from meter to centi meter*/
#include<iostream>

using namespace std;

class Base
{
	public:
		virtual void read(){}
		virtual void convert(){}
};
class cm_mtr:public Base
{
	int cm;
	public:
		void read()
		{
			cout<<"Enter the length in cm\n";
			cin>>cm;
		}
		void convert()
		{
			cout<<"\n"<<cm<<" CMs:"<<(float)cm/100<<" Mtrs"<<endl;
		}
};
class mtr_cm:public cm_mtr
{
	int mtr;
	public:
		void read()
		{
			cout<<"\nEnter the length in mtr\n";
			cin>>mtr;
		}
		void convert()
		{
			cout<<"\n"<<mtr<<" Mtrs:"<<mtr*100<<" CMs\n";
		}
};
int main()
{
	
	Base *p;
	cm_mtr c;
	p=&c;
	(*p).read();
	p->convert();
	mtr_cm m;
	p=&m;
	p->read();
	(*p).convert();
	
}
/*OUT PUT:
Enter the length in cm
10                                                                              
                                                                                
10 CMs:0.1 Mtrs                                                                 
                                                                                
Enter the length in mtr                                                         
4                                                                               
                                                                                
4 Mtrs:400 CMs */
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                







