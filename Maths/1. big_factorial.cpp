#include<iostream>
#include<algorithm>
using namespace std;

void multiply(int *a, int &n, int no){
    int carry = 0;
    for(int i = 0; i < n; i++){
        int product = a[i]*no + carry;
        a[i] = product%10;
        carry = product / 10;
    }
    while(carry){
        a[n] = carry%10;
        carry = carry/10;
        n++;
    }
}

void big_factorial(int n){
    int *a = new int[1000];
    for(int i =0; i < n; i++)
        a[i] = 0;
    int number_of_digit = 1;
    a[0] = 1;
    for(int i = 2; i <=n; i++){
        multiply(a,number_of_digit,i);
    }
    //print the number
    for(int i = number_of_digit - 1; i >=0 ; i-- ){
        cout<<a[i];
    }
}

int main(){
    int n;
    cin>>n;
    big_factorial(n);
    return 0;
}
