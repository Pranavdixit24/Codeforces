#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        int cnt=0;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int i=0;
        while(i<n){
            int j=i+1;
            while(j<n){
                if(a[i]+a[j]==k && a[i]!=-1 && a[j]!=-1){
                    cnt++;
                    a[i]=-1;
                    a[j]=-1;
                }
                j++;
            }
            i++;
        }
        cout<<cnt<<endl;
    }
}