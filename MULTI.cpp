//Cpp program to implement multuple inheritance
#include<iostream>
using namespace std;

class student
{
	int rno;
	char nam[10];
	public:
		void read1()
		{
			cout<<"Enter the rno:\n";
			cin>>rno;
			cout<<"Enter the name\n";
			cin>>nam;
		}
		void print1()
		{
			cout<<"Roll No:"<<rno;
			cout<<"\nNname:"<<nam;
		}
};
class marks
{
	protected:int m1,m2,m3;
	public:
		void read2()
		{
			cout<<"Enter the marks\n";
			cin>>m1>>m2>>m3;
		}
};
class sports
{
	protected:int s,c;
	public:
		void check()
		{
			cout<<"1:sportsman\t2:not sportsman";
			cout<<"\nEnter Ur choice\n";
			cin>>c;
			if(c==1)
			   s=5;
			else
			  s=0;
		}
};
class result:public student,public marks,public sports
{
	int tot;
	float avg;
	public:
		void cal()
		{
			tot=m1+m2+m3+s;
			avg=(float)tot/3;
			cout<<"\nTotal:"<<tot;
			cout<<"\nAvg:"<<avg;
		}
};
int main()
{
	
	result r;
	cout<<"Enter the student details\n\n";
	r.read1();
	r.read2();
	r.check();
	r.print1();
	r.cal();
	return 0;
}
/*OUT PUT:
Enter the student details
                                                                                
Enter the rno:                                                                  
1                                                                               
Enter the name                                                                  
ABC                                                                             
Enter the marks                                                                 
90                                                                              
67                                                                              
89                                                                              
1:sportsman     2:not sportsman                                                 
Enter Ur choice                                                                 
1                                                                               
Roll No:1                                                                       
Nname:ABC                                                                       
Total:251                                                                       
Avg:83.666664*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                







