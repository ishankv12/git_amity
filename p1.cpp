#include<iostream> //greatest among 3 numbers
using namespace std;
class hello
{
    public:
    float x,y;
    void hello1();
    void add();
    void sub();
    void mul();
    void div();
};
void hello::hello1()
{
    cout<<"Hello D1 Wake Up again!!"<<endl;
}
void hello::add()
{
    cout<<"The sum is:"<<x+y<<endl;
}
void hello::sub()
{
    cout<<"The subtraction is:"<<x-y<<endl;
}
void hello::mul()
{
    cout<<"The multiplication is:"<<x*y<<endl;
}
void hello::div()
{
    cout<<"The division is:"<<x/y<<endl;
}
int main()
{
    hello h;
    cout<<"Enter value of x and y:";
    cin>>h.x>>h.y;
    if(cin.fail())
    {
        cout<<"Enter number only";
        return 1;
    }
    h.hello1();
    h.add();
    h.mul();
    h.sub();
    h.div();
}
