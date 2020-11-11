#include<iostream>
#include<algorithm>
using namespace std;
/*what is the minimum number of people that should be present in
a hall so that there's is 50% chance of two people having the smae birthday?
*/
int main(){
    // x denotes the probabilty of two people having same birthday
    float  x = 1.0;
    int people = 0;
    float num = 365;
    float denom = 365;

    float p;
    cin>>p;
    if(p == 1){
        cout<<"366";
        return;
    }
    while(x > 1-p){
        x = x*(num)/denom;
        num--;
        people++;
    }
    cout<<people << " "<< x;

    return 0;
}
