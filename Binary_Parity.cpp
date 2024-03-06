#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector <int> z;
        int i = 0;
        while (n > 0) 
        {
            int a;
            a = n % 2;
            n = n / 2;
            z.push_back(a);
            i++;
        }
        

        int count=0;
        
        for(int j=0;j<z.size();j++)
        {
            count+=z[j];
        }
        
        if(count%2==0)
        {
            cout<<"EVEN"<<endl;
        }
        else
        {
            cout<<"ODD"<<endl;
        }
    }
}
