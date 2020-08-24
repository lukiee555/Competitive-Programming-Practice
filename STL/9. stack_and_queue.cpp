#include<iostream>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;

int main(){
    stack<int> s;
    for(int i = 0; i < 5; i++){
        s.push(i);
    }
    while(!s.empty()){
        cout<<s.top()<<"\n";
        s.pop();
    }

    queue<int> q;
    for(int i = 0; i < 5; i++){
        q.push(i);
    }
    while(!s.empty()){
        cout<<q.front()<<"\n";
        s.pop();
    }

    return 0;
}
