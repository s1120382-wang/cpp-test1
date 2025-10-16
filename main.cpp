#include <iostream>
using namespace std;

int main() {
    // --- Part 1: 九九乘法表 ---
    cout << "九九乘法表：" << endl;
    int i = 1;
    while (i <= 9) {
        int j = 1;
        while (j <= 9) {
            cout << i << " * " << j << " = " << i * j << "\t";
            j += 1;
        }
        cout << endl;
        i += 1;
    }

    cout << endl;

    // --- Part 2: 星號金字塔 ---
    cout << "星號金字塔：" << endl;
    for (int i = 1; i <= 6; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
