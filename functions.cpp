#include<iostream>
using namespace std;

void print(int x)
{
    cout << x << endl;
}

void print(char x)
{
    cout << x << endl;
}

int main()
{
    print('a');
    return 0;
}