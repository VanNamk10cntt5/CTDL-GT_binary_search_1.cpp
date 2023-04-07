#include <iostream>
using namespace std;
 
bool isEven(int n);
bool isOdd(int n);
 
bool isEven(int n){
  if(n == 0)
    return true;
  else
    return isOdd(n - 1);
}
 
bool isOdd(int n){
  return !isEven(n);
}
int main() {
  int n = 5;
  bool kq = isEven(n);
  if(kq == true)
    cout<<n<<" là số chẵn";
  else 
    cout<<n<<" là số lẻ";
 
  
}
//https://freetuts.net/de-quy-tuong-ho-mutual-recursion-2961.html


//chat
#include <iostream>
#include <climits>
using namespace std;

int findMaxSubarray(int a[], int i, int j) {
    if (i == j) {
        return a[i];
    }
    int mid = (i + j) / 2;
    int leftMax = INT_MIN, rightMax = INT_MIN;
    int sum = 0;
    for (int k = mid; k >= i; k--) {
        sum += a[k];
        leftMax = max(leftMax, sum);
    }
    sum = 0;
    rightMax = INT_MIN;
    for (int k = mid + 1; k <= j; k++) {
        sum += a[k];
        rightMax = max(rightMax, sum);
    }
    return max(max(findMaxSubarray(a, i, mid), findMaxSubarray(a, mid + 1, j)), leftMax + rightMax);
}

int maxSubarray(int a[], int n) {
    return findMaxSubarray(a, 0, n - 1);
}

int main() {
    int a[] = {1, -2, 3, 4, -5, 6, 7, -8, 9};
    int n = sizeof(a) / sizeof(int);
    cout << "Max subarray sum: " << maxSubarray(a, n) << endl;
    return 0;
}
//Ví dụ:

Cho một dãy số nguyên a gồm n phần tử. Hãy tìm giá trị lớn nhất trong dãy số đó bằng đệ quy tương hỗ.

Để giải quyết bài toán này, ta sẽ sử dụng hai hàm đệ quy:

Hàm tìm giá trị lớn nhất của một dãy số con bắt đầu từ phần tử thứ i và kết thúc tại phần tử thứ j (gọi là hàm findMaxSubarray).
Hàm tìm giá trị lớn nhất của dãy số a bắt đầu từ phần tử thứ i và kết thúc tại phần tử cuối cùng (gọi là hàm maxSubarray).
