#include<bits/stdc++.h>
using namespace std;
#define ll long long 
 
int findSmallestGreaterOrEqual(vector<int>& b,int x){
    auto it=lower_bound(b.begin(),b.end(),x);
    return it!=b.end()?*it:-1;
}
 
void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> b(m);
    cin>>b[0];
    // sort(b.begin(),b.end());
    int prev=INT_MIN;
    for(int i=0;i<n;i++){
        int val=findSmallestGreaterOrEqual(b,a[i]+prev);
        if(val!=-1){
            if(a[i]<prev){
                a[i]=val-a[i];
                
            }
            else{
                a[i]=min(a[i],val-a[i]);
            }
 
        }
        if(a[i]<prev){
            cout<<"NO"<<endl;
            return;
        }
        prev=a[i];
    }
    cout<<"YES"<<endl;
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}