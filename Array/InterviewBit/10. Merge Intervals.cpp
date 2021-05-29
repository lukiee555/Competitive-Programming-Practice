bool compare(Interval a,Interval b){
     return a.start<b.start;
 }
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    intervals.push_back(newInterval);
    sort(intervals.begin(),intervals.end(),compare);
    vector<Interval> output;
    int n=intervals.size();
    output.push_back(intervals[0]);
    for(int i=1;i<n;i++){
        if(intervals[i].start<=output[output.size()-1].end)
         output[output.size()-1].end=max(output[output.size()-1].end,intervals[i].end);
        else
         output.push_back(intervals[i]);
    }
    return output;
}
