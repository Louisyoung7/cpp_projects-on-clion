// �ӽ���������һ��C�����ַ���������������"abc"����ת��"cba"��
// Ҫ��
// 1����ת�Ľ���������һ�ַ����С�
// 2��ԭ�ط�ת���������������ַ�����

#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char str[100];
    memset(str,0,sizeof(str));
    cout << "�������ַ�����" << endl;
    cin >> str;
    int len = strlen(str);
    //1.������һ���ַ���
    // char str1[100];
    // memset(str1,0,sizeof(str1));
    // for (int i = 0; i < len; i++) {
    //     str1[i] = str[len - i - 1];
    // }
    // cout << str1 << endl;

    //2.ԭ�ط�ת
    for (int i = 0; i < len/2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    cout << str << endl;


    return 0;
}
