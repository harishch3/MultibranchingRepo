#include<iostream>

using namespace std;
class harishPersonalData;
class harishCapgemData;
class mohanPersonalData;
class chikkarajuCommonData;
void OutsideAccess_harishPWD(harishPersonalData *,harishCapgemData *);



class harishPersonalData{
    private: 
            int unique_pwd;
    public:
        void set_unique_pwd(int uniq_pwd){
            unique_pwd = uniq_pwd;
        }
        int get_unique_pwd()
        {
            return unique_pwd;
        }
        friend void OutsideAccess_harishPWD(harishPersonalData*,harishCapgemData*);
};

class mohanPersonalData{
    private: 
            int unique_pwd;
    public:
        void set_unique_pwd(int uniq_pwd){
            unique_pwd = uniq_pwd;
        }
        int get_unique_pwd()
        {
            return unique_pwd;
        }
       // friend void OutsideAccess_harishPWD(harishPersonalData*,harishCapgemData*);
};

class chikkarajuCommonData : public harishPersonalData,mohanPersonalData
{

};

class harishCapgemData{
    private:
            int pass_key;
    public:
            void set_pass_key(int passKey)
            {
                pass_key = passKey;                
            }        
            int get_pass_key()
            {
                return pass_key;
            }
        friend void OutsideAccess_harishPWD(harishPersonalData*,harishCapgemData*);
};
void OutsideAccess_harishPWD(harishPersonalData *hObj,harishCapgemData *capObj)
{ 
    hObj->unique_pwd = 8201;
    capObj->pass_key = 8202;
}

int main(){
    harishPersonalData mObj;
    harishCapgemData cap1Obj;
    mObj.set_unique_pwd(9201);
    cout<<mObj.get_unique_pwd()<<endl;
    cap1Obj.set_pass_key(9202);
    cout<<cap1Obj.get_pass_key()<<endl;
    OutsideAccess_harishPWD(&mObj,&cap1Obj);
    cout<<mObj.get_unique_pwd()<<endl;
    cout<<cap1Obj.get_pass_key()<<endl;


    chikkarajuCommonData chikObj;
    cout<<harishPersonalData::()<<endl;
}