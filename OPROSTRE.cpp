//operator overloading
#include<iostream>
#include<stdlib.h>
using namespace std;


class matrix
{
	int a[10][10],n,m;
	public:
		matrix operator+(matrix);
		matrix operator-(matrix);
		matrix operator*(matrix);
		friend ostream & operator<<(ostream &,matrix &);
		friend istream & operator>>(istream &,matrix &);
};
istream & operator>>(istream &in,matrix &M)
{
	cout<<"Enter the order of matrix\n";
	in>>M.m>>M.n;
	cout<<"Enter the elemets of matrix\n";
	for(int i=0;i<M.n;i++)
	{
		for(int j=0;j<M.m;j++)
		{
			in>>M.a[i][j];
		}
	}
	return in;
}
ostream & operator<<(ostream &out,matrix &M)
{
	for(int i=0;i<M.n;i++)
	{
		for(int j=0;j<M.m;j++)
		{
			out<<M.a[i][j]<<"\t";
		}
		out<<endl;
	}
	return out;
}
matrix matrix::operator+(matrix M)
{
	if(M.m!=m||M.n!=n)
	{
		cout<<"Enter the correct digonals\n";
		exit(0);
	}
	matrix A;
	A.n=n;
	A.m=m;
	cout<<"Addition of matrix is:\n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
		      A.a[i][j]=a[i][j]+M.a[i][j];
		}
	}
	return A;
}
matrix matrix::operator-(matrix M)
{
	if(M.m!=m||M.n!=n)
	{
		cout<<"Enter the correct digonals\n";
		exit(0);
	}
	matrix s;
	s.m=m;
	s.n=n;
	cout<<"substraction of matrix is:\n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
		      s.a[i][j]=a[i][j]-M.a[i][j];
		}
	}
	return s;
}
matrix matrix::operator*(matrix M)
{

	if(n!=M.m||M.n!=m)
	{
		cout<<"Enter the correct diagonal\n";
		exit(0);
	}
	int i,j,k;
	matrix c;
	c.n=n;
	c.m=M.m;
	for(i=0;i<n;i++)
	{
		for(j=0;j<M.m;j++)
		{
			c.a[i][j]=0;
			for(int k=0;k<n;k++)
			{
				c.a[i][j]+=(a[i][k]*M.a[k][j]);
			}
		}
	}
	return c;
}
int main()
{
	
	cout<<"Enter the 1st matrix\n";
	matrix M1,M2;
	cin>>M1;
	cout<<"1st matrix is:\n";
	cout<<M1;
	cout<<"Enter the 2nd matrix\n";
	cin>>M2;
	cout<<"2nd Matrix is:\n";
	cout<<M2;
	cout<<"Addition of matrix\n";
	matrix M3=M1+M2;
	cout<<M3;
	cout<<"Substraction of matrix:\n";
	matrix M4=M1-M2;
	cout<<M4;
	cout<<"Multiplication of matrix\n";
	matrix M5=M1*M2;
	cout<<M5;
	return 0;
}
/*OUT PUT:
Enter the 1st matrix
Enter the order of matrix
2
2
Enter the elemets of matrix
1
2
3
4
1st matrix is:
1       2
3       4
Enter the 2nd matrix
Enter the order of matrix
2
2
Enter the elemets of matrix
1
2
3
4
2nd Matrix is:
1       2
3       4
Addition of matrix
Addition of matrix is:
2       4
6       8
Substraction of matrix:
substraction of matrix is:
0       0
0       0
Multiplication of matrix
7       10
15      22   */

















