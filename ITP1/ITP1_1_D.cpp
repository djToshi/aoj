#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    int hh;
    int mm;
    int ss;
    cin >> a;

    hh = a / 3600;
    mm = (a - (hh * 3600)) / 60;
    ss = (a - (hh * 3600)) - (60 * mm);

    cout << hh << ":" << mm << ":" << ss << endl;
}