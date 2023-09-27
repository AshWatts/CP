#include <iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int a[n][3];

   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         cin >> a[i][j];
      }
   }

   int s1=0;
   int s2=0;
   int s3=0;

   for (int i = 0; i < n; i++)
   {
    for (int j=0;j<3;j++)
    {
        if(j==0)
        {
            s1=s1+a[i][j];
        }
        else if(j==1)
        {
            s2=s2+a[i][j];
        }
        else
        {
            s3=s3+a[i][j];
        }
    }
   }

   if(s1==0)
   {
    if(s2==0)
    {
        if(s3==0)
        {
            cout<<"YES";
        }
    }
   }
   else
   {
    cout<<"NO";
   }

   return 0;
}
