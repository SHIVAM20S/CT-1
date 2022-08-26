// NAME - SHIVAM SHARMA
// ROLLno - 2010992093
// SET - 05
// QUESTION 2

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    try
    {
        int s;
        cin >> s; // number of elements in array
        vector<int> v(s);
        vector<vector<int>> ans;
        for (int i = 0; i < s; i++)          // adding elements in an array
            cin >> v[i]; 
        for (int i = 0; i < s; i++)
        {
            vector<int> temp;
            int sum = 0;
            for (int j = i; j < s; j++)                 // check if sum is 0 or not
            { 
                sum += v[j];
                temp.push_back(v[j]);
                if (sum == 0)
                    ans.push_back(temp);
            }
        }
        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    }
    catch (...)
    {
        cout << "subarrays with zero sum are : ";
        cout << "Error\n";                        // output
    }
    return 0;
}
