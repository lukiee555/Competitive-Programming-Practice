class Solution {
public:
    int climbStairs(int A) {
    int a = 1;
    int b = 2;
    if( A == 1)
        return a;
    if( A == 2)
        return b;
    int ans = 0;
    for(int i = 3; i <= A; i++){
        ans = a + b;
        a = b;
        b = ans;
    }
    return ans;
    }
};