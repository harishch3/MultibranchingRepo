#include<iostream>
#include<vector>
#include<set>
#include<map> 
#include<algorithm>

using namespace std;

int main()
{

    vector<int> myInts;

    for(int i=10;i>0;i--)
    {
        myInts.push_back((i +  3)*2);
    }
    cout<<" Before sorting:"<<endl;
    for(int i=0;i<myInts.size();i++)
    {
        cout<<myInts[i]<<endl;        
    }
     bool isFound1 = binary_search(myInts.begin(),myInts.end(),10);

    cout<<" is found:"<<isFound1<<endl;
    sort(myInts.begin(),myInts.end());
    cout<<" After sorting:"<<endl;
    for(int i=0;i<myInts.size();i++)
    {
        cout<<myInts[i]<<endl;
    }
    bool isFound = binary_search(myInts.begin(),myInts.end(),1);

    cout<<" is found:"<<isFound<<endl;

    map<char,int> h;

    string s="harish";
    for (char c: s) // each characters is pushed into the map in sequential format with ke
    {
        h[c]++;
    }
    cout<<h['h']<<" "<<h.size()<<endl;
    return 0;
}