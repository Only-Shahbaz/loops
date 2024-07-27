#include<iostream>
using namespace std;

int main()
{
	int n;
	bool count=0;
	cout<<"Enter your number : ";
	
	cin>>n;
	
	for (int i =2; i<n; i++)
	{
		if(n%i==0)
		{
			count=1;
		}
	
	}
	if (count==0)
	{
		cout<<n<<" is a prime number";
	}
	else 
	{
		cout<<n<<" is a not a prime number"<<endl;
	}
 return 0;
}

