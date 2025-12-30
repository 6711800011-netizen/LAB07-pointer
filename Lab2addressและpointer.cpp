#include <iostream>
using namespace std;

int main() {
    int score = 50;
    int* ptr = &score;

    // TODO: แสดงค่า score, address และ pointer
    cout << score << endl;   // 1. แสดงค่า score (จะได้เลข 50)
    cout << &score << endl;  // 2. แสดงที่อยู่ของ score (จะได้รหัสเลขฐาน 16 ยาวๆ เช่น 0x7ff...)
    cout << ptr << endl;     // 3. แสดงค่าที่ ptr เก็บไว้ (จะได้รหัสเดียวกับบรรทัดที่ 2 เป๊ะๆ)

    return 0;
}