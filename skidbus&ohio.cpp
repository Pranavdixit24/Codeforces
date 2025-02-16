// #include<bits/stdc++.h>
// using namespace std;
// bool isConsec(string s){
//     for(int i=0;i<s.size()-1;i++){
//         if(s[i]==s[i+1]) return true;
//     }
//     return false;
// }

// void find(string s){
//     if(s.size()>1){
//         for(int i=1;i<s.size()-1;i++){
//             if(s[i]==s[i+1]){
//                 s[i]=s[i-1];
//                 s.erase(s.begin()+i+1);
//             }
//         }

//     }
//     else{
//         cout<<1<<endl;
//     }
// }

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         string s;
//         cin>>s;

//         while(isConsec(s)){
//             find(s);

//         }
//         cout<<s.size()<<endl;
//     }
// }



#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--) {
        string s;
        cin >> s;


        // Stack to process consecutive letters
        stack<char> stk;
        for (char ch : s) {
            if (!stk.empty() && stk.top() == ch) {
                // If the current character matches the top of the stack, pop it (remove the consecutive pair)
                stk.pop();
            } else {
                // Otherwise, push the current character onto the stack
                stk.push(ch);
            }
        }
        if (stk.empty()) {
            cout << 1 << endl;
        } else {
            cout << stk.size() << endl;
        }



    }
    return 0;
}



// _____________________________________________________
#include <bits/stdc++.h>
using namespace std;

// Function to check for consecutive identical characters in the string
bool isConsec(string s) {
    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] == s[i + 1]) return true;
    }
    return false;
}

// Function to reduce the string by removing consecutive identical characters
void find(string& s) {
    if (s.size() > 1) {
        // Traverse the string and remove consecutive duplicates
        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == s[i + 1]) {
                // Remove the second character of the consecutive pair
                s.erase(s.begin() + i + 1);
                i--; // Decrease i to check the previous character
            }
        }
    }
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;

        // Edge case: if the string has only one character
        if (s.size() == 1) {
            cout << 1 << endl;
            continue;
        }

        // Keep reducing the string until no more consecutive characters are left
        while (isConsec(s)) {
            find(s); // Apply find function to reduce the string
        }

        // Output the minimized length of the string
        cout << s.size() << endl;
    }

    return 0;
}