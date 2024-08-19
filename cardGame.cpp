#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--) {
        int a1,a2,b1,b2; 
        cin>>a1>>a2>>b1>>b2;
        int sum=0;
        if(a1>b1 && a2>=b2) sum++;
        else if (a1==b1 && a2>b2) sum++;
        if(a1>b2 && a2>=b1) sum++;
        else if(a1==b2 && a2>b1) sum++;
        if(a2>b2 && a1>=b1) sum++;
        else if(a2==b2 && a1>b1) sum++;
        if(a2>b1 && a1>=b2) sum++;
        else if(a2==b1 && a1>b2) sum++;
        cout<<sum<<endl;
    }
    return 0;
}
    
