// test the difference between char and charecters

#include <iostream>

int main ()
{
    using namespace std;

    char grade;

    grade = 65;
    cout << "grade is " << grade << endl;

    grade = 'A';
    cout << "grade is " << grade << endl;

    cout << "8 * 9 + 2 is " << 8 * 9 + 2 << endl;
    cout << "6 * 3 / 4 is " << 6 * 3 / 4 << endl;
    cout << "3 / 4 * 6 is " << 3 / 4 * 6 << endl;
    cout << "6.0 * 3 / 4 is " << 6.0 * 3 / 4 << endl;
    cout << "15 % 4 is " << 15 % 4 << endl;
}
