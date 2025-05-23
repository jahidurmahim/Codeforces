						//     Bismillahir Rahmanir Rahim     //
                       //        Jahidur Rahman Mahim        //
                      //        AUTHOR : jahidurmhaim       //
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int arr[t];
	for(int i=0;i<t;i++) cin>>arr[i];
	for(int i=0;i<t;i++){
		if(arr[i]>0) cout<<1<<" ";
		else if(arr[i]<0) cout<<2<<" ";
		else cout<<0<<" ";
	}
}

//Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C
