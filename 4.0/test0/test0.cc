//编写程序输出ASCII码为32-127的字符。

#include <iostream>

using namespace std;

int main()
{
    for (int i = 32; i <= 127; i++) {
        cout <<"ASCII码是"
			 << i
			 << "的字符是" 
			 << (char)i 
			 << endl;
	}
	return 0;
}