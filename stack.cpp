#include <iostream>
#include <stack>
using namespace std;
int main()
{
    // LIFO :-  it works in (LIFO)last in  first out.
    stack<string> s;
    s.push("pappu");
    s.push("kumar");
    s.push("gupta");
    cout << "Top element of " << s.top() << endl;
    s.pop();
    cout << "Top element of " << s.top() << endl;
    cout << "size of stack  " << s.size() << endl;
    cout << "empty or not     " << s.empty() << endl;

    return 0;
}