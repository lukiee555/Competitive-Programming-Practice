int Solution::maximumGap(const vector &A)
{
    if (A.size() < 2)
        return 0;

    int minimum = INT_MAX, maximum = INT_MIN;
    for (auto x : A)
    {
        minimum = min(minimum, x);
        maximum = max(maximum, x);
    }

    int max_gap = maximum - minimum;
    float min_gap = float(max_gap) / (A.size() - 1);

    vector<int> bucket_min(A.size() - 1, INT_MAX), bucket_max(A.size() - 1, INT_MIN);
    for (auto x : A)
    {
        if (x == minimum || x == maximum)
            continue;
        int bucket_index = floor((x - minimum) / min_gap);
        bucket_min[bucket_index] = min(bucket_min[bucket_index], x);
        bucket_max[bucket_index] = max(bucket_max[bucket_index], x);
    }
    int max_diff = INT_MIN, prev_bucket_max = minimum;
    for (int i = 0; i < A.size() - 1; i++)
    {
        if (bucket_min[i] == INT_MAX)
            continue; // empty bucket
        max_diff = max(max_diff, bucket_min[i] - prev_bucket_max);
        prev_bucket_max = bucket_max[i];
    }
    max_diff = max(max_diff, maximum - prev_bucket_max);

    return max_diff;
}

// int Solution::maximumGap(const vector<int> &A) {
//     if(A.size() < 2){
//         return 0;
//     }

//     vector<int> forMin(A.size(), -1);
//     vector<int> forMax(A.size(), -1);

//     int max_dist = 0, mini = INT_MAX, maxi = INT_MIN;
//     int gap = 0, bucket = 0, ind = 0;

//     for(int i = 0; i < A.size(); i++){
//         if(A[i] < mini){
//             mini = A[i];
//         }
//         if(A[i] > maxi){
//             maxi = A[i];
//         }
//     }

//     gap = maxi - mini;
//     gap = gap/(A.size()-1);

//     if(gap == 0){
//         return maxi - mini;
//     }

//     for(int i = 0; i < A.size(); i++){
//         bucket = (int)((A[i] - mini)/gap);
//         if(forMin[bucket] < 0){
//             forMin[bucket] = A[i];
//             forMax[bucket] = A[i];
//         }
//         else{
//             forMin[bucket] = min(A[i], forMin[bucket]);
//             forMax[bucket] = max(A[i], forMax[bucket]);
//         }
//     }

//     int max_diff = 0;

//     for(int i = 0; i < forMin.size(); i++){
//         if(forMin[i] >= 0){
//             max_diff = max(max_diff, forMin[i]-forMax[ind]);
//             ind = i;
//         }
//     }

//     return max_diff;

// }
