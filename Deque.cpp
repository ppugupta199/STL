#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> d;
    // push the Element
    d.push_back(1);
    d.push_front(2);
    // for (int i : d)
    // {
    //     cout << i << " ";
    // }
    cout << endl;
    // pop the element
    // d.pop_back();

    // for (int i : d)
    // {
    //     cout << i << endl;
    // }

    cout << endl;
    cout << "present element at " << d.at(1);
    cout << endl;
    cout << "Empty Element " << d.empty() << endl;
    cout << "before the erase " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "after the erase " << d.size() << endl;
    for (int i : d)
    {
        cout << i << endl;
    }

    return 0;
}