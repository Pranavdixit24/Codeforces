#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string solve(string b,int n){
    set<char> st;
    for(int i=0;i<n;i++){
        st.insert(b[i]);
    }
    vector<char> ch(st.begin(),st.end());
    map<char,char> mpp;
    int size=ch.size();
    for(int i=0;i<size;i++){
        mpp[ch[i]] = ch[size - 1 - i];
    }
    for(int i=0;i<n;i++){
        b[i]=mpp[b[i]];
    }
    return b;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string b;
        cin>>b;
        cout<<solve(b,n)<<endl;
    }
    return 0;
}