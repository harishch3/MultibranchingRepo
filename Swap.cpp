#include<iostream>

int main()
{
    int a,b,c;

    a= 10;
    b=20;

    std::cout<<" a: "<<a<<" b:"<<b<<std::endl;
    a = a + b;  // a = 10 + 20 = 30;
    b = a - b; // b = 30 -20 = 10;
    a = a - b;  // a = 30 -10  = 20;

    std::cout<<" a: "<<a<<" b:"<<b<<std::endl;
    return 0;
}