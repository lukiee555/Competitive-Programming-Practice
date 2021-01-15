//Solution-1 Sort the array and compare changes to find out length O(nlogn)
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> sortedNums = nums;
        int n = nums.size();        
        sort(sortedNums.begin(), sortedNums.end());
        
        int start = n, end = 0;
        
        for(int i = 0; i < n; i++){
            if(sortedNums[i] != nums[i]){
                start = min(start,i);
                end = max(end, i);
            }
        }
        
        return end-start > 0 ? end - start + 1 : 0;
    }
    
};

//Solution-2 
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int minOutOfOrder = INT_MAX;
        int maxOutOfOrder = INT_MIN;
        int length = nums.size();
        for(int i = 0; i < length - 1; i++){
            if(nums[i] > nums[i+1]){
                minOutOfOrder = min(minOutOfOrder, nums[i+1]);
            }
        }
        for(int i = length - 1; i >0; i--){
            if(nums[i] < nums[i-1]){
                maxOutOfOrder = max(maxOutOfOrder,nums[i-1]);
            }
        }
        int leftIdx = 0, rightIdx = 0;
        for(int i = 0; i < length-1; i++){
            if(nums[i] > minOutOfOrder){
                leftIdx = i;
                break;
            }
        }
        for(int i = length - 1; i >= 0; i--){
            if(nums[i] < maxOutOfOrder){
                rightIdx = i;
                break;
            }
        }
        return rightIdx-leftIdx > 0 ? rightIdx - leftIdx + 1: 0; 
    }
    
};