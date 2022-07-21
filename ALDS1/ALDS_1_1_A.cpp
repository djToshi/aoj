#include <iostream>
using namespace std;
int main()
{
    int cnt, v, j;
    cin >> cnt;
    int a[cnt];

    for (int i = 0; i < cnt; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 1; i < cnt + 1; i++)
    {
        for (int k = 0; k < cnt; k++)
        {
            if(k == cnt-1){
                cout << a[k] << endl;
            }else{
                cout << a[k] << " ";
            }
            
        }
        v = a[i];
        j = i - 1;
        while ((j >= 0) && (a[j] > v))
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = v;
    }
}
