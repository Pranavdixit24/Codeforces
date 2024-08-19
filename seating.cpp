#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;
    vector<ll> occ(n+2,0);
    ll f=0;
    for(int i=1;i<=n;i++){
        ll x;
        cin>>x;
        if(i==1){
            occ[x]=1;
            continue;
        }
        if(occ[x-1]||occ[x+1]){
            occ[x]=1;
        }
        else{
            f=1;
        }
    }
    if(f==1) {
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
        
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}