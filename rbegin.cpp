//print elements in reverse through rbegin
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v{1,23,432,21,22};
    for (auto it=v.rbegin(); it!=v.rend(); it++)
    {
        cout<<" "<<*it;
    }
    return 0;
}