#include <bits/stdc++.h>
using namespace std;

string helpful_maths(string s) 
{
  vector<int> numbers;
  vector<char> operators;

  for (char c : s) {
    if (isdigit(c)) {
      numbers.push_back(c - '0'); // convert char to int
    } else if (c != ' ') {
      operators.push_back(c);
    }
  }

  sort(numbers.begin(), numbers.end()); // sort numbers in non-decreasing order

  string new_sum;
  for (int i = 0; i < numbers.size(); ++i) {
    new_sum += to_string(numbers[i]);
    if (i < operators.size()) {
      new_sum += operators[i];
    }
  }

  return new_sum;
}

int main() 
{
  string input_sum;
  cin >> input_sum;

  string result = helpful_maths(input_sum);
  cout << result << endl;

  return 0;
}
