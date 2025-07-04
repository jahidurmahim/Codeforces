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
        vector<int> a(n),preMin(n),sMax(n);
        for(int i=0;i<n;i++)
        	cin >> a[i];
        preMin[0]=a[0];
        for(int i=1;i<n;i++)
            preMin[i]=(a[i]<preMin[i-1])? a[i]:preMin[i-1];
        sMax[n-1]=a[n-1];
        for(int i=n-2;i>=0;i--)
            sMax[i]=(a[i]>sMax[i+1])?a[i]:sMax[i+1];
        string res="";
        for(int i=0;i<n;i++){
            if(a[i]==preMin[i] || a[i]==sMax[i]) res+='1';
            else res+='0';
        }
        cout<<res<< '\n';
    }
}
//Problam link: https://codeforces.com/contest/2123/problem/C
