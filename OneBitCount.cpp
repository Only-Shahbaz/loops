#include<iostream>
using namespace std;

int main()
{
	int n, count=0;
	cout<<"Enter your number: ";
	cin>>n;
	
	// checking how many bits are one / 1
	while (n!=0)
	{
		if(n&1)
		{
			count++;
		}
		n = n>>1;
	}
	cout<<count;

 return 0;
}
