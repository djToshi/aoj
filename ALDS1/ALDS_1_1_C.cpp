#include <iostream>
using namespace std;

int isPN(int n)
{

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int cnt, flg;
    int pn = 0;
    cin >> cnt;
    int a[cnt];
    for (int i = 0; i < cnt; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int j = 0; j < cnt; j++)
    {

        if (isPN(a[j]))
        {
            pn++;
        }
    }
    cout << pn << endl;
}
