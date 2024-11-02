#include<iostream>
using namespace std;

bool isCircularSentence(string s){
    int n = s.size();

    for(int i=0;i<n;i++){
        if(s[0] != s[n-1]){
            return false;
        }

        if(s[i] == ' ' && s[i-1] != s[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    
    bool x = isCircularSentence(s);
    if(x==true){
        cout<<"Circular Sentence";
    }
    else{
        cout<<"Not a Circular Sentence";
    }

    return 0;
}