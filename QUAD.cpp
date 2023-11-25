/*quadratic eqn*/
#include<iostream>
#include<math.h>

using namespace std;

class quad

{
	double a,b,c,r1,r2,d;
	public:
		void read();
		void equal();
		void uneq();
		void complex();
};
void quad::read()
{
	cout<<"Enter co_efficients of equ\n";
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	if(d==0)
	   equal();
	else if(d>0)
	   uneq();
	else
	   complex();
}
void quad::equal()
{
	r1=r2=(-b)/2*a;
	cout<<"Roots are equal\n";
	cout<<"root1:"<<r1<<"\troot2:"<<r2;
}
void quad::uneq()
{
	r1=-b+sqrt(d)/2*a;
	r2=-b-sqrt(d)/2*a;
	cout<<"Roots are Unequal\n";
	cout<<"root1:"<<r1<<"\troot2:"<<r2;
}
void quad::complex()
{
	d=(-1)*d;
	r1=-b+sqrt(d)/2*a;
	r2=-b-sqrt(d)/2*a;
	cout<<"Roots are Complex\n";
	cout<<"\nroot1 is("<<r1<<")+i("<<r2<<")";
	cout<<"\nroot2 is("<<r1<<")-i("<<r2<<")";
}
int main()
{
	quad q;
	
	q.read();
	return 0;
}





