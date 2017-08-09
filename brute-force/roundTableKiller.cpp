#include<iostream>
using namespace std;
int total,x,k,temp;
void startKill(int x);
int* l=NULL;
int main(){
    cin>>total>>k>>x;
    l=new int[total];
    startKill();
}
void startKill(){
    temp=x%k;
    if(temp==0)
        x=x>total?(x%total)+1:x;
    else{
        while(int y=temp;){
            
        }
    }
}