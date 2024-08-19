#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int ans=0;
        cin>>n;
        string s;
        cin>>s;
        int a=n;
        int b=n;
        int c=n;
        int d=n;
        for(auto ch:s){
            
            if(ch=='A' && a>0){
                ans+=1;
                a--;
            }
            if(ch=='B' && b>0){
                ans+=1;
                b--;
            }
            if(ch=='C' && c>0){
                ans+=1;
                c--;
            }
            if(ch=='D' && d>0){
                ans+=1;
                d--;
            }
            
        }
        cout<<ans<<endl;
        
    }
    return 0;
}

