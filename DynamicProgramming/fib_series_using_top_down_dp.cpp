#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
ll temp[1000];
ll fib(ll n){
    if(n <= 2)
        return 1;
    else if(temp[n] != 0)
        return temp[n];
    else{
        temp[n] = fib(n-1) + fib(n-2);
        return temp[n];
    }
}

int main(){
    int t;
    cin>>t;
    ll num;
    while(t--){
        cin>>num;
        cout<<fib(num)<<"\n";
    }
    return 0;
}
