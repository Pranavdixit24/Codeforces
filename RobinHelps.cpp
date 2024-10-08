#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;int k;
        cin>>n>>k;
        vector<int> v(n);
        int robinGold=0;
        int ans=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]>=k){
                robinGold+=v[i];
            }
            else if(v[i]==0 && robinGold>0){
                ans++;
                robinGold--;
            }
        }
        cout<<ans<<endl;

        
    }
}