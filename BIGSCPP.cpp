#include<iostream>
using namespace std;

int max(int a,int b)
{
	int big=(a>b)?a:b;
	return big;

}
int max(int a[],int n)
{
	int big=a[0];
	for(int i=1;i<n;i++)
	{
	    big=(a[i]>big)?a[i]:big;
	}
	return big;
}
int max(int a[10][10],int n,int m)
{
	int big;

	big=a[0][0];
	for(int i=1;i<n;i++)
	{
		for(int j=1;j<m;j++)
		{
			big=(a[i][j]>big)?a[i][j]:big;
		}
	}
	return big;

}
int main()
{
	int a[10],b[10][10],r,c,n,p,q,i,j;
	
	cout<<"Enet 2 integers\n";
	cin>>p>>q;
	cout<<"\nBiggest of two integers is:"<<max(p,q);
	cout<<"\nEnter the array limit\n";
	cin>>n;
	cout<<"\nEnter elemnts\n";
	for(int i=0;i<n;i++)
	    cin>>a[i];
	cout<<"\nBiggest of array elements is:"<<max(a,n);
	cout<<"\nEnter the order of matrix\n";
	cin>>r>>c;
	cout<<"\nEnter the elements\n";
	for(i=0;i<r;i++)
	  for(int j=0;j<c;j++)
	    cin>>b[i][j];
	cout<<"Matrix is:\n";
	for(i=0;i<r;i++)
	{
	  for(j=0;j<c;j++)
	  {
	    cout<<b[i][j]<<"\t";
	  }
	  cout<<endl;
	}
	cout<<"Biggest of matrix is:"<<max(b,r,c);
	
}

/*out put:
Enet 2 integers
10
20

Biggest of two integers is:20
Enter the array limit
5

Enter elemnts
50
70
40
80
10

Biggest of array elements is:80
Enter the order of matrix
3
3

Enter the elements
1
3
4
5
6
7
4
5
6
Matrix is:
1       3       4
5       6       7
4       5       6
Biggest of matrix is:7        */







                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
