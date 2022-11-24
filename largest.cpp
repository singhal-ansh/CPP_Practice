#include<iostream>
using namespace std;

int calc_largest(int a, int b, int c)
{
	int largest;
	(a>b)?((a>c)?(largest=a):(largest=c)):((b>c)?(largest=b):(largest=c));
	return largest;
}

int main()
{
	int x,y,z,answer;
	cout<<"Enter three numbers:\n";
	cin>>x>>y>>z;
	answer = calc_largest(x,y,z);
	cout<<"The largest integer is: "<<answer<<"\n";
	return 0;
}

