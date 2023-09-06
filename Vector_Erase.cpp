#include<bits/stdc++.h>
using namespace std;

int main() 
{  
    long n;
    cin>>n;
    vector <long> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int x;
    cin>>x;
    v.erase(v.begin()+x-1);
    int y,z;
    cin>>y;
    cin>>z;
    v.erase(v.begin()+y-1,v.begin()+z-1);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
