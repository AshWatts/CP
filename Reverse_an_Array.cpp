#include <iostream>
using namespace std;

// void reverseArray(int arr[], int n) 
// {
//   int i, temp;
//   for (i = 0; i < n / 2; i++) {
//     temp = arr[i];
//     arr[i] = arr[n - i - 1];
//     arr[n - i - 1] = temp;
//   }
// }

void reverseArray(int i, int arr[], int n)
{
  while(i<n/2)
  {
    arr[i],arr[n-i-1]=arr[n-i-1],arr[i];
    reverseArray(i+1,arr,n);
  }
  return;
}

int main() 
{
  int n;
  cout<<"Enter Number of Elements : ";
  cin >> n;

  int arr[n];
  cout<<"Enter Elements : ";
  for (int i = 0; i < n; i++) 
  {
    cin >> arr[i];
  }

  reverseArray(0,arr,n);

  for (int i = 0; i < n; i++) 
  {
    cout << arr[i] << " ";
  }

  cout << endl;
  
  return 0;
}
