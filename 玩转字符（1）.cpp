#include "iostream"
using namespace std;

// �ӽ���������һ����ĸ����ʾ����ĸ�������ĸ���������û����ĸ��������ʾ����������if��else if����switch��䡣a b A B
//ASCII��ֵ��A 65 a 97

int main() {
    char ch =0;
    cout << "������һ����ĸ��" << endl;
    cin >> ch;
    if (ch < 'A' || ch > 'Z' && ch < 'a' || ch > 'z') {
        cout << "���벻�Ϸ�" << endl;
    }
    if (ch == 'z' || ch == 'Z') {
        cout << "����û����ĸ��" << endl;
    }
    else cout << static_cast<char>(ch + 1) << endl;//c++����ǿ��ת��
    return 0;
}
