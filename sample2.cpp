#include<iostream>

class IMeterReading
{
    public:
    virtual void readInstanData()=0;
};

class LnTMeters:public IMeterReading{
    void readInstanData(){
        std::cout<<"abstract class is implemented"<<std::endl;
    }
};
int main(){
    IMeterReading *iread = new LnTMeters;
    iread->readInstanData();
    return 0;
}