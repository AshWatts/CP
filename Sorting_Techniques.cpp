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

    // RECURSIVE BUBBLE SORT

    // void bubbleSort(int arr[], int n) {
    //     if(n==1){
    //         return;
    //     }
    //     for(int i=0;i<n-1;i++){
    //         if(arr[i]>arr[i+1]){
    //             int temp = arr[i];
    //             arr[i] = arr[i+1];
    //             arr[i+1] = temp;
    //         }
    //     }
    //     bubbleSort(arr,n-1);
    // }

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
                else
                {
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

    // RECURSIVE INSERTION SORT

    // void insert(int arr[], int i, int n)
    // {
    //     if(i==n || i==0){
    //         return;
    //     }
    //     int j=i;
    //     while(j>0 && arr[j]<arr[j-1]){
    //         int temp = arr[j];
    //         arr[j] = arr[j-1];
    //         arr[j-1] = temp;
    //         j--;
    //     }
    //     insert(arr,i+1,n);
    // }
    
    // void insertionSort(int arr[], int n)
    // {
    //     insert(arr,1,n);
    // }

    // MERGE SORT

    void merge(int arr[], int low, int mid, int high)
    {
        vector<int> temp;
        int left = low;
        int right = mid+1;
        while(left<=mid && right<=high){
            if(arr[left]<=arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            else{
                temp.push_back(arr[right]);
                right++;
            }
        }
        while(left<=mid){
            temp.push_back(arr[left]);
            left++;
        }
        while(right<=high){
            temp.push_back(arr[right]);
            right++;
        }
        for(int i=low;i<=high;i++){
            arr[i]=temp[i-low];
        }
    }

    void mergeSort(int arr[], int low, int high)
    {
        if(low==high){
            return;
        }
        int mid = (low+high)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }



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

int main(){
    int arr[] = {5,4,1,3,2};
    int n = 5;
    Solution obj;
    // obj.selectionSort(arr,n);
    // obj.bubbleSort(arr,n);
    obj.insertionSort(arr,n);
    // obj.mergeSort(arr,0,n-1);
    // obj.quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}