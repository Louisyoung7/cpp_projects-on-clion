// �ӽ���������һ���ַ�����C��񣩣������ַ����ĳ��ȡ�����������"abcde"����ʾ�Ľ����5��
// ����Ҫ��
// 1���Ѽ����ַ������ȵĹ��ܷ�װ��һ��������
// 2������forѭ�����������ʾ������ʱ����������
// 3������whileѭ������ָ���ʾ������ʱ����������
// 4��������ʱ�����������õݹ�ʵ�֣�������������

#include <iostream>
#include <string.h>
using namespace std;

int lenght(char* str);

int main() {
    char str[100];
    memset(str,0,sizeof(str));
    cout << "�������ַ�����" << endl;
    cin >> str;
    cout << strlen(str) << endl;
    cout << lenght(str) << endl;
    return 0;
}

int lenght(char* str) {
    if (*str == 0) return 0;
    // str++;//ָ�����
    // int len = lenght(str) + 1;//ÿ�κ������أ�����ֵ����һ
    // return len;
    return lenght(str++) + 1;//�������д�������һ��
}
