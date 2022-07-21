#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    double d = (double)a / b;

    printf("%d %d %f\n", a / b, a % b, d);
}
