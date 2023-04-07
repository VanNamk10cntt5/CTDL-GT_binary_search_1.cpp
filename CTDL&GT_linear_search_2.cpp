// Linear Search in C++

#include <iostream>
using namespace std;

int search(int array[], int n, int x) {

  // Going through array sequencially
  for (int i = 0; i < n; i++)
    if (array[i] == x)
      return i;
  return -1;
}

int main() {
  int array[] = {2, 4, 0, 1, 9};
  int x = 1;
  int n = sizeof(array) / sizeof(array[0]);

  int result = search(array, n, x);

  (result == -1) ? cout << "Element not found" : cout << "Element found at index: " << result;
}

https://www.programiz.com/dsa/linear-search



//chatgpt
#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1; // return -1 nếu không tìm thấy x trong mảng arr
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 8;
    int result = linearSearch(arr, n, x);
    if (result == -1)
        cout << "Khong tim thay " << x << " trong mang arr\n";
    else
        cout << "Tim thay " << x << " tai vi tri " << result << " trong mang arr\n";
    return 0;
}
