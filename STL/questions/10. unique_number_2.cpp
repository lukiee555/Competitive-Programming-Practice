#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[1000005];
    int xorr = 0;
    for(int i = 0; i < n; i++){
        cin>>a[i];
        xorr = xorr^a[i];
    }
    int temp = xorr;
    int pos = 0;
    while((temp&1) != 1){
        pos++;
        temp = temp >> 1;
    }
    int mask = 1 << pos;
    int x = 0, y =0;
    for(int i = 0; i < n; i++){
        if((a[i]&mask) > 0){
            x = x ^ a[i]; 
        }
    }
    y = xorr^x;
    cout<<min(x,y)<<" "<<max(x,y);
    return 0;
}
