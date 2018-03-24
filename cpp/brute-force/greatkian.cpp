#include <iostream>
using namespace std;

int main()
{
    int testcase=0,data,temp;
    long temp1,temp2,temp3;
    cin>>testcase;
    for(int a=1;a<testcase;a++){
        cin>>data;
        temp=a%3;
        if(temp==1)
            temp1+=data;
        else if(temp==2)
            temp2+=data;
        else if(temp==0)
            temp3+=data;
    }
    cout<<temp1<<" "<<temp2<<" "<<temp3;
    return 0;
}
