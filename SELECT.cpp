/*selection sort*/
#include<iostream>
using namespace std;

void sort(int a[],int);
void swap(int &,int &);
int main()
{

	int i,n,a[100];
	
	cout<<"Enter the limit of array\n";
	cin>>n;
	cout<<"Enter the array elements\n";
	for(i=0;i<n;i++)
	   cin>>a[i];
	sort(a,n);
	return 0;
}
void sort(int a[],int n)
{
	int i,j,pos;
	for(i=0;i<n-1;i++)
	{
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[pos])
			  pos=j;
		}
		swap(a[pos],a[i]);
		//sort(a,b);
	}
	cout<<"Sorted array is:\n";
	for(i=0;i<n;i++)
	  cout<<a[i]<<"\t";
}
void swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}


