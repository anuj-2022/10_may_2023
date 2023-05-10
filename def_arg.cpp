#include<iostream>
using namespace std;

int sum(int a,int b,float c=0,float d=0)
{
	return (a+b+c+d);
}
int main()
{
	cout <<"two number addition = " << sum(10,15)<<endl;
	cout <<"three number addition = " << sum(10,15,25)<<endl;
	cout <<"four number addition = " << sum(10,15,25,30)<<endl;
	return 0;
}
