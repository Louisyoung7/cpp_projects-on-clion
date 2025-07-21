#include <iostream>
#include <string.h>
using namespace std;

//从界面上输入一个C风格的字符串(二进制或十进制), 把它转换成整数, 类似atoi()函数。

int main()
{
    char str[100]; //存放输入的字符串
    memset(str,0,sizeof(str));  //清空字符串
    cout << "请输入一串数字：" << endl;
    cin >> str;
    int radix;
    cout << "请输入进制（10-10进制，2-2进制）" << endl;
    cin >> radix;
    int res = 0;    //存放输出的整型
    for (int i = 0,len = strlen(str);i < len;i++)   //len在第一部分初始化，节省资源
    {
        if (str[i] > '9'|| str[i] < '0')
        {
            cout << "输入的数字不合法" << endl;
            break;
        }
        if (radix == 2 && str[i] > '1')
        {
            cout << "输入的字符串不合法（只能是0和1）" << endl;
            break;
        }
        res = res*radix;
        res = res + str[i] - '0';
    }
    cout << res << endl;

    return 0;
}

