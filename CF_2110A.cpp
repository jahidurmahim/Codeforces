						                            //     Bismillahir Rahmanir Rahim     //
                                       //        Jahidur Rahman Mahim        //
                                      //        AUTHOR : jahidurmhaim       //
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		vector<int>v(n);
		for (int i=0;i<n;i++) cin>>v[i];
		sort(v.begin(),v.end());
		int res=1e9;
		for(int i=0;i<n;i++){
			int cnt=i;
			for(int j=n-1;j>=0;j--){
				if((v[i]+v[j])%2) cnt++;
				else res=min(res,cnt);
			}
		}
		cout<<res<<endl;
	}
	return 0;
}

//Problem link: https://codeforces.com/contest/2110/problem/A









