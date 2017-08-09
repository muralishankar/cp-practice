#include<iostream>
using namespace std;
int main(){
    char data[4][4],lastvalue,tempdata[4];
    bool win;
    int cross=0,dot=0,index=0,space=0,left=0,right=0,iterator,testcase,temp=0;
    cin>>testcase;
    while(testcase>0){
        testcase--;
        for(int a=0;a<4;a++)
        {        
            for(int b=0;b<4;b++){
                cin>>data[a][b];
            }
        }
        win=false;
        for(int a=0;a<4;a++)
        {            
            for(int b=3;b<5;b++) {
                cross=0,space=0;
                for(int e=3;e>0;e--){
                    if(data[a][b-e]=='.')
                        space++;
                    else if(data[a][b-e]=='x')
                        cross++;
                }
                if(space==1 &&cross==2)
                {
                        win=true;
                }
                //cout<<"space "<<space<<" cross"<<cross<<endl;
            }
        }
        if(!win)
        for(int a=0;a<4;a++)
        {
            for(int b=3;b<5;b++) {
                cross=0,space=0;
                for(int e=3;e>0;e--){
                    if(data[b-e][a]=='.')
                        space++;
                    else if(data[b-e][a]=='x')
                        cross++;
                }
                if(space==1 &&cross==2)
                {
                        win=true;
                }
                //cout<<"space "<<space<<" cross"<<cross<<endl;
            }
        }
        if(!win)
        for(int a=-1;a<2;a++)
        {
            temp=a;    
            
            for(int b=0;b<4;b++,temp++) {
                if(temp>-1&&temp<4){
                    tempdata[b]=data[b][temp];
                }
                else
                    tempdata[b]='o';
            }
            for(int b=3;b<5;b++) {
                cross=0,space=0;
                for(int e=3;e>0;e--){
                    if(tempdata[b-e]=='.')
                        space++;
                    else if(tempdata[b-e]=='x')
                        cross++;
                }
                if(space==1 &&cross==2)
                {
                        win=true;
                }
                //cout<<"space "<<space<<" cross"<<cross<<endl;
            }            
        }
        if(!win)
        for(int a=2;a<5;a++)
        {
            temp=a;    
            
            for(int b=0;b<4;b++,temp--) {
                if(temp>-1&&temp<4){
                    tempdata[b]=data[b][temp];
                }
                else
                    tempdata[b]='o';
            }
            for(int b=3;b<5;b++) {
                cross=0,space=0;
                for(int e=3;e>0;e--){
                    if(tempdata[b-e]=='.')
                        space++;
                    else if(tempdata[b-e]=='x')
                        cross++;
                }
                if(space==1 &&cross==2)
                {
                        win=true;
                }
                //cout<<"space "<<space<<" cross"<<cross<<endl;
            }            
        }
        if(win)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    
    return 0;
}