#include<iostream>

using namespace std;

char a='A';
static int b=89;

int main()
{
	int b=23;
	char a='Z';

	cout << "Local variable b = "<< b << endl;
	cout << "Global variable b = "<< ::b << endl;//:: use to access the global variable
	cout << "Local variable a = "<< a << endl;
	cout << "Global variable a = "<< ::a << endl;

	return 0;
}
