                                                    //     Bismillahir Rahmanir Rahim     //
                                                   //        Jahidur Rahman Mahim        //
                                                  //        AUTHOR : jahidurmhaim       //
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=0;
        int a[200000],b[200000],c[200000];
        for(int i=1;i<=n;i++){
            if(i>1){
                a[count]=i;
                b[count]=1;
                c[count]=i;
                count++;
            }
            if(i<n-1){
                a[count]=i;
                b[count]=i+1;
                c[count]=n;
                count++;
            }
        }
        cout<<count<<endl;
        for(int i=0;i<count;i++){
            cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<endl;
        }
    }
    return 0;
}

//Problam Link: https://codeforces.com/contest/2118/problem/B
