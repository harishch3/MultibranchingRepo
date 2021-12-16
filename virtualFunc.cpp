#include<iostream>
#include<string.h>

void setDataAsFriend();
class copySample{
    private:
    int a,b;

    char *data;
    
    public:
    copySample(int a,int b,const char *pamdata){
        this->a = a;
        this->b = b;
        data = new char(20);
        strcpy(data,pamdata);
    }
    copySample( copySample &copyS)
    {
        copyS.a = 45;
        this->a = copyS.a;
        this->b = copyS.b;
        data = new char(20);
        strcpy(data,copyS.data);
    }
    copySample( copySample *copyS)
    {
        std::cout<<"in pointer logic"<<std::endl;
        copyS->a = 45;
        this->a = copyS->a;
        this->b = copyS->b;
        data = new char(20);
        strcpy(data,copyS->data);
    }
    int getA()
    {
        return a;        
    }

    int getB()
    {
        return b;
    }

    char* getData()
    {
        return data;
    }

    void setA(int a)
    {
        this->a=a;
    }
    void setB(int b){
        this->b=b;
    }
    void setData(const char *upData)
    {
        memset(data,'\0',sizeof(data));
        strcpy(data,upData);
    }

    friend void setDataAsFriend();
};

void setDataAsFriend(){
//copySample cs;
 copySample cs(10,20,"Harish");
 cs.setA(25);
 std::cout<<"CS object data: "<<"a:"<<cs.getA()<<" b:"<<cs.getB()<<" s:"<<cs.getData()<<std::endl;  
}

int main()
{
    copySample c(10,20,"Harish");
    copySample c2=c;
    //c=nullptr;
    copySample c3(&c);
    std::cout<<"C3 object data:"<<"a:"<<c3.getA()<<" b:"<<c3.getB()<<" s:"<<c3.getData()<<std::endl;  

    c.setA(30);
    c.setB(40);  

    std::cout<<"C object data: "<<"a:"<<c.getA()<<" b:"<<c.getB()<<" s:"<<c.getData()<<std::endl;  
    std::cout<<"C2 object data:"<<"a:"<<c2.getA()<<" b:"<<c2.getB()<<" s:"<<c2.getData()<<std::endl;  
  
    c.setData("Chikkha");
    c2.setA(300);
    c2.setB(400);
    
    std::cout<<"C object data: "<<"a:"<<c.getA()<<" b:"<<c.getB()<<" s:"<<c.getData()<<std::endl;  
    std::cout<<"C2 object data:"<<"a:"<<c2.getA()<<" b:"<<c2.getB()<<" s:"<<c2.getData()<<std::endl;  
    setDataAsFriend();
    return 0;
}