#include <iostream>
#include <queue>
using namespace std;
int main()
{
    // queue works on FIFO(first in first out);
    queue<string> q;
    q.push("pappu");
    q.push("kumar");
    q.push("gupta");
    cout << "first element " << q.front() << endl;
    q.pop();
    cout << "First element " << q.front() << endl;
    cout << "Size of element " << q.size() << endl;
    cout << "Empty or not " << q.empty() << endl;

    return 0;
}