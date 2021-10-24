#include<iostream>
using namespace std;

// void maxnum(int a, int b, int c) {
//     if (a > b)
//     {
//         if (a > c)
//         {
//             cout << "Number " << a << "(a) is the greatest" << endl;
//         }
//         else
//         {
//             cout << "Number " << c << "(c) is the greatest" << endl;
//         }
//     }
//     else
//     {
//         if (b > c)
//         {
//             cout << "Number " << b << "(b) is the greatest" << endl;
//         }
//         else
//         {
//             cout << "Number " << c << "(c) is the greatest" << endl;
//         }
//     }
// }

int maxnum(int a, int b, int c)
{
    if (a > b)
    {
        if (a > c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        if (b > c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}

int main()
{
    int a, b, c;
    cout << "Enter 3 numbers\n";
    cin >> a >> b >> c;
    int res = maxnum(a,b,c);
    cout << "Number " << res << " is the greatest" << endl;
    // maxnum(a,b,c);
    return 0;
}