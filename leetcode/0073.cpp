// https://leetcode.com/problems/set-matrix-zeroes/

class Solution
{
public:
  void setZeroes(vector<vector<int>> &matrix)
  {
    int row = matrix.size();
    int col = matrix[0].size();

    vector<int> rows;
    vector<int> cols;

    for (int i = 0; i < row; i++)
    {
      for (int j = 0; j < col; j++)
      {
        if (matrix[i][j] == 0)
        {
          rows.push_back(i);
          cols.push_back(j);
        }
      }
    }

    for (int i = 0; i < rows.size(); i++)
    {
      for (int j = 0; j < col; j++)
      {
        matrix[rows[i]][j] = 0;
      }
    }

    for (int i = 0; i < cols.size(); i++)
    {
      for (int j = 0; j < row; j++)
      {
        matrix[j][cols[i]] = 0;
      }
    }
  }
};