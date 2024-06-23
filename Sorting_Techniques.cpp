#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:

    // SELECTION SORT
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

    // BUBBLE SORT

    void bubbleSort(int arr[], int n) {
        for(int i=n-1;i>0;i--){
            for(int j=0;j<i;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }
        }
    }

    // INSERTION SORT

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

    // MERGE SORT

    

    // QUICK SORT

    int partition (int arr[], int low, int high){
       int pivot = arr[low];
       int i=low;
       int j=high;
       
       while(i<j){
           while(arr[i]<=pivot && i<=high-1){
               i++;
           }
           
           while(arr[j]>pivot && j>=low+1){
               j--;
           }
           
           if(i<j){
               swap(arr[i],arr[j]);
           }
       }
       swap(arr[low],arr[j]);
       return j;
    }

    void quickSort(int arr[], int low, int high){
        if(low<high){
            int part = partition(arr,low,high);
            quickSort(arr,low,part-1);
            quickSort(arr,part+1,high);
        }
        return;
    }
};

