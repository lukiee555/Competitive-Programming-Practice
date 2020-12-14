#include <iostream>
using namespace std;
/*
Given an unsorted array A of size N of non-negative integers, find a continuous sub-array which adds to a given number S. 
*/
void findSubarray(int a[], int N, int S){
    int curr_sum = a[0], start = 0, i;
	    for(i = 1; i <= N; i++){
	        while(curr_sum > S && start < i - 1){
	            curr_sum = curr_sum - a[start];
	            start++;
	        }
	        if(curr_sum == S){
	            cout<<start + 1<<" "<<i<<"\n";
	            return;
	        }
	        if(i < N)
	            curr_sum = curr_sum + a[i];
	    }
	    cout<<-1<<"\n";
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int size, sum;
	    cin>>size>>sum;
	    int a[size];
	    for(int i = 0; i < size; i++)
	        cin>>a[i];
	    findSubarray(a,size,sum);
	}
	return 0;
}