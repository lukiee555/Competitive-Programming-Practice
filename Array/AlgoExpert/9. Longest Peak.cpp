class Solution {
public:
    int longestMountain(vector<int>& arr) {
        if( arr.size() < 3)
            return 0;
        int longestPeakLength = 0, currentPeakLength;
        int i = 1, leftIdx, rightIdx;
        bool isPeak ;
        while( i < (arr.size() - 1)){
            isPeak = (arr[i] > arr[i-1] && arr[i] > arr[i+1]) ? true:false;
            if(isPeak){
                leftIdx = i - 2;
                while(leftIdx>=0 && arr[leftIdx] < arr[leftIdx+1]){
                    leftIdx--;
                }
                rightIdx = i + 2;
                while(rightIdx < arr.size() && arr[rightIdx] < arr[rightIdx - 1]){
                    rightIdx++;
                }
                currentPeakLength = rightIdx - leftIdx - 1;
                longestPeakLength = max(longestPeakLength,currentPeakLength);
                i = rightIdx;
            }else{
                i++;
            }
        }
        return longestPeakLength;
    }
};