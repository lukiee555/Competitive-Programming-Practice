///Problem Link :-- https://leetcode.com/problems/x-of-a-kind-in-a-deck-of-cards/
#include <unordered_map>
#include <vector>
class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
     unordered_map<int, int> mp;
      int ans;
      for (auto x : deck)
         mp[x]++;
      for (auto x : mp)
         ans = __gcd(ans, x.second);
      return (ans > 1);
    }
};