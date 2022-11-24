#include<iostream>
using namespace std;

int num_swap(int *a, int *b)
{
	int temp;
	temp = *b;
	*b = *a;
	*a = temp;
	return *b,*a;
}

int main()
{
	int x,y;
	cout<<"Enter two numbers to be swapped\n";
	cin>>x>>y;
	num_swap(&x,&y);
	cout<<"Numbers after swapping are:\n";
	cout<<x<<"\n"<<y;
	cout<<"\n";
	return 0;
}
