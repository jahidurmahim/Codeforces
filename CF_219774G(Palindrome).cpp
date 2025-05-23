                                                        //     Bismillahir Rahmanir Rahim     //
                                                       //        Jahidur Rahman Mahim        //
                                                      //        AUTHOR : jahidurmhaim       //
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,c=0;
	cin>>t;
	int arr[t+1];
	for(int i=1;i<=t;i++) cin>>arr[i];
	for(int i=1,j=t; i<=t/2;i++,j--){
		if(arr[i]==arr[j]){
			c++;
		}
	}
	if(c==t/2) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}

//Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G












