/*�ӽ���������һ������������ת��Ϊʮ���ƺͶ����Ƶ�C�����ַ�����
        4358
        4358%10=8  	��8ת�����ַ�
        4358/10=435
        435
        435%10=5  	��5ת�����ַ�
        435/10=43
        43
        43%10=3  	��3ת�����ַ�
        43/10=4
        4
        4%10=4      ��4ת�����ַ�
        4/10=0
        ����ѭ��

 *
 */

#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int num;//���������
    char str[100];//�н��ַ���
    memset(str,0,sizeof(str));
    int i = 0;//�ַ�������
    int radix;//�жϽ���
    cout << "������һ��������" << endl;
    cin >> num;
    cout << "��ѡ����ƣ�10-ʮ���ƣ�2-�����ƣ���" << endl;
    cin >> radix;
    while (num != 0) {
        str[i] = num % radix + '0';
        i++;
        //str[i++] = num % radix + '0';
        num /= radix;
    }
    //��ת�ַ���
    int len = strlen(str);
    for (int i = 0; i < len/2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    cout << str << endl;


    return 0;
}
