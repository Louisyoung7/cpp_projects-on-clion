// 1)��һ��whileѭ��,���ܴӼ������������,����������������1��100֮��(����1��
// 100),��Ϊ��Ч,����;��������������1��100֮��,���ÿ�������ֵ�ۼ�����;��������
// ����Ϊ0,����ѭ�������,��ʾ��Ч���ݵĸ������ܺ͡�
// 2)���1��100֮��(����1��100)��������5�����֡�
#include "iostream"
using namespace std;

int main() {
    //1.
    int num = 0;
    int sum = 0;
    int count = 0;
    while (1) {
        cout << "������������" <<endl;
        cin >> num;
        if (num == 0) {
            break;
        }
        if (num >= 1&& num <= 100) {
            sum += num;
            count++;
        }
        else {
            cout << "������Ч" << endl;
        }
    }
    cout << count << endl;
    cout << sum << endl;
    //2.
    for (int i = 1; i <= 100; i++) {
        if (i % 5 == 0) {
            cout << i << endl;
        }
    }
    return 0;
}