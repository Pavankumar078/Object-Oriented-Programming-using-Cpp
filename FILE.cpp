/*Cpp program to cpoy the content of one file to another by passing
the names of the file as command line argument*/
#include<iostream>
#include<fstream>
using namespace std;
int main(int c,char *arg[])
{
	ofstream f1; char s[100],s1[100];
	f1.open(arg[1]);
	cout<<"Enter a text of line\n";
	cin>>s;
	f1<<s;
	f1.close();
	ifstream f3;ofstream f2;
	f3.open(arg[1]);
	f2.open(arg[2]);
	f3>>s1;
	f2<<s1;
	cout<<"Content of "<<arg[2]<<" files are\n";
	cout<<s1<<endl;
	f1.close();
	f2.close();
	return 0;
}
/*OUT PUT:
C:\Documents and Settings\Kumar>cd\
C:\>file TXT1 TXT2
Enter a text of line
OBJECTORIENTED
Content of TXT2 files are
OBJECTORIENTED*/


