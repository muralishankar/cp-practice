#include<iostream>
using namespace std;
int main(){
    string data;
    long length=0;
    getline(cin, data);
    for(long a=0;a<data.length();a++){        
        if(data[a]==' ')
        length++;
    }
    cout<<length<<endl;
    
}