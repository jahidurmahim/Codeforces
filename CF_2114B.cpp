						                                    //     Bismillahir Rahmanir Rahim     //
                                               //        Jahidur Rahman Mahim        //
                                              //        AUTHOR : jahidurmhaim       //
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int cnt0=count(s.begin(),s.end(),'0');
        int cnt1=n-cnt0;
        bool ok=false;
        for(int g0=0;g0<=k;++g0){
            int g1=k-g0;
            if(2*g0<=cnt0 && 2*g1<=cnt1){
                int rem0=cnt0 - 2*g0;
                int rem1=cnt1 - 2*g1;
                if(rem0 == rem1){
                    ok=true;
                    break;
                }
            }
        }
        cout<<(ok?"YES":"NO")<<endl;
    }
}

//problem link: https://codeforces.com/contest/2114/problem/B
