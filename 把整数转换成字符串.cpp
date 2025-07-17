/*从界面上输入一个整数，把它转换为十进制和二进制的C风格的字符串。
        4358
        4358%10=8  	把8转换成字符
        4358/10=435
        435
        435%10=5  	把5转换成字符
        435/10=43
        43
        43%10=3  	把3转换成字符
        43/10=4
        4
        4%10=4      把4转换成字符
        4/10=0
        结束循环

 *
 */

#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int num;//输入的数字
    char str[100];//承接字符串
    memset(str,0,sizeof(str));
    int i = 0;//字符串索引
    int radix;//判断进制
    cout << "请输入一个整数：" << endl;
    cin >> num;
    cout << "请选择进制（10-十进制，2-二进制）：" << endl;
    cin >> radix;
    while (num != 0) {
        str[i] = num % radix + '0';
        i++;
        //str[i++] = num % radix + '0';
        num /= radix;
    }
    //反转字符串
    int len = strlen(str);
    for (int i = 0; i < len/2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    cout << str << endl;


    return 0;
}
