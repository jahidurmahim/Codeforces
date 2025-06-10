                                                    //     Bismillahir Rahmanir Rahim     //
                                                   //        Jahidur Rahman Mahim        //
                                                  //        AUTHOR : jahidurmhaim       //
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	  int n,x; 
	  cin>>n>>x;
	  int arr[100005],ft=-1,lt=-1;
	  for(int i=0;i<n;i++){
	   cin>>arr[i];
	   if(arr[i]==1){
	    if(ft==-1) ft=i;
	    lt=i;}
	  }
	  if(ft==-1) cout<<"YES"<<endl;
	  else{
	   int nd=lt-ft+1;
	   if(x>=nd) cout<<"YES"<<endl;
	   else cout<<"NO"<<endl;
	  }
	}
	 return 0;
}

//Problam Link: https://codeforces.com/contest/2117/problem/A
