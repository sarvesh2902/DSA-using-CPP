// https://leetcode.com/problems/valid-anagram/

class Solution
{
public:
  bool isAnagram(string s, string t)
  {
    if (s.length() != t.length())
    {
      return false;
    }

    vector<int> freq(26, 0);
    int length = s.length();

    for (int i = 0; i < length; i++)
    {
      freq[s[i] - 'a']++;
      freq[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
      if (freq[i] != 0)
      {
        return false;
      }
    }
    return true;
  }
};