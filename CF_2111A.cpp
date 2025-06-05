                                                    //     Bismillahir Rahmanir Rahim     //
                                                   //        Jahidur Rahman Mahim        //
                                                  //        AUTHOR : jahidurmhaim       //
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,x;
        cin >> x;
        a=b=c=x;
        int cnt=0;
        while(a||b||c){
            if(a>b) swap(a,b);
            if(b>c) swap(b,c);
            if(a>b) swap(a,b);
            int m=max(a/2,b/2);
            c=m;
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}

//Problam link: https://codeforces.com/contest/2111/problem/A
