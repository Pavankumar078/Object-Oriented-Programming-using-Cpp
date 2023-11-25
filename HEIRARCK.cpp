/*Cpp prg to convert given decimal number into octal and hexadecimal
number using the concept heirachical inheritance*/
#include<iostream>
using namespace std;


class Number
{
	protected:int n;
	public:
		void read()
		{
			cout<<"\nEnter a decimal number\n";
			cin>>n;
		}
};
class Octal:public Number
{
	int oc[100];
	public:void dec_oct();

};
class Hexa:public Number
{
	int hx[100],i,j;
	public:
		void dec_hex();
};
void Octal::dec_oct()
{
	int i=0,j;
	while(n>0)
	{
		oc[i]=n%8;
		n=n/8;
		i++;
	}
	cout<<"\nOctal Number is:";
	for(j=i-1;j>=0;j--)
	    cout<<oc[j];
}
void Hexa::dec_hex()
{
	i=0;
	while(n>0)
	{
		hx[i]=n%16;
		n/=16;
		i++;
	}
	cout<<"\nHexadecimal Number is:\n";

	for(j=i-1;j>=0;j--)
	{
		if(hx[j]<10)
		   cout<<hx[j];
		else
		{
		    switch(hx[j])
		    {
		       case 10:cout<<"A";break;
		       case 11:cout<<"B";break;
		       case 12:cout<<"C";break;
		       case 13:cout<<"D";break;
		       case 14:cout<<"E";break;
		       case 15:cout<<"F";break;
		    }
		}
	}
}
int main()
{
	
	Octal oct;
	Hexa h;
	cout<<"\n\nDecimal to Octal\n";
	oct.read();
	oct.dec_oct();
	cout<<"\n\nDecimal to Hexadecimal\n";
	h.read();
	h.dec_hex();
	return 0;
}
/*OUT PUT:
Decimal to Octal

Enter a decimal number
76

Octal Number is:114

Decimal to Hexadecimal

Enter a decimal number
90

Hexadecimal Number is:
5A
*/



                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                







