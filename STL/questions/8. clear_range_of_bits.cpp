#include<iostream>
#include<algorithm>
using namespace std;

int clearLastIbits(int n, int i){
    int mask = (-1 << i);
    return n & mask;
}
int clearRangeItoJ(int n, int i, int j){
    int ones = (~0);
    int a = (ones << (j+1));
    int b = (1<<i) - 1;
    int mask = a|b;
    return n & mask;
}

int main(){
    int n = 35, i = 2, j = 4;
    cout<<clearLastIbits(n, i)<<"\n";
    cout<<clearRangeItoJ(n, i, j)<<"\n";
    return 0;
}
