#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        map<ll,vector<ll>> mpp;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            mpp[a[i]].push_back(i);
        }
        vector<vector<ll>> v;
        for(auto i:mpp){
            v.push_back(i.second);
        }
        sort(v.begin(),v.end());
        ll m;
        cin>>m;
        string s;
        for(ll i=0;i<m;i++){
            cin>>s;
            if(n!=s.size()){
                cout<<"NO"<<endl;
                continue;
            }
            else{
                map<char,vector<ll>> mpps;
                for(ll j=0;j<s.size();j++){
                    mpps[s[j]].push_back(j);
                    
                }
                vector<vector<ll>> vs;
                for(auto i:mpps){
                    vs.push_back(i.second);
                }
                sort(vs.begin(),vs.end());
                if(v==vs){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
                

            }

        }
        

    }
}