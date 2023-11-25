/*stack*/
#include<iostream>
#include<stdlib.h>
using namespace std;

class stack
{
	int n,r,s[100];
	public:
		void read()
		{
			r=-1;
			cout<<"Enter the size of stack\n";
			cin>>n;
		}
		void push();
		void pop();
		void display();
};
void stack::push()
{
	int it;
	if(r==n-1)
	{
		cout<<"Stack is full\n";
		return;
	}
	cout<<"Enter item to insert\n";
	cin>>it;
	s[++r]=it;
}
void stack::pop()
{
	if(r==-1)
	{
		cout<<"Stack is empty\n";
		return;
	}
	cout<<"Deleted item is:"<<s[r--];
}
void stack::display()
{
	int i;
	if(r==-1)
	{
		cout<<"Stack is empty\n";
		return;
	}
	cout<<"Stack is:\n";
	for(i=0;i<=r;i++)
	   cout<<s[i]<<"\t";
}
int main()
{
	stack s;  int c;
	
	s.read();
	cout<<"0:exit\t1:push\t2:POP\t3:display\n";
	do
	{
	   cout<<"Enter ur choice\n";
	   cin>>c;
	   switch(c)
	   {
	      case 0:exit(0);
		    break;
	      case 1:s.push();
		     break;
	      case 2:s.pop();
		     break;
	      case 3:s.display();
		     break;
	      default:cout<<"Invalid choice\n";
			break;
	   }
	}while(c!=0);
	return 0;
}





