#include<bits/stdc++.h>
using namespace std;


string change(string s)
{
  vector <int> n;
  vector <char> o;

  for(char c : s)
  {
    if(isdigit(c))
    {
      n.push_back(c - '0');
    }
    else if(c!=' ')
    {
      o.push_back(c);
    }
  }

  sort(n.begin(),n.end());

  string ne="";

  for(int i=0;i<n.size();i++)
  {
    ne+=to_string(n[i]);
    if(i<o.size())
    {
      ne+=o[i];
    }
  }

  return ne;

}


int main()
{
  string exp;
  cin>>exp;

  string result = change(exp);

  cout<<result;
}