#include <iostream>
using namespace std;

// ฟังก์ชันสลับค่าโดยใช้ pointer
void swapValue(int* a, int* b) {
    int temp = *a;  // เก็บค่า a ไว้ที่ temp
    *a = *b;        // เอาค่า b มาใส่ a
    *b = temp;      // เอาค่า temp (a เก่า) ไปใส่ b
}

int main() {
    int x = 5, y = 10;
    
    // เรียกใช้ฟังก์ชันสลับค่า (ส่งที่อยู่ของ x และ y ไป)
    swapValue(&x, &y);
    
    // แสดงผลลัพธ์
    cout << x << " " << y << endl;
    
    return 0;
}