//�Զ���һ�����������ַ���'0'��'1'��'2'��'3'��'4'��'5'��'6'��'7'��'8'��'9'ת��Ϊ������0��1��2��3��4��5��6��7��8��9����������if��else if����switch��䡣
// ����ԭ�ͣ�
// int ctoi(const char ch);   // chΪ�ַ�'0'��'1'��'2'����'9'������ֵΪ����0��1��2����9��
// ����ʾ����
// cout << ctoi('0') << endl;  // ��������0��
// cout << ctoi('1') << endl;  // ��������1��
// cout << ctoi('9') << endl;  // ��������9��
//'0'��ASCII��ֵΪ48
#include "iostream"
using namespace std;

int ctoi(const char ch);

int main() {
    char ch =0;
    cout << "�������ַ���" << endl;
    cin >> ch;
    int num = ctoi(ch);
    cout << num << endl;
    return 0;
}
int ctoi(const char ch) {
    //return static_cast<int>(ch) - 48;
    return static_cast<int>(ch) - static_cast<int>('0');
}

