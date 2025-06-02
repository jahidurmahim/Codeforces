                                                    //     Bismillahir Rahmanir Rahim     //
                                                   //        Jahidur Rahman Mahim        //
                                                  //        AUTHOR : jahidurmhaim       //

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int min=0, max=0;
    for(int i=1;i<n;i++){
        if(a[i]<a[min]) min=i;
        if(a[i]>a[max]) max=i;
    }
    int temp=a[min];
    a[min]=a[max];
    a[max]=temp;
    for(int i=0; i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}

//Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M
