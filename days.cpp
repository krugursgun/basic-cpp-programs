#include<iostream>
using namespace std;
int main()
{
    
    int day;
    cout<<"enter the day's number ";
    cin>>day;
    switch(day)
    {
        case 1:
        cout<<"sunday";
        break;

        case 2:
        cout<<"monday";
        break;

        case 3:
        cout<<"tuesday";
        break;

        case 4:
        cout<<"wednesday";
        break;

        case 5:
        cout<<"thursday";
        break;

        case 6:
        cout<<"friday";
        break;

        case 7:
        cout<<"saturday";
        break;

        default:
        cout<<"there are no days for this number";
    }
    return 0;
}
