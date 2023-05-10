#include<iostream>

using namespace std;

int main()
{
	int i;
	int* pt=new int;//allocatin memory for int
	*pt=7;
	float* pt1=new float(25.66);//allocating memory for float
	int* pt3=new int[15];//allocating memory for int array

	cout << "value of int = " << *pt <<endl;
	cout << "value of float = " << *pt1 <<endl;

	for(i=0;i<15;i++)
		pt3[i]=1+i;
	cout << "the value of array is :"<<endl;
	for(i=0;i<15;i++)
		cout<< pt3[i]<< " ";
	cout <<"\n";

	delete pt;//relesing dynamic memory
	delete pt1;//relesing dynamic memory
	delete pt3;//relesing dynamic memory

	return 0;
}
