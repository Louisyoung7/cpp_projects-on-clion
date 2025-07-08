// 1)用一个while循环,接受从键盘输入的整数,如果输入的整数不在1到100之间(包括1和
// 100),认为无效,丢弃;如果输入的整数在1到100之间,则把每次输入的值累加起来;如果输入的
// 整数为0,跳出循环。最后,显示有效数据的个数和总和。
// 2)输出1到100之间(包括1和100)的能整除5的数字。
#include "iostream"
using namespace std;

int main() {
    //1.
    int num = 0;
    int sum = 0;
    int count = 0;
    while (1) {
        cout << "请输入整数：" <<endl;
        cin >> num;
        if (num == 0) {
            break;
        }
        if (num >= 1&& num <= 100) {
            sum += num;
            count++;
        }
        else {
            cout << "输入无效" << endl;
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