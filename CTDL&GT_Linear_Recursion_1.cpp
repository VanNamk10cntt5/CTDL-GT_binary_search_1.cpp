#include<iostream>  
using namespace std;
int GiaiThua(int n) {
    // Trường hợp người dùng nhập n == 1 thì thoát khỏi đệ quy
    if (n == 1)
        return 1;
    else
    //ngược lại thì gọi hàm đệ quy với tham số n - 1
        return (n * GiaiThua(n - 1));
}
  
int main()   
{    
  //khai báo biến n là số cần tính giai thừa
    int n;
  //yêu cầu người dùng nhập vào số n cần tính giai thừa
    cout << "Nhập số nguyên dượng n cần tính giai thừa: ";
    cin >> n;
    //hiển thị kết quả sau khi tính bằng cách gọi hàm tính giai thừa
    cout << "Giai thừa của " << n << " là: " << GiaiThua(n) << endl;

    return 0;  
}
//chat
#include <iostream>
using namespace std;

// Hàm tính giai thừa của n bằng đệ quy tuyến tính
int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Hàm main để kiểm tra chương trình
int main() {
    int n = 5;
    cout << "Giai thừa của " << n << " là: " << factorial(n) << endl;
    return 0;
}
