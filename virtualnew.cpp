#include<iostream>

using namespace std;

class DlmsMeterReading{

    public:
    virtual void readInstantData()
    {
        cout<<"\n in DlmsMeterReading class"<<endl;
    }    
    virtual void readHistories()
    {
        cout<<"\n in DlmsMeterReading-readHistories"<<endl;
    }
};

class LntDlmsMeterReading : public DlmsMeterReading{
    public:
    void readInstantData()
    {
        cout<<"\n in LntDlmsMeterReading class"<<endl;
    }
};

class LntLegacyMeterReading : public LntDlmsMeterReading
{
    public:
    void readInstantData()
    {
        cout<<"\n in LntLegacyMeterReading class"<<endl;
    }
};

void readMeterData(DlmsMeterReading &mtrRdgObj)
{
    mtrRdgObj.readInstantData();
    mtrRdgObj.readHistories();
}

int main()
{
    LntLegacyMeterReading lntObj;
    readMeterData(lntObj);
    return 0;
}