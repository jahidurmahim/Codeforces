                                                //     Bismillahir Rahmanir Rahim     //
                                               //        Jahidur Rahman Mahim        //
                                              //        AUTHOR : jahidurmhaim       //
#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s; cin>>s;
    int n=stoi(s),k =(int)sqrt(n);
    if(k*k!=n){
        cout<<-1<<endl;
        return;
    }
    int a=k/2,b=k-a;
    int st=2;
    if(k%2==0) st=1;
    while(st-->0 && a>0){
        a--;
        b=k-a;
    }
    while(b<0 && a<=k){
        a++;
        b=k-a;
    }
    cout<<a<<" "<<b<<endl;
}
int main(){
 
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

//Problem link: https://codeforces.com/contest/2114/problem/A
