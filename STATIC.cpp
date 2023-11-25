//Prg to illustrate staic variable and static member function
#include<iostream>
using namespace std;

class stat
{
	static int c;
	int a;
	void read()
	{
	   cout<<"\nEnter any number\n";
	   cin>>a;
	   c++;
	}

	public:

		static void print(stat s)
		{
			s.read();
			cout<<"\nData Member:"<<s.a;
			cout<<"\n\nStatic variable Count:"<<c<<endl;
		}
};
int stat::c;
int main()
{
	
	stat p,q,r;
	stat::print(p);
	stat::print(p);
	stat::print(q);
	stat::print(r);
	return 0;
}
/*Out Put:

Enter any number
20

Data Member:20

Static variable Count:1

Enter any number
40

Data Member:40

Static variable Count:2

Enter any number
60

Data Member:60

Static variable Count:3

Enter any number
80

Data Member:80

Static variable Count:4*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
