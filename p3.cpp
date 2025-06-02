#include <iostream>
using namespace std;
class cal
{
    int x,y;
    public:
    cal()
    {
        cout<<"Constructor Begins"<<endl;
        cout<<"Enter value of x:";
        cin>>x;
        cout<<"Enter Value of y:";
        cin>>y;
    }
    ~cal()
    {
        cout<<"The sum is:"<<x+y<<endl;
        cout<<"The multiplication is:"<<x*y<<endl;
        cout<<"The division is:"<<x/y<<endl;
        cout<<"The subtraction is:"<<x-y<<endl;
        cout<<"The constructor Ends";
    }
};
int main()
{
    cal c;
    return 0;
}
