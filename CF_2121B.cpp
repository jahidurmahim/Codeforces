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
        char s[100005];
        cin>>s;
        int freq[26]={0};
        for(int i=0; i<n;i++){
            freq[s[i]-'a']++;
        }
        if(freq[s[n-1]-'a']>=3){
            cout<<"YES\n";
            continue;
        }
        bool f=false;
        for(int i=1;i<n-1;i++){
            if (freq[s[i]-'a']>= 2){
                f=true;
                break;}
        }
        if(f) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}

//Problam link: https://codeforces.com/contest/2121/problem/B
