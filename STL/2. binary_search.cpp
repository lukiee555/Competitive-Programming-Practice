#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {10,20,30,40,40,40,50,50,60};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    bool present = binary_search(arr,arr+n,key);
    if(present)
        cout<<"Present"<<endl;
    else
        cout<<"Not Present"<<endl;
    
    auto lb = lower_bound(arr,arr+n,40);
    cout<<"Lower Bound of 40 is "<<(lb - arr)<<endl;

    auto ub = upper_bound(arr,arr+n,40);
    cout<<"Upper Bound of 40 is "<<(ub - arr)<<endl;

    cout<<"Frequency of 40 is "<<(ub - lb)<<endl;
    return 0;
}
