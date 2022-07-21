#include <iostream>
using namespace std;
int p;

void selectionSort(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int minj = i;
        int tmp;
        for (int j = i; j < n; j++)
        {
            if (array[j] < array[minj])
            {
                minj = j;
            }
        }
        tmp = array[i];
        array[i] = array[minj];
        array[minj] = tmp;
        if (!(i == minj))
        {
            p++;
        }
    }
}

int main()
{
    int cnt;
    int i = 0;
    cin >> cnt;
    int a[cnt];

    for (int i = 0; i < cnt; i++)
    {
        scanf("%d", &a[i]);
    }
    selectionSort(a, cnt);

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
    cout << p << endl;
}
