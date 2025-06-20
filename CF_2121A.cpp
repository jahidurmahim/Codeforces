                                                    //     Bismillahir Rahmanir Rahim     //
                                                   //        Jahidur Rahman Mahim        //
                                                  //        AUTHOR : jahidurmhaim       //
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        int arr[100005];
        for(int i=1;i<=n;i++) cin>>arr[i];
        int diff=arr[n]-arr[1];
        int add;
        if(abs(s-arr[1])<abs(s-arr[n])){
            add=abs(s-arr[1]);
        } else{
            add=abs(s-arr[n]);
        }
        cout<<diff+add<<endl;
    }
    return 0;
}

//Problam link: https://codeforces.com/contest/2121/problem/A
