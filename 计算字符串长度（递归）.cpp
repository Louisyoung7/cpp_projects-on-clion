// 从界面上输入一个字符串（C风格），计算字符串的长度。如果输入的是"abcde"，显示的结果是5。
// 其它要求：
// 1）把计算字符串长度的功能封装成一个函数。
// 2）采用for循环，用数组表示法和临时变量计数。
// 3）采用while循环，用指针表示法和临时变量计数。
// 4）不用临时变量计数，用递归实现（奇巧淫技）。

#include <iostream>
#include <string.h>
using namespace std;

int lenght(char* str);

int main() {
    char str[100];
    memset(str,0,sizeof(str));
    cout << "请输入字符串：" << endl;
    cin >> str;
    cout << strlen(str) << endl;
    cout << lenght(str) << endl;
    return 0;
}

int lenght(char* str) {
    if (*str == 0) return 0;
    // str++;//指针后移
    // int len = lenght(str) + 1;//每次函数返回，返回值都加一
    // return len;
    return lenght(str++) + 1;//上面三行代码与这一行
}
