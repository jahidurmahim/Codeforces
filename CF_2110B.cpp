						      //     Bismillahir Rahmanir Rahim     //
                                                     //        Jahidur Rahman Mahim        //
                                                    //        AUTHOR : jahidurmhaim       //
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        stack<char>st;
        int cnt=0;
        for(int i=0;i<s.size();i++){
            char c=s[i];
            if(!st.empty() && st.top()=='(' && c== ')') st.pop();
            else st.push(c);
            if (st.empty()) cnt++;
        }
        if (cnt>1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

//Problem link: https://codeforces.com/contest/2110/problem/B












