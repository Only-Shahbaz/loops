#include<iostream>
using namespace std;

int getMax(int arr[], int size)
{
	int max = 0;
	for (int i = 0; i < size; i++)
	{
		if(arr[i]>max)
		{
			max = arr[i];
		}
	}
	
	return max;
}
int main()
{
	int n = 5;
	
	int arr[n];
	
	for (int i=0; i<=n; i++)
	{
		cin>>arr[i];
	}
	
	cout<< getMax(arr, n);
	
 return 0;
}

