						    //     Bismillahir Rahmanir Rahim     //
                                                   //        Jahidur Rahman Mahim        //
                                                  //        AUTHOR : jahidurmhaim       //
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while (t--){
        int n,m,cnt[8]={};
        cin>>n>>m;
        for(int i=0;i<n;i++){
            char ch; cin>>ch;
            cnt[ch-'A'+1]++;
        }
        int res=0;
        for(int i=1;i<=7;i++){
            if(cnt[i]<m) res+=m-cnt[i];
        }
        cout<<res<<endl;
    }
    return 0;
}

//Problem Link: https://codeforces.com/contest/1980/problem/A
