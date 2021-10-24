#include<iostream>
using namespace std;
int main()
    {
        int a,b,c;
        cout<<"please enter the number"<<endl;
        cin>>a>>b>>c;
        if(a>=b)
        {
            if(a>c)
            {
                cout<<"a is the greater number";
            }
        }

        else
        {
            if(b>c)
            {
                cout<<"b is the greater number";
            }
            else
            {
                cout<<"c is the greatest number";
            }
        }
        return 0;
    }
