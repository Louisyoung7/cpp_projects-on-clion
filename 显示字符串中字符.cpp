//�ӽ���������һ���ַ�����C��񣩣����ַ����е�ÿ���ַ���ʾ����������������"abc"�������a b c
#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char str[31];
    memset(str,0,sizeof(str));
    cout << "�������ַ�����" << endl;
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