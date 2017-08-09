#include<iostream>


using namespace std;
long numberOfBulb(char a);
int main(){
    int testcase=0;
    unsigned long long int n,data=8,length,minBulb,temp=0,Number=0,a,b,c;
    string buffer,content;
    cin>>testcase;
    while(testcase!=0){
        cin>>length;
        temp=0;
        while(length!=0){
            cin>>buffer;
            minBulb=0;
            for(b=0;b<buffer.length();b++){
                minBulb+=numberOfBulb(buffer[b]);
            }
            if(minBulb<temp || (temp==0)){
                temp=minBulb;
                content=buffer;
            }
            length--;
        }
        cout<<content<<endl;
        testcase--;
    }

}

long numberOfBulb(char a){
    long temp;
    switch(a){
        case '1':
        temp=2;
        break;
        case '2':
        temp=5;
        break;
        case '3':
        temp=5;
        break;
        case '4':
        temp=4;
        break;
        case '5':
        temp=5;
        break;
        case '6':
        temp=6;
        break;
        case '7':
        temp=3;
        break;
        case '8':
        temp=7;
        break;
        case '9':
        temp=6;
        break;
        case '0':
        temp=6;
        break;
        
    }
    return temp;
}