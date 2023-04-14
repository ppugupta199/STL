// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
// make the vector size v
//     vector<int> v;
//     vector<int> a(5, 1);
//     for (int i : a)
//     {
//         cout << i << " ";
//     }
//     cout << endl;
//     v.push_back(1);
//     cout << "Capaacity -> " << v.capacity() << endl;

//     v.push_back(2);
//     cout << "Capaacity -> " << v.capacity() << endl;

//     v.push_back(3);
//     cout << "Capaacity -> " << v.capacity() << endl;
//     cout << "size -> " << v.size() << endl;

//     cout << "Element at 2nd index " << v.at(2) << endl;
//     cout << "Front element " << v.front() << endl;
//     cout << "last element " << v.back() << endl;
//     cout << "Before pos " << endl;
//     for (int i : v)
//     {
//         cout << i << " ";
//     }
//     cout << endl;
//     v.pop_back();
//     cout << "After the pop" << endl;
//     for (int i : v)
//     {
//         cout << i << " ";
//     }
//     cout << endl;

//     cout << "Before clear size " << v.size() << endl;
//     v.clear();
//     cout << "After the clear size " << v.size() << endl;

//     return 0;
// }

// print the 5 start using vector
// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> a(5, 1);
//     for (int i : a)
//     {
//         cout << "*"
//              << " ";
//         // cout << endl;
//         i--;

//         cout << "*";
//     }

//     return 0;
// }

// how to take the input in vector
// #include <bits/stdc++.h>
// using namespace std;
// void printvec(vector<int> &v)
// {
//     cout << "size " << v.size() << endl;
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
//     v.push_back(2);
// }
// int main()
// {
// int arr[5];
// vector<int> v;
// cout << "Eneter the size of element" << endl;
// int n;
// cin >> n;
// for (int i = 0; i < n; i++)
// {
//     cout << "Enter the print element" << endl;
//     int x;
//     cin >> x;
//     v.push_back(x);
// }
// printvec(v);
// vector<int> v;

// for (int i : v)
// {
//     cout << i << " ";
// }
// v.push_back(7);
// v.push_back(6);

// printvec(v);
// v.pop_back();
// printvec(v);
// vector<int> &v2 = v; // o(n);
// v2.push_back(5);
// printvec(v);
// printvec(v);
// printvec(v2);

//     return 0;
// }

// input take in stl
// abc
// def
// gshdj
// nsjdf
// skndfj
// #include <bits/stdc++.h>
// using namespace std;
// void printvec(vector<string> v)
// {
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     vector<string> v;
//     cout << "Enter the element" << endl;
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         string s;
//         cin >> s;
//         v.push_back(s);
//     }
//     printvec(v);

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void printvec(vector<pair<int, int>> &v)
// {
//     cout << "size " << v.size() << endl;
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i].first << " " << v[i].second << endl;
//     }
//     cout << endl;
// }
// int main()
// {
// vector<pair<int, int>> v;
// = {{1, 2}, {2, 3}, {3, 3}, {4, 4}};
//     printvec(v);
//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         int x, y;
//         cin >> x >> y;
//         v.push_back({x, y});
//     }
//     printvec(v);

//     return 0;
// }
// output will:-
//  {{1,2},{2,3},{3,3},{4,4}}

// output:-
//  3
//  3
//  1 2 3
//  3
//  3 4 5
//  2
//  1 2
// #include <bits/stdc++.h>
// using namespace std;
// void printvec(vector<int> v)
// {
//     cout << "size " << v.size() << endl;
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
// }
// int main()
// {
// create array
//     int N;
//     cin >> N;
//     vector<int> v[N];
//     for (int i = 0; i < N; i++)
//     {
//         int n;
//         cin >> n;
//         for (int j = 0; j < N; j++)
//         {
//             int x;
//             cin >> x;
//             v[i].push_back(x);
//         }
//     }
//     for (int i = 0; i < N; i++)
//     {
//         printvec(v[i]);
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void printv(vector<pair<int, int>> v)
// {
//     cout << "size" << v.size() << endl;
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
// }
// int main()
// {
// vector<int> v = {1, 2, 3, 4, 5, 6};
// for (int i : v)
// {
//     cout << i << " ";
// }
// cout << endl;
// v.push_back(5);
// v.push_back(6);
// cout << "before the pop" << endl;
// for (int i : v)
// {
//     cout << i << " ";
// }
// cout << endl;
// cout << "After the pop" << endl;
// v.pop_back();
// for (int i : v)
// {
//     cout << i << " ";
// }

// v.push_back(7);
// for (int i : v)
// {
//     cout << i << " ";
// }

// output{1,'sds};
// pair<int, string> p;
// p = make_pair(2, "abc");
// p = make_pair(3, "abcef");
// p = make_pair(4, "abcd");

// cout << p.first << " " << p.second << endl;
// pair<int, string> p1 = p;
// p1.first = 5;
// cout << p1.first << " " << p1.second << endl;
// cout << p.first << " " << p.second << endl;

// output = {1, 2, 3, 4, 5, 6, 6, 7};
//     vector<pair<int, int>> v;
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         int x, y;
//         cin >> x >> y;
//         v.push_back({x, y});
//     }
//     printv(v[i]);
//     ;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void printvec(vector<pair<int, int>> v)
// {

//     cout << "size" << v.size() << endl;
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i].first << " " << v[i].second << endl;
//     }
// }
// int main()
// {
//     vector<pair<int, int>> v;
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         int x, y;
//         cin >> x >> y;
//         v.push_back({x, y});
//     }
//     printvec(v);

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void printvec(vector<int> v)
// {
//     cout << "size " << v.size() << endl;
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
// }
// int main()
// {
//     // create array
//     int N;
//     cin >> N;
//     vector<int> v[N];
//     for (int i = 0; i < N; i++)
//     {
//         int n;
//         cin >> n;
//         for (int j = 0; j < N; j++)
//         {
//             int x;
//             cin >> x;
//             v[i].push_back(x);
//         }
//     }
//     for (int i = 0; i < N; i++)
//     {
//         printvec(v[i]);
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void printv(vector<int> v)
// {
//     cout << "size " << v.size() << endl;
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     vector<int> v;
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         v.push_back(x);
//     }

//     printv(v);
//     v.pop_back();
//     printv(v);

//     return 0;
// }

// 3
// 3
// 1 2 3
// 3
// 1 2 3
// 3
// 1 2 3
// 2
// 1 2
// #include <bits/stdc++.h>
// using namespace std;
// void ptintv(vector<int> &v)
// {
//     cout << "size " << v.size() << endl;
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
//     cout << endl;
// }
// int main()
// {
// int N;
// cin >> N;
// vector<int> v[N]; // create the vector of n size;
// for (int i = 0; i < N; i++)
// {
//     int n;
//     cin >> n;
//     for (int j = 0; j < n; j++)
//     {
//         int x;
//         cin >> x;
//         for (int i = 0; i < N; i++)
//         {
//             v[i].push_back(x);
//         }
//     }
//     for (int i = 0; i < N; i++)
//     {
//         ptintv(v[i]);
//     }
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int, int>> v = {{1, 2}, {3, 4}, {5, 6}};

    for (auto &values : v)
    {
        cout << values.first << " " << values.second << endl;
    }
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;
    // vector<int>::iterator it;
    // for (it = v.begin(); it != v.end(); it++)
    // {
    //     cout << (*it) << endl;
    // }
    //     auto a = 10;
    // cout << a << endl;
    return 0;
}