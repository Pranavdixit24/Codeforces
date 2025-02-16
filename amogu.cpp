#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int n=str.size();
        for(int i=0; i<n; i++){
            if(str[n-2]=='u' && str[n-1]=='s'){
                str.pop_back();
            }
            str[n-2]='i';
        }
        cout<<str<<endl;
    }
}