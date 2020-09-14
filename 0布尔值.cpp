#include <iostream>
using namespace std;

int main()
{
	int x;
	cout<<"请输入一个值："<<endl;
	cin>>x; 
	cout<<oct<<x<<endl;    //八进制 
	cout<<dec<<x<<endl;    //十进制 
	cout<<hex<<x<<endl;    //十六进制 
	
	cout<<"请输入一个值（1,0）："<<endl;
	bool y;
	cin>>y;
	cout<<boolalpha<<y<<endl;   //以布尔形式输出 
 }  
