#include <iostream>
using namespace std;

int main()
{
    long a, b, a1, result, total,temp=0;
    int content[7];
    string data;
    cin>>a;
    while(a!=0)
    {
        a--;
        cin>>b;
        for (int b3 = 0; b3 <7; b3++)
        {
            cin>>content[b3];
        }
        total = 0;
        temp=0;
        while (total >= b)
        {
            for (int a3 = 0; a3 <7; a3++)
            {
                total += content[a3];
                if(total>=b)
                {
                    temp = a3;
                    break;
                }
            }                
        }
        switch (temp)
        {
            case 6:
                cout<<"SUNDAY";
                break;
            case 0:
                cout<<"MONDAY";
                break;
            case 1:
                cout<<"TUESDAY";
                break;
            case 2:
                cout<<"WEDNESDAY";
                break;
            case 3:
                cout<<"THURSDAY";
                break;
            case 4:
                cout<<"FRIDAY";
                break;
            case 5:
                cout<<"SATURDAY";
                break;
        }
    }
}
