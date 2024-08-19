#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;
    vector<string> v(2);
    for(ll i=0;i<2;i++){ 
        cin>>v[i];
    }
    
    ll ans=0;
    for(ll i=0;i<2;i++){
        for(ll j=0;j<n;j++){
            ll temp=0;
            if(j+1<n && v[i][j+1]=='.') temp++;
            if(j-1>=0 && v[i][j-1]=='.') temp++;
            if(temp<2) continue;
            if(i==0) {
                if(v[i+1][j]=='.' && v[i+1][j+1]!='.' && v[i+1][j-1]!='.') ans++;
            }
            else{
                if(v[i-1][j]=='.' && v[i-1][j-1]!='.' && v[i-1][j+1]!='.') ans++;
            }
        }
        
    }
    cout<<ans<<endl;
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}