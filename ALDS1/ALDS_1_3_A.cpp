#include <iostream>
#include <sstream> // istringstream
#include <string>
#include <stack>
#include <stdio.h>

using namespace std;
std::stack<string> st;

int calculate(string s)
{
    int op2 = atoi(st.top().c_str());
    st.pop();
    int op1 = atoi(st.top().c_str());
    st.pop();

    if (s == "+")
        return op1 + op2;
    else if (s == "-")
        return op1 - op2;
    else if (s == "*")
        return op1 * op2;
    else if (s == "/")
        return op1 / op2;
    return 0;
}

int main()
{
    string line;
    getline(cin, line);
    istringstream iss(line);
    string s;

    while (iss >> s)
    {
        if ((s == "+") || (s == "-") || (s == "*") || (s == "/"))
        {
            st.push(to_string(calculate(s)));
        }

        else
            st.push(s);
    }
    cout << st.top() << endl;
}
