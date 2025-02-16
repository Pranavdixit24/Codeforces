#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    
        vector<int> v(5);
        cin>>v[0]>>v[1]>>v[3]>>v[4];
        vector<int> arr={v[0]+v[1],v[3]-v[1],v[4]-v[3]};
        sort(arr.begin(), arr.end());
        if(arr[0]==arr[2]){
            cout<<3<<endl;
        }
        else if(arr[0]==arr[1] || arr[1]==arr[2]){
            cout<<2<<endl;
        }
        else{
            cout<<1<<endl;
        }

    }
}
        