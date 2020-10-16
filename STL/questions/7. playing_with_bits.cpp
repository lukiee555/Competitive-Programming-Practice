#include<iostream>
using namespace std;

int count_bits(int a,int b)
{
    int count=0;
    for(int i=a;i<=b;i++){
        int n=i;
        while(n>0)
        {
            if(n&1)
            {
                count++;
            }
            n=n>>1;
        }
    }
    return count;
}
int main()
{
    int q,a,b;
    cin>>q;
    while(q--)
    {
        cin>>a>>b;
        cout<<count_bits(a,b)<<endl;
    }
    return 0;
}