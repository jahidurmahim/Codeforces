                                                     //     Bismillahir Rahmanir Rahim     //
                                                   //        Jahidur Rahman Mahim        //
                                                  //        AUTHOR : jahidurmhaim       //
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d,e,f;
        cin>>a>>b>>c>>d>>e>>f;
        if(a+c+e==b && b==d && d==f) cout<<"YES\n";
        else if(b+d+f==a && a==c && c==e) cout<<"YES\n";
        else if(c+e==a && d==f && b+d==a) cout<<"YES\n";
        else if(d+f==b && c==e && a+c==b) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}

//Problam link: https://codeforces.com/contest/2120/problem/A
