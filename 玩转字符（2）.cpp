//自定义一个函数，把字符的'0'、'1'、'2'、'3'、'4'、'5'、'6'、'7'、'8'、'9'转换为整数的0、1、2、3、4、5、6、7、8、9。不允许用if…else if…和switch语句。
// 函数原型：
// int ctoi(const char ch);   // ch为字符'0'、'1'、'2'、…'9'，返回值为整数0、1、2、…9。
// 调用示例：
// cout << ctoi('0') << endl;  // 输出结果是0。
// cout << ctoi('1') << endl;  // 输出结果是1。
// cout << ctoi('9') << endl;  // 输出结果是9。
//'0'的ASCII码值为48
#include "iostream"
using namespace std;

int ctoi(const char ch);

int main() {
    char ch =0;
    cout << "请输入字符：" << endl;
    cin >> ch;
    int num = ctoi(ch);
    cout << num << endl;
    return 0;
}
int ctoi(const char ch) {
    //return static_cast<int>(ch) - 48;
    return static_cast<int>(ch) - static_cast<int>('0');
}

