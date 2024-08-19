#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long
int calc(vector<int> card,int n){
    int score=0;
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[card[i]]++;
    }
    for(auto i:mpp){
        if(i.second==2){
            score++;
        }
    }
    return score;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<int> card(n);
        for(ll i=0;i<n;i++){
            cin>>card[i];
        }
        cout<<calc(card,n)<<endl;
    }

}