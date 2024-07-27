#include<iostream>

using namespace std;

int main()
{
	int n, ans=1;
	cout<<"Enter your number to check: ";
	cin>>n;
	
	for (int i = 0; i<31; i++)
	{
		ans = ans * 2;
		
		if (ans == n)
		{
			cout<<ans<<" ";
			break;
		}	
	
	}
	
 return 0;
}

