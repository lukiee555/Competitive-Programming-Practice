class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int currentIdx = 0;
        int firstZeroIdx = -1 ;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                firstZeroIdx = i;
                currentIdx = i;
                break;
            }
        }
        if(firstZeroIdx == -1){
            return;
        }
        currentIdx++;
        while(currentIdx < nums.size()){
            if(nums[currentIdx] != 0){
                swap(nums[currentIdx], nums[firstZeroIdx]);
                firstZeroIdx++;
                currentIdx++;
            }else{
                currentIdx++;
            }
        }
    }
    
};