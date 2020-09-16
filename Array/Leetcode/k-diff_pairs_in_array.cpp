// Problem Link = https://leetcode.com/problems/k-diff-pairs-in-an-array/
//Solution-1 
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        set<long long int> my_set;
        long long int count = 0;
        set<long long int>::iterator it;
        map<int, int> my_map;
        map<int, int>::iterator itr; 
        for(auto i : nums) {
            my_set.insert(i);
            my_map[i]++;
        }
        if( k == 0){
            for (itr = my_map.begin(); itr != my_map.end(); ++itr) { 
                if(itr->second >=2){
                    count++;
                }
            } 
            return count;
        }
        if( k < 0) return 0;
        for(it = my_set.begin(); it!=my_set.end();++it){
            if(my_set.find(*it + k) != my_set.end())
                count++;
        }
        return count;
    }
};