// 超女有3个小组，每组有4名选手，请提供一个界面，输入每个超女的体重，然后，计算出每组的超女的平均体重和全部超女的平均体重。
#include <iostream>
#include <string.h>
using namespace std;

int main() {
    float all_sum = 0.0;
    float arr[3][4];
    memset(arr,0,sizeof(arr));//初始化二维数组
    float (* p) [4] = arr;
    for (int i = 0;i < 3;i++) {
        float team_sum = 0.0;
        for (int j = 0;j < 4;j++) {
            cout << "请输入第" << i + 1 << "组" << "第" << j + 1 << "个超女的体重："<< endl;
            cin >> *(*p + j);
            team_sum += arr[i][j];
            all_sum += arr[i][j];
        }
        cout << "第" << i + 1 << "组的超女平均体重为：" << team_sum/4 << endl;
        p++;
    }
    cout << "全部超女的平均体重为：" << all_sum/3/4 << endl;
    return 0;
}




