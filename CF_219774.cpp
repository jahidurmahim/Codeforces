                                                                //     Bismillahir Rahmanir Rahim     //
                                                               //        Jahidur Rahman Mahim        //
                                                              //        AUTHOR : jahidurmhaim       //
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,c=0;
    cin>>t;
    int array[t];
    for(int i=0;i<t;i++) cin>>array[i];
    int min=array[0];
    for(int i=0;i<t;i++){
    	if(array[i]<min) min=array[i];}
    for(int i=0;i<t;i++){
    	if(array[i]==min) c++;
    }
    if(c%2!=0) cout<<"Lucky"<<endl;
    else cout<<"Unlucky"<<endl;
    return 0;
}

//problam link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J









