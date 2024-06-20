// Code to find number of occurences of an element(from 0 to 9) in an array using hashing

#include<bits/stdc++.h>
using namespace std;

// int Hash[10];        Here all elements are initialized to 0

int main(){
    int n ;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int Hash[10] = {0};
    for(int i=0;i<n;i++){
        Hash[arr[i]]++;
    }

    int x;
    cout<<"Enter the number of elements to be searched for: ";
    cin>>x;
    while(x--){
        int z;
        cin>>z;
        cout<<Hash[z]<<endl;
    }
}