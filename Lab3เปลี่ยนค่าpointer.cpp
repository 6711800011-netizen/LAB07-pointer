#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int* p = &a;

    // TODO: เปลี่ยนค่า a ผ่าน pointer
    *p = 100;  // เติมบรรทัดนี้ครับ

    cout << "a = " << a << endl;
    return 0;
}