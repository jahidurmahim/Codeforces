						//     Bismillahir Rahmanir Rahim     //
                       //        Jahidur Rahman Mahim        //
                      //        AUTHOR : jahidurmhaim       //
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,x;
    cin>>t;
    while(t--){
        cin>>x;
        while(x>=33){
            if(x%100==33) x/=100;
            else x-=33;
        }
    if(x==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;
}

//Problem link: https://codeforces.com/problemset/problem/2048/A
