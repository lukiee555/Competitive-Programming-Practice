#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

bool comparator(string a, string b){
    if(a.length() == b.length())
        return a < b;
    return a.length()< b.length();
}

int main(){
    int n;
    cin>>n;
    string s[100];
    //to consume extra enter or backslash
    cin.get();
    for(int i = 0; i < n; i++)
        getline(cin,s[i]);
    //inbuilt comparison by default
    sort(s,s+n);
    for(int i = 0; i < n; i++)
        cout<<s[i]<<endl;
    //comparison based on length
    sort(s,s+n,comparator);
    return 0;
}
