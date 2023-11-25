//Cpp program to implement single inheritance
#include<iostream>
using namespace std;

class student
{
	int rno;
	char name[10];
	public:
		void getinfo()
		{
			cout<<"Enter the roll no:\n";
			cin>>rno;
			cout<<"Enter the Name:\n";
			cin>>name;
		}
		void print()
		{
			cout<<"\nRoll no:"<<rno<<endl;
			cout<<"Name:"<<name<<endl;
		}
};
class marks:public student
{
	int m1,m2,m3,tot;
	float avg;
	public:
		void getmarks()
		{
			cout<<"Enter the marks\n";
			cin>>m1>>m2>>m3;
		}
		void display()
		{
			tot=m1+m2+m3;
			cout<<"Total:"<<tot<<endl;
			avg=(float)tot/3;
			cout<<"Avg:"<<avg<<endl;
		}
};
int main()
{

	int n;
	marks m[100];
	cout<<"Enter the no.of students\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
	   cout<<"Enter the "<<i+1<<"Student details\n";
	   m[i].getinfo();
	   m[i].getmarks();
	}
	cout<<"Student Details:\n";
	for(int i=0;i<n;i++)
	{
		m[i].print();
		m[i].display();
	}
	return 0;
}
/*Out Put:
Enter the no.of students
2
Enter the 1Student details
Enter the roll no:
1
Enter the Name:
ABC
Enter the marks
89 78 67
Enter the 2Student details
Enter the roll no:
2
Enter the Name:
PQR
Enter the marks
78 98 67
Student Details:
Roll no:1
Name:ABC
Total:234
Avg:78

Roll no:2
Name:PQR                                                                        
Total:243                                                                       
Avg:81                                                                          
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                


