// �ӽ���������һ���ַ�����C��񣩣������ַ����ĳ��ȡ�����������"abcde"����ʾ�Ľ����5��
// ����Ҫ��
// 1���Ѽ����ַ������ȵĹ��ܷ�װ��һ��������
// 2������forѭ�����������ʾ������ʱ����������
// 3������whileѭ������ָ���ʾ������ʱ����������
// 4��������ʱ�����������õݹ�ʵ�֣�������������
#include <string.h>
#include "iostream"
using namespace std;

int lenght(char* str);

int main() {
    char str[31];
    memset(str, 0, sizeof(str));//str�ĳ�ʼ��
    cout << "�������ַ���" << endl;
    cin >> str;
    cout << strlen(str) << endl;
    cout << lenght(str) << endl;
    return 0;
}

int lenght(char* str) {
    int len = 0;
    for (int i = 0;str[i] != 0;i++) {
        len++;
    }
    return len;
}