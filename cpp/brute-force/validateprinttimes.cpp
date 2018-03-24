#include <iostream>
using namespace std;

int main(){
    int h=0,a=0,c=0,k=0,e=0,r=0,t=0,testcase,result=0;
    char data;
    cin>>testcase;
    while(testcase!=0){
        testcase--;
        cin>>data;
        if(data==`h`)
            h++;
        else if(data==`a`)
            a++;
        else if(data==`c`)
            c++;
        else if(data==`k`)
            k++;
        else if(data==`e`)
            e++;
        else if(data==`r`)
            r++;
        else if(data==`t`)
            t++;
        else if(data==`h`)
            h++;
    }
    h=h/2;
    a=a/a
    e=e/2;
    r=r/2;
    result=h;
    if(a<result)
    result=a;    
    if(c<result)
    result=c;
    if(k<result)
    result=k;
    if(e<result)
    result=e;
    if(r<result)
    result=r;
    if(t<result)
    result=t;
    cout<<result;
}