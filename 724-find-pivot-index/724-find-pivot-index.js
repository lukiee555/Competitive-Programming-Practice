/**
 * @param {number[]} nums
 * @return {number}
 */
var pivotIndex = function(nums) {
    var totalSum = 0, left = 0, right = 0;
    for(let i = 0; i < nums.length; i++)
        totalSum += nums[i];
    for(let i = 0; i < nums.length; i++){
        right = totalSum - nums[i] - left;
        if(left == right){
            return i;
        }
        left += nums[i];
    }
    return -1;
};