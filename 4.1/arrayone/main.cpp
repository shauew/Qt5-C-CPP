// arrayone.cpp -- small arrays of integers

#include <iostream>

using namespace std;

int main()
{
    int yams[3];    // 创建只有三个元素的数组
    yams[0] = 7;
    yams[1] = 8;
    yams[2] = 6;

    int yamcost[3] = {20, 30, 5};   // 创建并初始化另一个数组

    cout << "Total yams = ";
    cout << yams[0] + yams[1] + yams[2] << endl;
    cout << "The package with " << yams[1] << " yams costs ";
    cout << yamcost[1] << " cents per yam.\n";

    int total = yams[0] * yamcost[0] + yams[1] * yamcost[1];
    total     = total + yams[2] * yamcost[2];
    cout << "The total yam expense is " << total << " cents.\n";

    cout << "\nSize of yams array = " << sizeof yams;
    cout << " bytes.\n";
    cout << "Size of one element = " << sizeof yams[0];
    cout << " bytes.\n";

    return 0;
}
