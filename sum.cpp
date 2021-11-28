//isllustrate sum using empty function
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0;
    vector <int> v{1,2,3,4,5};
    while (!v.empty())
    {
        sum=sum+v.back();
        v.pop_back();
    }
    cout<<sum;
}