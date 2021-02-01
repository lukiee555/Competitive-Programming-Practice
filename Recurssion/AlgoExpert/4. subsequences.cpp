#include<iostream>
#include<algorithm>
using namespace std;

void subsequences(char* in, char* out, int i, int j){
    //Base case
    if(in[i] == '\0'){
        out[j] == '\0';
        cout<<out<<",";
        return;
    }
    //include the current char
    out[j] = in[i];
    subsequences(in, out, i+1, j+1);
    //exclude the current char
    subsequences(in, out, i+1, j);
}

int main(){
    
    return 0;
}
