// �ӽ��������������Ů�������������C�����ַ��������У�Ȼ�󣬷ֱ������Ǳ�ס�

#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char str[3][100];
    memset(str,0,sizeof(str));
    for (int i = 0;i < 3;i++) {
        cout << "������������" << endl;
        cin >> str[i];
        cout << str[i] <<",I love you!"<< endl;
    }
    return 0;
}

