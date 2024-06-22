#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void selectionSort(int arr[], int n){
       for(int i=0;i<n-1;i++){
           int min = i;
           for(int j=i+1;j<n;j++){
               if(arr[j]<arr[min]){
                   min = j;;
               }
           }
           swap(arr[min],arr[i]);
       }
    }

    void bubbleSort(int arr[], int n) {
        for(int i=n-1;i>0;i--){
            for(int j=0;j<i;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }
        }
    }

    void insertionSort(int arr[], int n)
    {
        for(int i=0;i<n;i++){
            for(int j=i;j>0;j--){
                if(arr[j]<arr[j-1]){
                    int temp = arr[j];
                    arr[j] = arr[j-1];
                    arr[j-1] = temp;
                }
                else{
                    break;
                }
            }
        }
    }

    // void insertionSort(int arr[], int n)
    // {
    //     for(int i=0;i<n;i++){
    //         int j = i;
    //         while(j>0 && arr[j] < arr[j-1]){
    //             int temp = arr[j];
    //             arr[j] = arr[j-1];
    //             arr[j-1] = temp;
    //             j--;
    //         }
    //     }
    // }
};

