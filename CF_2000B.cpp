						                                          //     Bismillahir Rahmanir Rahim     //
                                                     //        Jahidur Rahman Mahim        //
                                                    //        AUTHOR : jahidurmhaim       //
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        set<int>s;
        s.insert(a[0]);
        bool ok=true;
        for(int i=1;i<n;i++){
            if(s.find(a[i]-1)==s.end() && s.find(a[i]+1)==s.end()){
    			ok = false;
    			break;
			}
			s.insert(a[i]);
        }
        if(ok) cout<<"YES"<<endl; 
        else cout<<"NO"<<endl;
    }
    return 0;
}

//Problem Link: https://codeforces.com/problemset/problem/2000/B

