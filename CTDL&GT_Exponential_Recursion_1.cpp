#include <iostream>
using namespace std;

// Khai báo hàm đệ quy đa tuyến f
int f(int n, int m);

// Định nghĩa hàm đệ quy đa tuyến f
int f(int n, int m) {
    if (n == 0)
        return m + 1;
    else if (n > 0 && m == 0)
        return f(n - 1, 1);
    else
        return f(n - 1, f(n, m - 1));
}

// Hàm main để kiểm tra chương trình
int main() {
    int result = f(3, 4);
    cout << "f(3, 4) = " << result << endl;
    return 0;
}
 //chat gpt đã sua loi
