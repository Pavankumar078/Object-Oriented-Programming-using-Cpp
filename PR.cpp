/*Prg to generate all prime no. using isprime() function*/
#include<iostream>
#include<stdlib.h>
using namespace std;

int isprime(int i)
{
	int j=2,f=0;

	for(j=2;j<i;j++)
	{
		if(i%j==0)
		{

		  f=1;
		  break;
		}
	}
		if(f==0)
		  return 1;
		else
		   return 0;
}





int main()
{
	int n,i;
	cout<<"Enter a number\n";
	cin>>n;
	if(n<=0)
	{
		cout<<"Enter positve number\n";
		exit(0);
	}
	cout<<"Prime series\n";
	for(i=2;i<n;i++)

	{
		  if(isprime(i)==1)
		     cout<<i<<endl;
	}

}

