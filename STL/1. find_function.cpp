#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    auto it = find(arr,arr+n,key);
    int index = it - arr ;
    if(index ==  n){
        cout<<"Not Present"<<"\n";
    }else{
        cout<<"Present at index "<<index;
    }
    return 0;
}
