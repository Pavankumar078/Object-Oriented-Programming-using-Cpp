//Cpp prg to illustrate the use of virtual base class
#include<iostream>
using namespace std;

class Base
{
	public:
		void display()
		{
			cout<<"\t\tDislay Base\n\n";
		}
		virtual void show()
		{
			cout<<"\t\tShow Base\n\n";
		}
};
class Derived:public Base
{
	public:
		void display()
		{
			cout<<"\t\tDisplay derived\n\n";
		}
		void show()
		{
			cout<<"\t\tShow derived\n\n";
		}
};
int main()
{
	
	Base *p,b;
	Derived d;
	p=&b;
	cout<<"\n\n\tPointer points to Base class\n\n";
	p->display();
	p->show();
	cout<<"\n\n\tPointer points to Derived class\n\n";
	p=&d;
	p->display();   //call to Base::display()
	p->show();	//call to derived class show() virtual fucn
	return 0;
}
/*OUT PUT:


	Pointer points to Base class

		Dislay Base

		Show Base



	Pointer points to Derived class

		Dislay Base

		Show derived  */

                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                


