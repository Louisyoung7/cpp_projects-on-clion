#include "iostream"
using namespace std;

int main() {
    int num = 0;
    int sum = 0;
    for (int i = 1; i  > 0; i++) {
        cout << "���������֣�" << endl;
        cin >> num;
        sum += num;
        cout << sum << endl;
        if (sum > 5000) break;
    }
    return 0;
}