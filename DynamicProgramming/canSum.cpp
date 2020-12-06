#include<iostream>
#include<algorithm>
using namespace std;
int temp[1000] = {0};
int canSum(int targetSum, int a[], int size){
    if(targetSum == 0)
        return 1;
    if(targetSum < 0)
        return 0;
    if(temp[targetSum] == 1)
        return 1;
    for(int i = 0; i < size ; i++){
        int rem = targetSum - a[i];
        if(canSum(rem, a, size) == 1){
            temp[targetSum] = 1;
            return 1;
        }
    }
    temp[targetSum] = 0;
    return 0;
}

int main(){
    int a[] = {14,7};
    cout<<canSum(300,a, 2);
    return 0;
}
