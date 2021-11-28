//illustrating clear and erase function in vectors
// v.clear() clears all elements of a vector and makes it empty
//v.erase(position) deletes element at that position
//v.erase(startingposition,endingposition) deletes all elements from startingposition to endingposition
//NOTE-positions must be in iterators
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v {1,2,3,4,5};
    //v.clear();
    
    v.erase(v.begin(),v.begin()+3);
    for (auto it=v.begin(); it!=v.end();it++) cout<<" "<<*it;
    return 0;
} 