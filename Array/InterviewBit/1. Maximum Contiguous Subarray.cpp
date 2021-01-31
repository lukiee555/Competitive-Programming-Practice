#include<vector>
#include<climits>
#include<iostream>
class Solution1 {
  public:
    int maxContiguousSubarraySum(vector<int>& nums) {
      int n = nums.size();
      int maximumSubArraySum = INT_MIN;
      for (int left = 0; left < n; left++) {
        for (int right = left; right < n; right++) {
          int windowSum = 0;
          for (int k = left; k <= right; k++) {
            windowSum += nums[k];
          }
          maximumSubArraySum = max(maximumSubArraySum, windowSum);
        }
      }
      return maximumSubArraySum;
    }
};

class Solution2 {
  public:
    int maxContiguousSubarraySum(vector<int>& nums) {
      int n = nums.size();
      int maximumSubArraySum = INT_MIN;
      for (int left = 0; left < n; left++) {
        int runningWindowSum = 0;
        for (int right = left; right < n; right++) {
          runningWindowSum += nums[right];
          maximumSubArraySum = max(maximumSubArraySum, runningWindowSum);
        }
      }
      return maximumSubArraySum;
    }
};


class Solution3 {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum = 0, maximumSum = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            currentSum = currentSum + nums[i];
            maximumSum = max(currentSum, maximumSum);
            if(currentSum < 0)
                currentSum = 0;
        }
        return maximumSum;
    }
};