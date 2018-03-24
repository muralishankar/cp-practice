#include <bits/stdc++.h>
using namespace std;
int jumpSearch(int a[],int x,int length);
int main(){
int a[]= {11,22,33,44,55,66,77,88,99,110,121,132,134,145,156,165,176,187,198,210};
int length=sizeof(a)/sizeof(length);
int target=156;
jumpSearch(a,target,length)==-1?cout<<"item not found"<<endl:cout<<"item found"<<endl;
target=556;
jumpSearch(a,target,length)==-1?cout<<"item not found"<<endl:cout<<"item found"<<endl;
}
int jumpSearch(int a[],int x,int n){
    int steps=sqrt(n);
    int prev=0;
    while(a[min(n,steps)-1]<x){
        prev=steps;
        steps += sqrt(n);
        if(prev>n)
            return -1;
    }
    while(prev<min(n,steps)&&a[prev]<(x+1)){
        prev++;
        if(x==a[prev])
            return prev;
    }
    return -1;
}