#include<iostream>
#include<stdio.h>
#include <map>
using namespace std;
int main(){
    int x,n,q,a;
    string messageVar="";
    std::map<char,int> mymap;
    mymap['a']=0;
    mymap['b']=1;
    mymap['c']=2;
    mymap['d']=3;
    mymap['e']=4;
    mymap['f']=5;
    mymap['g']=6;
    mymap['h']=7;
    mymap['i']=8;
    mymap['j']=9;
    mymap['k']=10;
    mymap['l']=11;
    mymap['m']=12;
    mymap['n']=13;
    mymap['o']=14;
    mymap['p']=15;
    mymap['q']=16;
    mymap['r']=17;
    mymap['s']=18;
    mymap['t']=19;
    mymap['u']=20;
    mymap['v']=21;
    mymap['w']=22;
    mymap['x']=23;
    mymap['y']=24;
    mymap['z']=25;


    char temp;
    string data="abcdefghijklmnopqrstuvwxyz",newdata="";
    cin>>x;
    while(x>0){
        x--;
        cin>>n>>q;
        cin.ignore(); 
        getline(cin, messageVar);
        int *l=new int[q];
        int *r=new int[q];
        for(int zz=0;zz<q;zz++){
            cin>>*(l+zz)>>*(r+zz);
        }        
        while(q>0){            
            q--;
            for(int b=0;b<messageVar.length();b++){
                if(b>=(*(l+q)-1)&&b<=(*(r+q)-1)){
                    temp=messageVar[b];
                    a=mymap.find(temp)->second;
                    if(data[a]==temp){
                        if((a-1)<0)
                            temp=data[25];
                        else
                            temp=data[a-1];
                        messageVar[b]=temp;
                    }
                }
            }
        }
        cout<<messageVar<<endl;
    }    
    return 0;
}