#include<iostream>
using namespace std;

void stairCaseSearch(int a[][10], int R, int C, int key){
    int i = 0; 
    int j = C - 1;
    while(i < R && j >=0){
        if(a[i][j] == key){
            cout<<"Found"<<endl;
            break;
        }
        else if(a[i][j] > key){
            j--;
        }else{
            i++;
        }

    }
    
}

int main(){
    return 0;
}