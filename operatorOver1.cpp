#include<iostream>

using namespace std;

class opoverload{
    public:
    int a;
    opoverload& operator=(opoverload &op);
};
const opoverload& operator=(const opoverload& a) {
cout << "+Integer\n";
return a; // Unary + has no effect
}
 

int main()
{
    opoverload a1;
    a1.a = 20;
    cout<<"a1.a:"<<a1.a<<endl;
    opoverload a2;
    a2=a1;
    cout<<"a2.a:"<<a2.a<<endl;
}