#include <iostream>
using namespace std;
int main()
{
    int a = 4;
    int b = 3;
    int sum, sub;
    sum = a + b;
    sub = a - b;
    cout << sum << endl;
    cout << sub << endl;
    // very important
    cout << 5 % 2 * 5 + 5 - 3 * 8 / 2;
    //1*5+5-3*8/2
    //5+5-3*4
    //5+5-12
    //10-12
    //-2
    return 0;
}