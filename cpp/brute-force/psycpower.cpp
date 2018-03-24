#include <iostream>
#include<stdio.h>
using namespace std;

int main(){
    string content;
    char data='j';
    int t, check=0;
    getline(cin, content);
    for(int a=0;a<content.length();a++){
        if(content[a] == data)
            t++;
        else
            t=1;
        if(t==6){
            check=1;
            break;
        }
        data=content[a];
    }
    if(check==1)
        cout<<"Sorry, sorry!";
    else 
        cout<<"Good luck!";
}