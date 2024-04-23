#include <bits/stdc++.h>
using namespace std;

int a[1001]; 

void sort(int l,int r){
    if(l>=r) return;
    int i=l,j=r;
    int x=a[l];
    while(i!=j){
        while(i<j&&a[j]<=x) j--;
        while(i<j&&a[i]>=x) i++;
        int t;
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    a[l]=a[i];
    a[i]=x;
    sort(l,i-1);
    sort(i+1,r);
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(0,n-1);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}