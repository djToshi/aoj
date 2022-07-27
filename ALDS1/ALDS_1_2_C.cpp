#include <iostream>
using namespace std;

void selectionSort(string array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int minj = i;
        string tmp;
        for (int j = i; j < n; j++)
        {
            if (array[j] < array[minj])
            {
                minj = j;
            }
        }
        swap(array[i], array[minj]);
        // if (!(i == minj))
        // {
        //     p++;
        // }
    }
}

void bubbleSort(std::string array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > 0; j--)
        {
            if (array[j] < array[j - 1])
            {
                swap(array[j], array[j - 1]);
                i++;
            }
        }
    }
}

int main()
{
    int cnt;
    string ai;
    cin >> cnt;
    string a[cnt + 1];
    string b[cnt + 1];

    for (int i = 0; i < cnt; i++)
    {
        cin >> ai;
        a[i] = ai;
        b[i] = ai;
    }

    selectionSort(a, cnt);
    bubbleSort(b, cnt);

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

    for (int k = 0; k < cnt; k++)
    {
        if (k == cnt - 1)
        {
            cout << b[k] << endl;
        }
        else
        {
            cout << b[k] << " ";
        }
    }
    // cout << p << endl;
}
