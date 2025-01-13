#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        if(a % 2 != b % 2 || n==2){  //different parity alice cant guarantee  
            cout<<"NO"<<endl;
        }
        else{
            if(a==1 && b==2){   //edge case
                cout<<"NO"<<endl;
            }
            else if(a==n && b==n-1){ //edge case 
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl; //same parity pos even or odd alice will guarantee win 
            }
        }
    }
}