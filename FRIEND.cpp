//prg to add contents of two objects using friend function
#include<iostream>
#include<stdlib.h>
using namespace std;

class B;
class A
{
	int a[10],n;
	public:
	    void read();
	    friend void add(A,B);
};
class B
{
	int b[10],n;
	public:
		void read();
		friend void add(A,B);
};
void A::read()
{
	cout<<"Enter the limit of array A\n";
	cin>>n;
	cout<<"Enter the array elements A\n";
	for(int i=0;i<n;i++)
	  cin>>a[i];
}
void B::read()
{
	cout<<"Enter the limit of array B\n";
	cin>>n;
	cout<<"Enter the elements of array B\n";
	for(int i=0;i<n;i++)
	  cin>>b[i];
}
void add(A p,B q)
{
	int c[10];
	if(p.n!=q.n)
	{
	     cout<<"Enter the same limits\n";
	     

	     exit(0);
	}
	cout<<"Sum of 2 Objects is:\n";
	for(int i=0;i<p.n;i++)
	{
	     c[i]=p.a[i]+q.b[i];
	     cout<<c[i]<<"\t";
	}
}
int main()
{
	
	A p;
	B q;
	p.read();
	q.read();
	add(p,q);
	return 0;
}






