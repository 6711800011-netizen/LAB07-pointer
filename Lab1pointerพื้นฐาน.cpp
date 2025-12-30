
#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* p = &x;

    // TODO: เขียนโปรแกรมแสดงค่า x และ *p
    cout << x << endl;   // แสดงค่า x โดยตรง
    cout << *p << endl;  // แสดงค่าที่ pointer p ชี้อยู่ (ซึ่งก็คือค่าของ x)

    return 0;
}