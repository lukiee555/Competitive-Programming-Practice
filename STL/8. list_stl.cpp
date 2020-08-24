#include<iostream>
#include<algorithm>
#include<list>
using namespace std;


//List => Doubly Linked List
//Usful When insertion and deletion in the list from middle 
int main(){
    list<string> l;  
    l.push_back("appple");
    l.push_back("mango");
    l.push_back("kiwi");
    l.push_back("banana");
    l.push_back("pineapple");
    //inbuild sort function
    l.sort();
    for(string s: l){
        cout<<s<<"-->";
    }
    cout<<endl;
    //reverse
    l.reverse();
    for(string s: l){
        cout<<s<<"-->";
    }
    return 0;
}
