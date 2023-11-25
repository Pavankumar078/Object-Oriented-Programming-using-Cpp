/*Cpp prg to Overload subscript operator []*/
#include<iostream>
//#include<conio.h>
using namespace std;

class Array
{
	int a[10],n;
	public:
		Array(int);
		int operator[](int i);
};
Array::Array(int m)
{
	n=m;
	cout<<"Enter the array elements\n";
	for(int i=0;i<n;i++)
	   cin>>a[i];
}
int Array::operator[](int i)
{
	return a[i];
}
int main()
{
	
	int n;
	cout<<"Enter the array limit\n";
	cin>>n;
	Array A(n);
	cout<<"\n\nContents of the array are:\n\n";
	for(int i=0;i<n;i++)
	    cout<<A[i]<<"\t";
	
}
/*OUT PUT:
Enter the array limit
5
Enter the array elements
50 40 30 60 70


Contents of the array are:

50      40      30      60      70*/


                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                




