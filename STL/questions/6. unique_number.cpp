#include<iostream>
using namespace std;

int findUniqueNumber(int *a, int n){
    int cnt[64] = {0};
    for(int j = 0; j < n; j++){
        //Extract Bits of Every Number and Update the count array
        int i = 0;
        int no = a[j];
        while(no>0){
            cnt[i] += no&1;
            i++;
            no = no >> 1;

        }
    }
    //Take mod of count number with 3
    int p = 1;
    int ans = 0;
    for(int i = 0; i < n; i++){
        cnt[i]%=3;
        ans += cnt[i]*p;
        p = p << 1;
    }
    return ans;

}
int main(){
    int a[] = {7,7,7,2,2,2,3,3,3,4,4,4,5};
    int n = sizeof(a)/sizeof(int);

    return 0;
}