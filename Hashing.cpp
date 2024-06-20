// Code to find number of occurences of an element(between 0 and 10) in an array using hashing

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int hash[10] = {0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    int x;
    cout<<"Enter the number of elements to be searched for: ";
    cin>>x;
    while(x--){
        int z;
        cin>>z;
        cout<<hash[z]<<endl;
    }
}