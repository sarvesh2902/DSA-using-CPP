// https://leetcode.com/problems/plus-one/

class Solution
{
public:
  vector<int> plusOne(vector<int> &digits)
  {
    int n = digits.size();
    for (int i = n - 1; i >= 0; i--)
    {
      if (i == n - 1)
      {
        digits[i]++;
      }
      if (digits[i] > 9)
      {
        digits[i] = 0;
        if (i - 1 >= 0)
        {
          digits[i - 1] += 1;
        }
        else
        {
          digits.push_back(0);
          digits[0] = 1;
        }
      }
    }

    return digits;
  }
};