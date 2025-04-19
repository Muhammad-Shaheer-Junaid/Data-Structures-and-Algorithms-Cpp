#include <iostream>;
#include <stack>;
using namespace std;
void reverseString(string str)
{
    stack<char> s;
    string reversed;
    for (char c : str)
    {
        s.push(c);
    }
    while (!s.empty())
    {
        reversed += s.top();
        s.pop();
    }
    cout << reversed;
}
int main()
{
    // stack<int> s;
    // s.push(10);
    // s.push(20);
    // s.push(30);
    // cout << s.size();
    reverseString("hello");

    return 0;
}