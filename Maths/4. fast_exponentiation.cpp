#include<iostream>
#include<algorithm>
using namespace std;

int pow(int a, int n){
    if(n == 0)
        return 1;
    int subprob = pow(a,n/2);
    if(n & 1)
        return a*subprob*subprob;
    else
        return subprob*subprob;
}

int main(){
    int a,n;
    cout<<pow(a,n);
    return 0;
}
