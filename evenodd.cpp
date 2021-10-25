#include<iostream>
using namespace std;

int oddeven (int num)
{
    // return 1 ? 0 : (num % 2 == 0);
    if (num % 2 == 0)
    {
        return 0;
    }
    return 1;
}

int main()
{
    int num;
    cout << "Enter a number\n";
    cin >> num;
    int res = oddeven(num);
    if (res == 0)
    {
        cout << "Num is even\n";
    }
    else
    {
        cout << "Num is odd\n";
    }
    return 0;
}