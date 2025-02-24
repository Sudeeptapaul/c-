#include<iostream>
using namespace std;
class celtofah{
    private:
    double celt,fah;
    public:
    celtofah(int cel)
    {
        celt=cel;
        fah=((9*celt)/5)+32;
        cout<<"the temperature is: "<<fah<<" degree f"<<endl;
    }
};
int main()
{
  
    int cel;
    cout<<"enter the temp: ";
    cin>>cel;
    celtofah obj(cel);
    return 0;
}