                                                    //     Bismillahir Rahmanir Rahim     //
                                                   //        Jahidur Rahman Mahim        //
                                                  //        AUTHOR : jahidurmhaim       //
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,p,k,mx=0;
        cin>>n>>p>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            mx=max(mx,a[i]);
        }
        cout<<(k>1 || a[p-1]== mx?"YES\n":"NO\n");
    }
}
//Problam link: https://codeforces.com/contest/2123/problem/B
