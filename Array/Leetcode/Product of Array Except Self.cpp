//Solution - 1 Brute Force O(n^2)
//SOlution - 2 O(n) but with division First Calculate product of each and den divide by index elemnt
//Solution - 3 Create two array for two for loop left_product and right_product O(n) Space = O(n)
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> left_product(n,0);
        vector<int> right_product(n,0);
        vector<int> output(n,0);
        
        left_product[0] = 1;
        right_product[n-1] = 1;
        
        for(int i = 1; i < n; i++)
            left_product[i] = left_product[i-1]*nums[i-1];
        
        for(int i = n-2; i >= 0; i--)
            right_product[i] = right_product[i+1]*nums[i+1];
        
        for(int i = 0; i < n; i++)
            output[i] = left_product[i]*right_product[i];
        
        return output;
        
    }
};

//Solution-4 we can reduce the space complexity by calculating left and right product at the same time 
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output(n,0);
        output[0] = 1;
        
        for(int i = 1; i < n; i++)
            output[i] = output[i-1]*nums[i-1];
        int r = 1;
        
        for(int i = n-1; i >= 0; i--){
            output[i] = output[i]*r;
            r = r*nums[i];
        } 
        return output;
        
    }
};