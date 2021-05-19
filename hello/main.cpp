#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"type two numbers\n";
    cin >> a >> b;
     c=a+b;
    cout <<"Sum is "<< c << endl;
    if (c/2==0)
        {
            cout<< "it is even number";
        }
    else
        {
            cout<<"it is odd number";
        }

    return 0;
}
