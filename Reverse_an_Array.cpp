#include <iostream>
using namespace std;

void reverseArray(int arr[], int n) 
{
  int i, temp;
  for (i = 0; i < n / 2; i++) {
    temp = arr[i];
    arr[i] = arr[n - i - 1];
    arr[n - i - 1] = temp;
  }
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

  reverseArray(arr, n);

  for (int i = 0; i < n; i++) 
  {
    cout << arr[i] << " ";
  }

  cout << endl <<endl;

  return 0;
}
