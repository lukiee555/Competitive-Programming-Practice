#include<iostream>
#include<algorithm>
using namespace std;

pair<int, int> smallestDifference(int arr1[], int arr2[], int n, int m){

    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
    int min_diff = INT_MAX;
    int current_diff = INT_MAX;
    int idxOne = 0, idxTwo = 0;
    int firstNum, secondNum;
    pair<int,int> result;
    while( idxOne < n && idxTwo < m){
        firstNum = arr1[idxOne];
        secondNum = arr2[idxTwo];

        if( firstNum < secondNum){
            current_diff = secondNum - firstNum;
            idxOne++; 
        }else if( secondNum < firstNum){
            current_diff = firstNum - secondNum;
            idxTwo++; 
        }else{
            result = make_pair(firstNum,secondNum);
            return result;
        }

        if(min_diff > current_diff){
            min_diff = current_diff;
            result = make_pair(firstNum,secondNum);
        }
    }
    return result;
    
}


int main(){
    
    return 0;
}
