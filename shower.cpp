#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,s,m;
        cin>>n>>s>>m;
        vector<pair<ll,ll>> v(n);
        
        for(ll i=0;i<n;i++){
            ll l,r;
            cin>>l>>r;
            v[i]={l,r};
            
        }
        ll mx=v[0].first;
        for(ll i=1;i<n;i++){
            mx=max(mx,v[i].first-v[i-1].second);

        }
        mx=max(mx,m-v[n-1].second);
        if(mx>=s) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    
    }
  
}