// https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1

class Solution
{
  // Function to find the leaders in the array.
public:
  vector<int> leaders(int a[], int n)
  {
    vector<int> ans;
    ans.push_back(a[n - 1]);

    for (int i = n - 2; i >= 0; i--)
    {
      if (a[i] >= ans.back())
      {
        ans.push_back(a[i]);
      }
    }

    reverse(ans.begin(), ans.end());

    return ans;
  }
};