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
    memset(str,0,sizeof(str));//str�ĳ�ʼ����ע�����string.h
    cout << "�������ַ�����" << endl;
    cin >> str;
    //cout << strlen(str) << endl;
    cout << lenght(str) << endl;
    return 0;
}

int lenght(char* str) {
    int len = 0;
    // while (*(str + len) != 0) {
    //     len++;
    // }
    while (*str++) {//++�����ȼ�����*������str���ú��������ַ�����Ԫ��Ҳ������
        len++;
    }

    return len;
}