// 实现字符操作常用库函数的功能，如下：
// int isalpha(int ch);   	// 若ch是字母（'A'-'Z','a'-'z'）返回非0，否则返回0。
// int isalnum(int ch);		// 若ch是字母（'A'-'Z','a'-'z'）或数字（'0'-'9'），返回非0，否则返回0。
// int isdigit(int ch);   	// 若ch是数字（'0'-'9'）返回非0，否则返回0。
// int islower(int ch);   	// 若ch是小写字母（'a'-'z'）返回非0，否则返回0。
// int isupper(int ch);   	// 若ch是大写字母（'A'-'Z'）返回非0，否则返回0。
// int tolower(int ch);   	// 若ch是大写字母（'A'-'Z'），则返回它的小写字母（'a'-'z'）。
// int toupper(int ch);   	// 若ch是小写字母（'a'-'z'），则返回它的大写字母（'A'-'Z'）。

//ASCII码值：A 65 a 97

#include "iostream"
using namespace std;

int isalpha(int ch);
int isalnum(int ch);
int isdigit(int ch);
int islower(int ch);
int isupper(int ch);
int tolower(int ch);
int toupper(int ch);



int main() {

    char ch =0;
    cout << "请输入字符：" << endl;
    cin >> ch;
    char re_ch = toupper(ch);
    cout << re_ch << endl;
    return 0;
}
int isalpha(int ch) {
    if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z') {
        return 1;
    }
    else return 0;
}
int isalnum(int ch) {
    if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9') {
        return 1;
    }
    else return 0;
}
int isdigit(int ch) {
    if (ch >= '0' && ch <= '9') {
        return 1;
    }
    else return 0;
}
int islower(int ch) {
    if (ch >= 'a' && ch <= 'z') {
        return 1;
    }
    else return 0;
}
int isupper(int ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return 1;
    }
    else return 0;
}
int tolower(int ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch - 'A' + 'a';
    }
    else return 0;
}
int toupper(int ch) {
    if (ch >= 'a' && ch <= 'z') {
        return ch - 'a' + 'A';
    }
    else return 0;
}