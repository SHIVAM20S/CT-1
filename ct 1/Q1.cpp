// NAME - SHIVAM SHARMA
// ROLLno - 2010992093
// SET - 05
// QUESTION 1

#include <iostream>
using namespace std;
#include <bits/stdc++.h>
using namespace std;

int main()
{
  try
  {
    int s, x;
    cin >> s >> x; // taking input
    vector<int> v(s);
    for (int i = 0; i < s; i++)
      cin >> v[i];
    vector<int> ans;
    for (int i = 0; i < s; i++)
    {
      int sum = 0;
      vector<int> temp;
      for (int j = i; j < s; j++)
      {
        sum += v[j];
        temp.push_back(v[j]);
        if (sum == x && ans.size() < temp.size())
        {
          ans = temp;
        }
      }
    }
    for (int i = 0; i < ans.size(); i++)
    {
      cout << ans[i] << " ";
    }
  }
  catch (...)
  {
    cout << "Error\n"; // output
  }
  return 0;
}
