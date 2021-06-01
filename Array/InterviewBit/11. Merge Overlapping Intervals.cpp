/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
bool comp(Interval i1, Interval i2)
{
    return (i1.start < i2.start);
}
vector<Interval> Solution::merge(vector<Interval> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(A.size() <=1)
        return A;
    
    sort(A.begin(), A.end(),comp);
    vector<Interval> output;
    output.push_back(A[0]);
    
    for(int i = 1; i < A.size(); i++){
        if(output.back().end >= A[i].start)
            output.back().end = max(output.back().end, A[i].end);
        else
            output.push_back(A[i]);
    }
    return output;
}
