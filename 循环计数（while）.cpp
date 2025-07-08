#include "iostream"
using namespace std;

int main() {
    int num = 0;
    int i = 0;
    while (i <= 100) {
        num += i;
        i++;
    }
    cout << num << endl;
    return 0;
}

