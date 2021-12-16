#include<iostream>

using namespace std;

class overloadtest
{
private:
    /* data */
    float c;
    double d;
public:
    overloadtest(/* args */){
        c=0.00;
        d=0.00;
    }

    void add(float a,float b)
    {
        cout<<"in float"<<endl;
        c= a+b;
    }
    void add(double a,double b)
    {
        cout<<"in double"<<endl;
        d= a+b;
    }

    ~overloadtest();
};

overloadtest::~overloadtest()
{
}

int main()
{
    overloadtest o;
    o.add(2.0,6.0);
    return 0;
}