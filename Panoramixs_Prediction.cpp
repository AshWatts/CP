#include <bits/stdc++.h>

using namespace std;
int checkprime(int N)
{
    for(int i= 2 ;i<=sqrt(N) ;i++)
    {
        if(N%i==0)
        {
            return 0; 
        }
    }
    return N;
}

int main()
{
    int M ,N;
    cin>>M>>N;
    int idx1= -1;
    int idx2 = -1;
    vector<int>v;

for(int i =2 ;i<50 ;i++)
{
    if(checkprime(i))
    {
        v.push_back(i);
    }
}

for(int i = 0 ;i<v.size() ;i++)
{
    if(v[i]==M)
    {
        idx1=i;
    }
}

for(int i = 0 ;i<v.size() ;i++)
{
    if(v[i]==N)
    {
        idx2=i;
    }
}

if((idx2-idx1)==1)
{
    cout<<"YES\n";
    cout<<"redidubveruib";
}

else
{
    cout<<"NO\n";
}

    return 0; 
} 