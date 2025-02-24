#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length;
    int width;
    public:
    rectangle()
    {
        length=0;
        width=0;
        cout<<"length is : "<<length<<endl;
        cout<<"width is : "<<width<<endl;
    }
    rectangle(int side)
    {
        length=side;
        width=side;
        cout<<"length is : "<<length<<endl;
        cout<<"width is : "<<width<<endl;
    }
    rectangle(int l,int w)
    {
        length=l;
        width=w;
        cout<<"length is : "<<length<<endl;
        cout<<"width is : "<<width<<endl;
    }
};
int main()
{
    cout<<"rectangle1: ";
    rectangle rect1;
     cout<<endl<<"rectangle2: ";
    rectangle rect2(10);
     cout<<endl<<"rectangle3: ";
    rectangle rect3(10,20);
    return 0;
}