#include <iostream>
#include <vector>

using namespace std;

int main()
{
    typedef std::pair<string, int> pair;
    std::vector<pair> v;
    std::vector<pair> v2;

    int n, q, time;
    int total_time = 0;
    int head = 0;
    int tail = 0;
    char name[100];
    scanf("%d%d", &n, &q);
    for (int i = 0; i < n; ++i)
    {
        scanf("%s%d", name, &time);
        v.push_back(pair(name, time));
        tail++;
    }

    while (head != tail)
    {

        if (v[head].second - q > 0)
        {

            total_time = total_time + q;
            v.push_back(pair(v[head].first, v[head].second - q));
            v.erase(v.begin());
        }
        else if (v[head].second - q <= 0)
        {
            total_time = total_time + v[head].second;
            v2.push_back(pair(v[head].first, total_time));
            v.erase(v.begin() + head);
            tail--;
        }
    }
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i].first << " " << v2[i].second << endl;
}
