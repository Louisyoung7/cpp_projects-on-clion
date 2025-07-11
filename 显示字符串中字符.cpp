//从界面上输入一个字符串（C风格），把字符串中的每个字符显示出来，如果输入的是"abc"，则输出a b c
#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char str[31];
    memset(str,0,sizeof(str));
    cout << "请输入字符串：" << endl;
    cin >> str;
    //1.
    // int len = strlen(str);
    // for (int i = 0; i < len; i++) {
    //     cout << str[i] << " " ;
    // }

    //2.
    // for (int i = 0,len = strlen(str); i < len; i++) {
    //     cout << str[i] << " ";
    // }

    //3.
    for (char* p = str;*p;p++) {
        cout << *p << " ";
    }
    return 0;
}