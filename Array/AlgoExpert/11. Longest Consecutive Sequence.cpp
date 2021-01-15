/*
https://leetcode.com/problems/longest-consecutive-sequence/

Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

Follow up: Could you implement the O(n) solution? 

 

Example 1:

Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.
Example 2:

Input: nums = [0,3,7,2,5,8,4,6,0,1]
Output: 9
*/

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longestLength = 0;
        int currentLength,left,right;
        map<int, bool> nums_map;
        for(int i = 0; i < nums.size(); i++){
            nums_map[nums[i]] = true;
        }
        for(int i = 0; i < nums.size(); i++){
            if(nums_map[nums[i]] == true){
                nums_map[nums[i]] = false;
                currentLength = 1;
                left = nums[i] - 1;
                right = nums[i] + 1;
                while(nums_map.find(left) != nums_map.end()){
                    nums_map[left] = false;
                    currentLength++;
                    left--;
                }
                while(nums_map.find(right) != nums_map.end()){
                    nums_map[right] = false;
                    currentLength++;
                    right++;
                }
                if(currentLength > longestLength)
                    longestLength = currentLength;
            }
        }
        return longestLength;
    }
};