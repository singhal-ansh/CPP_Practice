#include<iostream>
using namespace std;

int main()
{
	int arr_size, sum=0;
	cout << "Enter size of array: ";
	cin >> arr_size;
	cout << "\n";
	int my_arr[arr_size];
	for(int i:my_arr)
	{
		cin >> my_arr[i];
		sum += my_arr[i];
	}
	cout<<"Sum of all elements of array is: " << sum << "\n"; 
}

