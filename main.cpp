#include <iostream>
#include <string>
using namespace std;

int main() {
    int score[10] = {85, 90, 60, 92, 100, 76, 50, 89, 84, 40};  // 學生成績
    int gradeCount[5] = {0};  // 用來記錄各個等級的人數
    
    // 迴圈檢查每一個學生的成績
    for (int i = 0; i < 10; ++i) {
        if (score[i] >= 90) {
            gradeCount[0]++;  // A 等級
        } else if (score[i] >= 80) {
            gradeCount[1]++;  // B 等級
        } else if (score[i] >= 70) {
            gradeCount[2]++;  // C 等級
        } else if (score[i] >= 60) {
            gradeCount[3]++;  // D 等級
        } else {
            gradeCount[4]++;  // F 等級
        }
    }

    // 顯示統計結果
    cout << "A 等人數: " << gradeCount[0] << endl;
    cout << "B 等人數: " << gradeCount[1] << endl;
    cout << "C 等人數: " << gradeCount[2] << endl;
    cout << "D 等人數: " << gradeCount[3] << endl;
    cout << "F 等人數: " << gradeCount[4] << endl;

    return 0;
}