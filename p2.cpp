#include <iostream>
using namespace std;
int main()
{
    float x,y,z,great;
    cout<<"Enter value of x y z(all 3 distinct):";
    cin>>x>>y>>z;
    if(cin.fail())
    {
        cout<<"Error !! Enter numbers only"<<endl;
        return 1;
    }
    if(x>=y && x>=z)
    {
        great=x;
    }
    else if (y>=x && y>=z)
    {
        great=y;
    }
    else if (z>=x && z>=y)
    {
        great=z;
    }
    cout<<"Greatest number is:"<<great<<endl;
    return 0;
}

