// https://leetcode.com/problems/number-of-islands/

class Solution
{
public:
  void makeTwo(vector<vector<char>> &grid, int i, int j)
  {
    int row = grid.size();
    int col = grid[0].size();

    if (i < 0 || i >= row || j < 0 || j >= col || grid[i][j] != '1')
    {
      return;
    }

    grid[i][j] = 2;

    makeTwo(grid, i - 1, j);
    makeTwo(grid, i, j - 1);
    makeTwo(grid, i + 1, j);
    makeTwo(grid, i, j + 1);
  }

  int numIslands(vector<vector<char>> &grid)
  {
    int row = grid.size();
    int col = grid[0].size();

    int ans = 0;

    for (int i = 0; i < row; i++)
    {
      for (int j = 0; j < col; j++)
      {
        if (grid[i][j] == '1')
        {
          ans++;
          makeTwo(grid, i, j);
        }
      }
    }

    return ans;
  }
};