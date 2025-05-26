                                                            //     Bismillahir Rahmanir Rahim     //
                                                            //        Jahidur Rahman Mahim        //
                                                            //        AUTHOR : jahidurmhaim       //

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        long long res=1,p=a[0];
        for(int i=1;i<n;i++){
            if(a[i]-p>1){
                res++;
                p=a[i];
            }
        }
        cout<<res<<endl;
    }
    return 0;
}

//problem link: https://codeforces.com/contest/2114/problem/C
