                                                      //     Bismillahir Rahmanir Rahim     //
                                                      //        Jahidur Rahman Mahim        //
                                                      //        AUTHOR : jahidurmhaim       //
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin>>t;
    while(t--){
        int n,m,a,b;
        cin>>n>>m>>a>>b;
        a=min(a,n-a+1);
        b=min(b,m-b+1);
        int bitsA=0,bitsM=0,bitsB=0,bitsN=0;
        if(a>1) bitsA=(int)log2(a-1)+1;
        if(m>1) bitsM=(int)log2(m-1)+1;
        if(b>1) bitsB=(int)log2(b-1)+1;
        if(n>1) bitsN=(int)log2(n-1)+1;
        int len1=1+bitsA+bitsM;
        int len2=1+bitsB+bitsN;
        cout<<min(len1,len2)<<endl;
    }
    return 0;
}
//Problam Link: https://codeforces.com/contest/2109/problem/B
