// Problem Link = https://leetcode.com/problems/shortest-unsorted-continuous-subarray/
//Solution - 1 
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> res = nums;
        sort(res.begin(), res.end());
        int start = nums.size(), end = 0;
        for(int i = 0; i < nums.size(); i++){
            if(res[i] != nums[i]){
                start = min(start, i);
                end = max(end, i);
            }
        }
     return (end - start >= 0 ? end - start + 1 : 0 );
    }
};
// Solution - 2 Without Using Extra Space
public class Solution {
    public int findUnsortedSubarray(int[] nums) {
        int min = Integer.MAX_VALUE, max = Integer.MIN_VALUE;
        boolean flag = false;
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] < nums[i - 1])
                flag = true;
            if (flag)
                min = Math.min(min, nums[i]);
        }
        flag = false;
        for (int i = nums.length - 2; i >= 0; i--) {
            if (nums[i] > nums[i + 1])
                flag = true;
            if (flag)
                max = Math.max(max, nums[i]);
        }
        int l, r;
        for (l = 0; l < nums.length; l++) {
            if (min < nums[l])
                break;
        }
        for (r = nums.length - 1; r >= 0; r--) {
            if (max > nums[r])
                break;
        }
        return r - l < 0 ? 0 : r - l + 1;
    }
}