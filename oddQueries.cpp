#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<ll> v(n);
        vector<ll> pf(n);
        ll sum=0;
        for(ll i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
            pf[i]=sum;
        }   
        for(ll i=0;i<q;i++){
            ll l,r,k;
            cin>>l>>r>>k;
            l--;r--;
            ll regsum=(l==0)?pf[r]:pf[r]-pf[l-1];
            
            ll newsum=sum-regsum+(r-l+1)*k;
            if(newsum%2!=0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;

        }
    }
    
}
