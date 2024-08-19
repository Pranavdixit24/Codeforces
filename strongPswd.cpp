#include<bits/stdc++.h>
using namespace std;

string solve(){
    string s;
    cin>>s;
    int n=s.size();
    int f=0;
    string ans="";
    int i;
    for(i=0;i<n-1;i++){
        if(s[i]==s[i+1] && f==0){
            ans+=s[i];
            if(s[i]=='z'){
                ans+='a';
            }
            else{
                ans+=(char)(s[i]+1);
            }
            f=1;
        }
        else{
            ans+=s[i];
        }
    }
    ans+=s[n-1];
    if(f!=1){
        if(s[n-1]=='z'){
            ans+='a';
        }
        else{
            ans+=(char)(s[n-1]+1);
        }
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string ans=solve();
        cout<<ans<<endl;
    }
}
