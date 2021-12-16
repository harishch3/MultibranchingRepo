#include<iostream>

using namespace std;

/*
class destrucSam
{
	public:
		destrucSam()
		{
			cout<<"in constructor"<<endl;
		}
		~destrucSam()
		{
			cout<<"in destructor"<<endl;
		}
};*/
class IMeterReading
{
	public:
	virtual void readInstantData()
	{
		cout<<"\n Reading Instant meter data"<<endl;
	}
	void readHistoryData()
	{
		cout<<"\n Reading Meter History data"<<endl;
	}	
    virtual ~IMeterReading()
	{
		cout<<"\n IMeterReading destructor called"<<endl;
	}
};

class CLnTMeterReading : public IMeterReading
{
	public:
	void readInstantData()
	{
		cout<<"\n Reading LnT Instant meter data"<<endl;
	}
	void readHistoryData()
	{
		cout<<"\n Reading LnT Meter History data"<<endl;
	}	
	~CLnTMeterReading()
	{
		cout<<"\n CLnTMeterReading destructor called"<<endl;
	}
};

class CGenusMeterReading : public CLnTMeterReading
{
	public:
	void readInstantData()
	{
		cout<<"\n Reading Genus Instant meter data"<<endl;
	} 
	~CGenusMeterReading()
	{
		cout<<"\n CGenusMeterReading destructor called"<<endl;
	}
};


int main()
{
	//CLnTMeterReading lntObj;
	
	IMeterReading *iMtrObj = new CLnTMeterReading;	
	//iMtrObj = &lntObj;
	
	
	iMtrObj->readInstantData(); // polymorphic funtion call  -- Binding happens at runtime i.e late binding
	
	//lntObj.readInstantData(); // Normal function call  -- Binding happends at compiletime i.e early binding
		
	//CGenusMeterReading genusObj;
	//genusObj.readInstantData();
	//genusObj.readHistoryData();
	delete iMtrObj;
	return 0;
}


//Lnt,genus,