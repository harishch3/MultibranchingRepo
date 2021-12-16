#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	vector<int> myList = {5,3,334,566,5,13434,43,23,5656};
	for(int a: myList)	{
		cout<<a<<endl;
	}

	sort(myList.begin(),myList.end());
	 for(int a: myList)      {
                cout<<a<<endl;
        }

	return 0;
}
