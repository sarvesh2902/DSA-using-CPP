// https://practice.geeksforgeeks.org/problems/largest-odd-number-in-string/1

class Solution
{
public:
  string maxOdd(string num)
  {
    int i;
    for (i = num.length() - 1; i >= 0; i--)
    {
      int digit = (int)num[i];
      if (digit % 2 == 1)
      {
        break;
      }
    }

    if (i < 0)
    {
      return "";
    }
    return num.substr(0, i + 1);
  }
};