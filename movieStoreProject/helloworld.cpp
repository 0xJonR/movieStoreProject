#include <iostream>
using namespace std;

int main()
{
    cout <<"Hello World";
    int * myInt;
    int a = 25;
    myInt = &a;
    cout << *myInt;
    *myInt = 10;
    cout << *myInt;
    return 0;
}
