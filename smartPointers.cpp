#include<iostream>

using namespace std;

class smartObject
{
    int *ptr;
    public:

    smartObject(int *p=nullptr)
    {
        ptr= p;
    }
    ~smartObject(){
        cout<<"\n deleting ptr when gone out of scope\n";
        delete (ptr);
    }

    int& operator*()
    {
        return *ptr;
    }
};

int main()
{
    int *p1=new int(10);
 //   *p1=6985;
    smartObject s(p1);
   // *s=20;
    cout<<*s;
}