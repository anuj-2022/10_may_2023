#include<iostream>

using namespace std;
void call_ref(int& p);

int main()
{
	int d;

	cout <<"Please enter a number";

	cin >> d;

	call_ref(d);
	cout <<"value after call by ref in main "<< d <<endl;
	return 0;
}

void call_ref(int& p)
{
	p++;
	cout <<"value inside the function "<< p <<endl;
}
	
