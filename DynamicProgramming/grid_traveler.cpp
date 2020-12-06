#include<iostream>
#include<algorithm>
using namespace std;
int temp[1000][1000];
int gridTraveler(int m, int n){
    if( m == 1 && n == 1)
        return 1;
    if( m == 0 || n == 0)
        return 0;
    if(temp[m][n] > 0)
        return temp[m][n];
    temp[m][n] = gridTraveler(m - 1, n) + gridTraveler(m, n - 1);
    return temp[m][n];
}

int main(){
    
    return 0;
}
