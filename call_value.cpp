#include<iostream>

using namespace std;
void call_value(int b);
int main()
{
	int a;
	cout <<"Please enter a number ";
	cin >> a;

	call_value(a);
	cout << "after callby value function in main "<< a <<endl;
	return 0;
}

void call_value(int b)
{
	b++;
	cout <<"value after increment in function "<< b <<endl;
	
}

