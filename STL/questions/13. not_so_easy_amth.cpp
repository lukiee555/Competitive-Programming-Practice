#include<iostream>
using namespace std;
#define ll long long int 

int main() {
	ll t;
    cin>>t;
    ll primes[]={2,3,5,7,11,13,17,19};
    ll subsets= (1<<8)-1;
    while(t--)
    {
        ll n;
        ll ans=0;
        cin>>n;
        for(ll i=1;i<=subsets;i++)
        {
            ll denom=1;
            ll count_bits=__builtin_popcount(i);
            for(int j=0;j<8;j++)
            {
                if (i&(1<<j))
                {
                    denom*=primes[j];
                }
            }
            if(count_bits&1)
            {
                ans+=n/denom;
            }
            else
            ans-=n/denom;
        }
        cout<<ans<<endl;
        
    }
    return 0;
}