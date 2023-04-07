#include<stdio.h>
 
 
void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}
 
 
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int left = low;
    int right = high - 1;
    while(true){
        while(left <= right && arr[left] < pivot) left++;
        while(right >= left && arr[right] > pivot) right--;
        if (left >= right) break;
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    swap(arr[left], arr[high]);
    return left;
}
 
/* Hàm thực hiện giải thuật quick sort */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi là chỉ số nơi phần tử này đã đứng đúng vị trí
         và là phần tử chia mảng làm 2 mảng con trái & phải */
        int pi = partition(arr, low, high);
 
        // Gọi đệ quy sắp xếp 2 mảng con trái và phải
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
 
/* Hàm xuất mảng */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
 
int main()
{
    int arr[] = {10, 80, 30, 90, 40, 50, 70};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}

//https://blog.luyencode.net/thuat-toan-sap-xep-quick-sort/

//chatgpt
#include <iostream>
using namespace std;

// Hoán vị hai phần tử
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Hàm chia mảng và trả về chỉ số của phần tử pivot
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Chọn pivot là phần tử cuối cùng của mảng
    int i = (low - 1); // Chỉ số của phần tử nhỏ hơn pivot

    for (int j = low; j <= high - 1; j++) {
        // Nếu phần tử hiện tại nhỏ hơn hoặc bằng pivot
        if (arr[j] <= pivot) {
            i++; // Tăng chỉ số của phần tử nhỏ hơn pivot
            swap(&arr[i], &arr[j]); // Đổi chỗ phần tử nhỏ hơn pivot với phần tử đang xét
        }
    }

    swap(&arr[i + 1], &arr[high]); // Đổi chỗ phần tử pivot với phần tử đầu tiên lớn hơn pivot
    return (i + 1); // Trả về chỉ số của pivot
}

// Hàm sắp xếp nhanh
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // p là chỉ số của pivot, arr[p] đã đứng đúng vị trí của nó
        int p = partition(arr, low, high);

        // Đệ quy sắp xếp các phần tử bên trái và bên phải pivot
        quickSort(arr, low, p - 1);
        quickSort(arr, p + 1, high);
    }
}

// Hàm in ra một mảng
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Hàm main để kiểm tra chương trình
int main() {
    int arr[] = { 10, 7, 8, 9, 1, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    cout << "Mang da sap xep: \n";
    printArray(arr, n);
    return 0;
}
