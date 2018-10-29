// inch.C

#include <iostream>

int main ()
{
    using namespace std;
    long hight;
    
    cout << "\aPlease Enter your hight in inch:________\b\b\b\b\b\b\b\b";
    
    cin >> hight;
    
    cout << "\aYour hight is " << hight / 12 << "ft ";
    cout << "and " << hight % 12 << "inch." << endl;
    
    return 0;
}
