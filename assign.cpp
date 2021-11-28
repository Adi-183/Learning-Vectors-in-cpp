//assign v.assign(int size,int value)
//assign v.assign(arr, arr+n) --> this assigns first n elements of arr to the vector v
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v;
    v.assign(7,3);
    for (int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int arr[6]= {1,2,3,4,5,6};
    vector <int> v1;
    v1.assign(arr,arr+4);
    for (int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
}