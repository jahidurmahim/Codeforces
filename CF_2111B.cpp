                                                    //     Bismillahir Rahmanir Rahim     //
                                                   //        Jahidur Rahman Mahim        //
                                                  //        AUTHOR : jahidurmhaim       //
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin>>t;
    while(t--){
        int n,m; 
        cin>>n>>m;
        int f[11]; 
        f[0]=1; f[1]=2;
        for(int i=2;i<10;i++) 
        f[i]=f[i-1]+f[i-2];
        int h=f[n-1]+f[n-2], s=f[n-1];
        while(m--){
            int a,b,c; 
            cin>>a>>b>>c;
            int mx=max({a,b,c}), mn=min({a,b,c});
            if(mx>=h && mn>=s) cout<<1;
            else cout<<0;
        }
        cout<<endl;
    }
    return 0;
}

//Problam Link: https://codeforces.com/contest/2111/problem/B
