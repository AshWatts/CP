#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;

    int Hash[26] = {0};
    for(int i=0;i<s.size();i++){
        Hash[s[i]-'a']++;
    }

    int x;
    cout<<"Enter the number of elements to be searched for: ";
    cin>>x;
    while(x--){
        char z;
        cin>>z;
        cout<<Hash[z-'a']<<endl;
    }
}