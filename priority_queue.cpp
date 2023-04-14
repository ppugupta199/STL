#include <iostream>
#include <queue>
using namespace std;
int main()
{
    // maxi heap
    priority_queue<int> maxi;
    // mini heap
    priority_queue<int, vector<int>, greater<int>> mini;
    maxi.push(3);
    maxi.push(5);
    maxi.push(7);
    maxi.push(2);
    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << endl;
        maxi.pop();
    }
    cout << endl;

    mini.push(3);
    mini.push(5);
    mini.push(7);
    mini.push(2);
    int m = mini.size();
    for (int i = 0; i < n; i++)
    {
        cout << mini.top() << endl;
        mini.pop();
    }
    cout << "empty or not " << mini.empty() << endl;
    return 0;
}