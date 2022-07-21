#include <iostream>
using namespace std;
int main()
{
    int a, b, wk, z, r;
    cin >> a;
    cin >> b;

    if (a < b)
    {
        wk = a;
        a = b;
        b = wk;
    }
    r = a % b;
    while (r != 0)
    {
        a = b;
        b = r;
        r = a % b;
    }
    cout << b << endl;
}
