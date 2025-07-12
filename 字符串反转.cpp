// 从界面上输入一个C风格的字符串，如果输入的是"abc"，反转后"cba"。
// 要求：
// 1）反转的结果存放在另一字符串中。
// 2）原地反转，不借助其它的字符串。

#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char str[100];
    memset(str,0,sizeof(str));
    cout << "请输入字符串：" << endl;
    cin >> str;
    int len = strlen(str);
    //1.借助另一个字符串
    // char str1[100];
    // memset(str1,0,sizeof(str1));
    // for (int i = 0; i < len; i++) {
    //     str1[i] = str[len - i - 1];
    // }
    // cout << str1 << endl;

    //2.原地反转
    for (int i = 0; i < len/2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    cout << str << endl;


    return 0;
}
