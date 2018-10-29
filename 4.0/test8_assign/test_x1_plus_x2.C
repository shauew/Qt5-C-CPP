// test x1 + x2

#include <iostream>

int main ()
{
    using namespace std;

    double x1, x2;

    cin >> x1;
    cin >> x2;
    
    cout << "int (int    x1 + x2) is " << int(x1) + int(x2) << endl;
    cout << "int (double x1 + x2) is " << int(x1 + x2) << endl;
}
