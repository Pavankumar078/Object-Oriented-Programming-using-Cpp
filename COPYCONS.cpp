//Cpp program to generate fibonacci series using copy constructor
#include<iostream>

using namespace std;

class Copy
{
	int n;
	public:
		Copy()
		{
			cout<<"Enter a number\n";
			cin>>n;
		}
		Copy(Copy &c)
		{
			n=c.n;
		}
		void fibo();
};
void Copy::fibo()
{
	int i,f1=0,f2=1,f3;
	cout<<"Fibonacci series:\n";
	cout<<f1<<"\t"<<f2<<"\t";
	for(i=2;i<n;i++)
	{
		f3=f1+f2;
		f1=f2;
		f2=f3;
		cout<<f3<<"\t";
	}
}
int main()
{
	
	Copy c1;
	Copy c2=c1;
	c2.fibo();
	return 0;
}
/*OUT PUT:
Enter a number
8
Fibonacci series:
0       1       1       2       3       5       8       13*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                


