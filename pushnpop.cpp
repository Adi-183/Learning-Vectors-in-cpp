//illustrating push and pop in vectors
//v.push_back(someval) this adds someval as an element at the end of vector and increases the v.size() by one
//v.pop_back this removes the last element of vector and devreases v.size by one
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v ={1,2,3};
    cout<<v.size()<<endl;
    v.push_back(4);
    cout<<v.size()<<endl;
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout<<v.size()<<endl;
    for (int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}


