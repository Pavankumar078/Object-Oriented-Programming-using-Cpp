/*Cpp prg to define class complex with appropriate constructor
and overload arithmatic operators*/
#include<iostream>

using namespace std;

class complex
{
	float rl,im;
	public:
		complex()
		{
			cout<<"Enter the complex number\n";
			cin>>rl>>im;
		}
		void operator+(complex);
		void operator-(complex);
		void operator*(complex);
		void operator/(complex);
};
void complex::operator+(complex c)
{
	cout<<(rl+c.rl)<<"+i("<<(im+c.im)<<")\n";
}
void complex::operator-(complex c)
{
	cout<<(rl-c.rl)<<"+i("<<(im-c.im)<<")\n";
}
void complex::operator*(complex c)
{
	cout<<((rl*c.rl)-(im*c.im))<<"+i("<<((c.rl*c.im)+(im*c.rl))<<")\n";

}
void complex::operator/(complex c)
{
	cout<<(rl/c.rl)<<"+i("<<(im/c.im)<<")\n";
}
int main()
{
	
	complex c1,c2;
	cout<<"\nAddition of comlex numbers is:\n";
	c1+c2;
	cout<<"\nSubsstraction of complex numbers is:\n";
	c1-c2;
	cout<<"\nMultiplication of complex numbers is:\n";
	c1*c2;
	cout<<"\nDivision of complex number is:\n";
	c1/c2;
	return 0;
}
/*OUT PUT:
Enter the complex number
1.1
2.2
Enter the complex number
3.3
4.4

Addition of comlex numbers is:
4.4+i(6.6)

Subsstraction of complex numbers is:                                            
-2.2+i(-2.2)                                                                    
                                                                                
Multiplication of complex numbers is:                                           
-6.05+i(21.780001)                                                              
                                                                                
Division of complex number is:                                                  
0.333333+i(0.5)                                                                 
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/




                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                




