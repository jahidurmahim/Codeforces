                                              						//     Bismillahir Rahmanir Rahim     //
                                                         //        Jahidur Rahman Mahim        //
                                                        //        AUTHOR : jahidurmhaim       //
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n,a[100];
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        int ans=2e9;
        for(int i=0;i<n;i++)
            for(int j=i+1;j<n;j++){
                int res=a[i]+a[j]+j-i;
                if(res<ans) ans=res;
            }
        cout<<ans<<endl;
    }
    return 0;
}

//Problam link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I








