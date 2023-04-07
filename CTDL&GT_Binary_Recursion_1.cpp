#include <iostream>
using namespace std;
int fibonacci_series(int);
int main()
{
   int count, c = 0, i;
   cout<<"Nhập vào số lượng các số trong chuỗi Fibonacci: ";
   cin>>count;
   cout<<"\n chuỗi Fibonacci là: \n";
   for ( i = 1 ; i <= count ; i++ )
   {
      cout<<fibonacci_series(c)<<endl;
      c++; 
   }
   cout<<"\n----------------------------\n";
   cout<<"Chương trình này được đăng tại codehow.net";
}
int fibonacci_series(int num)
{
   if ( num == 0 )
     return 0;
   else if ( num == 1 )
     return 1;
   else
     return ( fibonacci_series(num-1) + fibonacci_series(num-2) );
}




//chat

#include <iostream>
using namespace std;

// Hàm đệ quy nhị phân tính tổng các phần tử trong mảng
int binaryRecursion(int arr[], int left, int right) {
    if (left == right) { // Trường hợp cơ bản: chỉ có một phần tử
        return arr[left];
    }
    int mid = (left + right) / 2; // Tìm chỉ số của phần tử ở giữa
    int sumLeft = binaryRecursion(arr, left, mid); // Đệ quy tính tổng của mảng bên trái
    int sumRight = binaryRecursion(arr, mid+1, right); // Đệ quy tính tổng của mảng bên phải
    return sumLeft + sumRight; // Trả về tổng của hai mảng con
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
    int arr[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Mang: ";
    printArray(arr, n);
    cout << "Tong cac phan tu trong mang: " << binaryRecursion(arr, 0, n-1);
    return 0;
}
