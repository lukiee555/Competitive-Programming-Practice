#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> d{1, 2, 3, 10, 14};
    //this will reserve capacity for the vector
    d.reserve(100);
    d.push_back(16);
    for (int i = 0; i < d.size(); i++)
        cout << d[i];
    return 0;
}
