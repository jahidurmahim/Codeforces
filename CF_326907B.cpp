						//     Bismillahir Rahmanir Rahim     //
                       				//        Jahidur Rahman Mahim        //
                     		 		//        AUTHOR : jahidurmhaim       //
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j && i+j==n-1) cout<<'X';
            else if(i==j) cout<<'\\';
            else if(i+j==n-1) cout<<'/';
            else cout<<'*';
        }
        cout<<'\n';
    }
    return 0;
}

//Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/B
