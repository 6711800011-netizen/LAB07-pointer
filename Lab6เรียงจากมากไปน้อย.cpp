#include <iostream>
using namespace std;

// 1. ฟังก์ชันแสดงผล Array
void printArray(int* p, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(p + i) << " ";
    }
    cout << endl;
}

// 2. ฟังก์ชันสลับค่า (Swap)
void swapValue(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 3. ฟังก์ชันเรียงลำดับจากมากไปน้อย (Bubble Sort Descending)
void sortDescending(int* p, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            // เช็คว่าตัวหน้า "น้อยกว่า" ตัวหลังไหม (ถ้าใช่ ให้สลับ)
            if (*(p + j) < *(p + j + 1)) {
                // ส่ง address ของทั้งสองตัวไปสลับ
                swapValue((p + j), (p + j + 1));
            }
        }
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 3};
    int size = 5;

    cout << "Before sort: ";
    printArray(arr, size);

    sortDescending(arr, size);

    cout << "After sort: ";
    printArray(arr, size);

    return 0;
}