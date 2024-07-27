#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n, ans = 0, i = 0;
	cout<<"Enter decimal number: ";
	cin>>n;
	
	while (n!=0)
	{
		int bit = n & 1; // taking & of the bit
		ans = (bit * pow(10, i)) + ans;
		n = n >> 1;
		i = i + 1;
	}
	 cout<<"The binary is "<<ans;
	
 return 0;
}

