/*Cpp prg to define a class with 3 integer variables and provide appropriate
constructor to read and overload + operator to add 2 time object*/
#include<iostream>
using namespace std;

class Time
{
	int hr,min,sec;
	public:
		Time()
		{
			cout<<"Enter the time\n";
			cin>>hr>>min>>sec;
		}


		void operator+(Time);
};
void Time::operator+(Time T)
{
	int h,m,s,d=0;
	h=hr+T.hr;
	m=min+T.min;
	s=sec+T.sec;
	while(h>=24)
	{
		d++;
		h-=24;
	}
	while(m>=60)
	{
		h++;
		m-=60;
	}
	while(s>=60)
	{
		m++;
		s-=60;
	}
	cout<<d<<" Days:"<<h<<" Hrs:"<<m<<" Min:"<<s<<" Sec\n\n";
}
int  main()
{
	
	Time T1,T2;
	cout<<"Addition Of Time objects\n\n";
	T1+T2;
	return 0;
}
/*OUT PUT:
Enter the time
4 56 6                                                                          
Enter the time                                                                  
6 7 56                                                                          
Addition Of Time objects                                                        
                                                                                
0 Days:11 Hrs:4 Min:2 Sec    */
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

