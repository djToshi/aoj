#include <iostream>
using namespace std;
int main()
{
    int cnt, flg, wk;
    int i = 0;
    cin >> cnt;
    int a[cnt];

    for (int i = 0; i < cnt; i++)
    {
        scanf("%d", &a[i]);
    }

    flg = 1;
    while (flg)
    {
        flg = 0;
        for (int j = cnt - 1; j > 0; j--)
        {
            if (a[j - 1] > a[j])
            {
                wk = a[j];
                a[j] = a[j - 1];
                a[j - 1] = wk;
                i++;
                flg = 1;
            }
        }
    }
    for (int k = 0; k < cnt; k++)
    {
        if (k == cnt - 1)
        {
            cout << a[k] << endl;
        }
        else
        {
            cout << a[k] << " ";
        }
    }
    cout << i << endl;
}
