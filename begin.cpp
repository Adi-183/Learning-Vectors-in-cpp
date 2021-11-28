//print all elements of vectors using a begin function
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> vec{1,2,3,4,5};
    for (auto it=vec.begin(); it!=vec.end(); it++)
    {
        cout<<" "<<*it;
    }
    return 0;
}