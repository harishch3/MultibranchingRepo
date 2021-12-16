#include<iostream>

using namespace std;

class MyDetails{
    private:
    int age;    
    float sal;
    public:
    MyDetails()
    {
        age=22;
        sal=0;
    }
    MyDetails(int age,float sal):sal(sal),age(age){}

    friend ostream& operator<<(ostream &ot, MyDetails &md){
        ot<<"Age:"<<md.age<<" Salary:"<<md.sal;    
        return ot;
    }    
    
    MyDetails operator=(MyDetails& md)
    {
        MyDetails temp;
        temp.age = md.age;
        temp.sal = md.sal;
        return temp;
    }
};
/*
ostream& operator<<(ostream &ot, MyDetails &md)
{

}*/
int main()
{
    MyDetails md(28,65000);
    cout<<md<<endl;
    MyDetails md1;
    md1.operator=(md);
    cout<<md1;
}
