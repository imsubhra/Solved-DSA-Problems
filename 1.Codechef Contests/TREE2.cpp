#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        unordered_map <ll,ll> m;
        ll count=0;
        for(ll i=0;i<n;i++)
        {
            m[a[i]]++;
            if(m[a[i]]==1 && a[i]!=0)
            {
                count++;
            }
        }
        cout<<count<<"\n";
    }
}
