						    //     Bismillahir Rahmanir Rahim     //
                                                   //        Jahidur Rahman Mahim        //
                                                  //        AUTHOR : jahidurmhaim       //

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,ones=0;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1) ones++;
        }
        bool bad=false;
        if(ones==n) bad=true;
        for(int i=0;i+1<n;i++){
            if(a[i]==0 && a[i+1]==0){
                bad=true;
                break;
            }
        }
        if(bad) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

//Problem Link: https://codeforces.com/contest/2109/problem/A
