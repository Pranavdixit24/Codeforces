#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    int total=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        total+=v[i];
    }
    sort(v.begin(),v.end());
    int take=0;
    int remaining=total;
    int i=1;
    while(take<=remaining){
        take+=v[n-i];
        cnt++;
        remaining-=v[n-i];
        i++;
    }
    cout<<cnt<<endl;
    

}