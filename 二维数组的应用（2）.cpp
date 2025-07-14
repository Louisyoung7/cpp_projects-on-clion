// 从界面上输出三个超女的姓名，存放在C风格的字符串数组中，然后，分别向她们表白。

#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char str[3][100];
    memset(str,0,sizeof(str));
    for (int i = 0;i < 3;i++) {
        cout << "请输入姓名：" << endl;
        cin >> str[i];
        cout << str[i] <<",I love you!"<< endl;
    }
    return 0;
}

