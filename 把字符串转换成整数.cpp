#include <iostream>
#include <string.h>
using namespace std;

//�ӽ���������һ��C�����ַ���(�����ƻ�ʮ����), ����ת��������, ����atoi()������

int main()
{
    char str[100]; //���������ַ���
    memset(str,0,sizeof(str));  //����ַ���
    cout << "������һ�����֣�" << endl;
    cin >> str;
    int radix;
    cout << "��������ƣ�10-10���ƣ�2-2���ƣ�" << endl;
    cin >> radix;
    int res = 0;    //������������
    for (int i = 0,len = strlen(str);i < len;i++)   //len�ڵ�һ���ֳ�ʼ������ʡ��Դ
    {
        if (str[i] > '9'|| str[i] < '0')
        {
            cout << "��������ֲ��Ϸ�" << endl;
            break;
        }
        if (radix == 2 && str[i] > '1')
        {
            cout << "������ַ������Ϸ���ֻ����0��1��" << endl;
            break;
        }
        res = res*radix;
        res = res + str[i] - '0';
    }
    cout << res << endl;

    return 0;
}

