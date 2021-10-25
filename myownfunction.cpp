#include<iostream>
using namespace std;

void circle (int radius)
{
    cout<<"perimeter is "<<2*3.14*radius<<endl;
    cout<<"area is "<<3.14*radius*radius<<endl;
}

int main()
{
    int radius;
    cout<<"enter the radius of circle ";
    cin>>radius;
    circle(radius);
    return 0;
}