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
	int temp=arr[0], m=0;
	for(int i=1;i<t;i++){
		if(arr[i]<temp)
		{
			temp= arr[i];
			m=i;
		}
	}
	cout<<temp<<" "<<m+1;
}

//Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E












