#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        string s=to_string(a);
        int n=s.size();
        string lastTwo="";
        lastTwo+=s[n-2];
        lastTwo+=s[n-1];

        if(s[0]=='1' && s[1]=='0') {
            if(n==3 && s[n-1]!='1' && s[n-1]!='0'){
                cout<<"YES"<<endl;

            }
            else if(n>3 && s[n-2]!='0' && stoi(lastTwo)>=2){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else {
            cout<<"NO"<<endl;
        }
    
    }
    
    
}