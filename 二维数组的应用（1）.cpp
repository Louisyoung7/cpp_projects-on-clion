// ��Ů��3��С�飬ÿ����4��ѡ�֣����ṩһ�����棬����ÿ����Ů�����أ�Ȼ�󣬼����ÿ��ĳ�Ů��ƽ�����غ�ȫ����Ů��ƽ�����ء�
#include <iostream>
#include <string.h>
using namespace std;

int main() {
    float all_sum = 0.0;
    float arr[3][4];
    memset(arr,0,sizeof(arr));//��ʼ����ά����
    float (* p) [4] = arr;
    for (int i = 0;i < 3;i++) {
        float team_sum = 0.0;
        for (int j = 0;j < 4;j++) {
            cout << "�������" << i + 1 << "��" << "��" << j + 1 << "����Ů�����أ�"<< endl;
            cin >> *(*p + j);
            team_sum += arr[i][j];
            all_sum += arr[i][j];
        }
        cout << "��" << i + 1 << "��ĳ�Ůƽ������Ϊ��" << team_sum/4 << endl;
        p++;
    }
    cout << "ȫ����Ů��ƽ������Ϊ��" << all_sum/3/4 << endl;
    return 0;
}




