//Hell Fast Fib solution
class Solution {
public:
    int fib(int n) {
        int last = 1, secondLast = 0;
        int ans;
        if(n == 0)
            return secondLast;
        if(n == 1)
            return last;
        for(int i = 2; i <= n; i++){
            ans = last + secondLast;
            secondLast = last;
            last = ans; 
        }
        return ans;
    }
};