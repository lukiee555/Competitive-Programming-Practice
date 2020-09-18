//Problem Link -- https://leetcode.com/problems/valid-mountain-array/
class Solution {
public:
    bool validMountainArray(vector<int>& a) {
        if(a.size() < 3){
            return false;
        }
        //first Find the Peak
        int peakIndex = 0;
        for(int i = 0; i < a.size(); i++){
            if(a[i] > a[peakIndex]){
                peakIndex = i;
            }
        }
        if(peakIndex == a.size() - 1 || peakIndex == 0){
            return false;
        }
        //Check First Half
        for(int i = 0; i < peakIndex - 1; i++){
            if(a[i] >= a[i + 1])
                return false;
        }
        //Check Second Half
        for(int i = peakIndex; i < a.size() - 1; i++){
            if(a[i] <= a[i + 1])
                return false;
        }
        return true;
        
    }
};