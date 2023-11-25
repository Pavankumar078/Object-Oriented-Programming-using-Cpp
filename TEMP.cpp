//Cpp program to sort any type of data using the concept of templates
#include<iostream>
using namespace std;

template<class T>
class sort
{
	T a[10];
	int n;
	public:
		void read()
		{
			cout<<"Enter the limit of array\n";
			cin>>n;
			cout<<"Enter the array elements\n";
			for(int i=0;i<n;i++)
			cin>>a[i];
		}
		void asc()
		{
			T t=0;
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
				    if(a[i]<a[j])
				    {
					t=a[j];
					a[j]=a[i];
					a[i]=t;
				    }
				}
			}
			cout<<"Sorted array\n";
			for(int i=0;i<n;i++)
			 cout<<a[i]<<endl;
		}
};

int main()
{

	
	sort<int>s;
	s.read();
	s.asc();
	sort<float>s1;
	s1.read();
	s1.asc();
	return 0;
}
/*out put:
Enter the limit of array
4
Enter the array elements
90
70
50
10
Sorted array
10
50
70
90
Enter the limit of array
4
Enter the array elements
0.1
1.2
3.4
5.4
Sorted array
0.1
1.2
3.4
5.4
*/














                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
