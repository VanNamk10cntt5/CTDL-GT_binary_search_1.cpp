#include <iostream>
using namespace std;

// Hàm tính giai thừa của một số nguyên dương bằng đệ quy đuôi
int factorial(int n, int result = 1) {
    if (n == 0) {
        return result;
    }
    else {
        return factorial(n - 1, result * n);
    }
}

// Hàm main để kiểm tra chương trình
int main() {
    int n = 5;
    cout << "Factorial of " << n << " is " << factorial(n) << endl;
    return 0;
}
//chatgpt
