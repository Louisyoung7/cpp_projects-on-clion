#include "iostream"
using namespace std;

// 从界面上输入一个字母，显示该字母后面的字母，如果后面没有字母，给出提示。不允许用if…else if…和switch语句。a b A B
//ASCII码值：A 65 a 97

int main() {
    char ch =0;
    cout << "请输入一个字母：" << endl;
    cin >> ch;
    if (ch < 'A' || ch > 'Z' && ch < 'a' || ch > 'z') {
        cout << "输入不合法" << endl;
    }
    if (ch == 'z' || ch == 'Z') {
        cout << "后面没有字母了" << endl;
    }
    else cout << static_cast<char>(ch + 1) << endl;//c++风格的强制转换
    return 0;
}
