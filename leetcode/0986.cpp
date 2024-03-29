// https://leetcode.com/problems/interval-list-intersections/

class Solution
{
public:
  vector<vector<int>> intervalIntersection(vector<vector<int>> &firstList, vector<vector<int>> &secondList)
  {
    int i = 0;
    int j = 0;
    vector<vector<int>> ans;

    while (i < firstList.size() && j < secondList.size())
    {
      if (firstList[i][0] < secondList[j][0])
      {
        if (firstList[i][1] >= secondList[j][0])
        {
          ans.push_back({secondList[j][0], min(firstList[i][1], secondList[j][1])});
        }
        if (firstList[i][1] > secondList[j][1])
        {
          j++;
        }
        else
        {
          i++;
        }
      }
      else
      {
        if (secondList[j][1] >= firstList[i][0])
        {
          ans.push_back({firstList[i][0], min(secondList[j][1], firstList[i][1])});
        }
        if (secondList[j][1] > firstList[i][1])
        {
          i++;
        }
        else
        {
          j++;
        }
      }
    }

    return ans;
  }
};