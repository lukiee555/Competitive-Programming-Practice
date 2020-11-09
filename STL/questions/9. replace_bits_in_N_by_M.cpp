#include<iostream>
#include<algorithm>
using namespace std;

int clearRangeItoJ(int n, int i, int j){
    int ones = (~0);
    int a = (ones << (j+1));
    int b = (1<<i) - 1;
    int mask = a|b;
    return n & mask;
}
int replcaceBits(int n, int m, int i, int j){
    int n_ = clearRangeItoJ(n,i,j);
    int ans = n_ | (m << i);
    return ans;
}
int main(){
    int n = 35,m = 7, i = 2, j = 4;
    cout<<replcaceBits(n,m, i, j)<<"\n";
    return 0;
}
