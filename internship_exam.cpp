#include <iostream>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int sum=0;
		int n;
		cin>>n;
		for(int i=1;i<n;i++)
		{
			if(n%i==0)
			{
				sum+=i;
			}
		}
		if(sum==n)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NOPE"<<endl;
		}
	}
}