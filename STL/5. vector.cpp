#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    // create and initialise
    vector<int> a;
    vector<int> b(5,10); //five int with value 10 - init a vector of zeros z(n,0)
    vector<int> c(b.begin(),b.end());
    //iterate over the vector
    for(int i = 0; i < c.size(); i++)
        cout<<c[i]<<",";
    
    cout<<endl;
    // instead of vector<int> :: iterator we can use auto
    for(vector<int>::iterator it = b.begin(); it != b.end(); it++)
        cout<<(*it)<<",";
    cout<<endl;
    
    for(int x: c)
        cout<<x<<",";

    //More Vector Functions
    int n; 
    cin>>n;
    for(int i = 0; i < n ; i++){
        int number;
        cin>>number;
         a.push_back(number)
    }
       
    return 0;
}
