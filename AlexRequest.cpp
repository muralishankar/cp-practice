#include<iostream>
using namespace std;
int main(){
    long N,Q,temp;
    cin>>N>>Q;
    long *alloc=new long[N];
    bool status=false;
    for(long a=0;a<N;a++){
        (*(alloc+a))=0;
    }
    while(Q>0){
        Q--;
        cin>>temp;
        status=false;
        for(long a=(N-1);a>=0;a--){            
            if((temp>=(a+1))&&(temp>(*(alloc+a)))){
                (*(alloc+a)) = temp;                
                status=true;
                break;
            }  
        }
        if(status)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}