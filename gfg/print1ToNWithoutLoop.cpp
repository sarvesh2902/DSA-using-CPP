// https://practice.geeksforgeeks.org/problems/print-1-to-n-without-using-loops-1587115620/

class Solution
{
public:
  void print(int n, int N)
  {
    if (n == N + 1)
    {
      return;
    }
    cout << n << " ";
    print(n + 1, N);
  }

  // Complete this function
  void printNos(int N)
  {
    int n = 1;
    print(1, N);
  }
};