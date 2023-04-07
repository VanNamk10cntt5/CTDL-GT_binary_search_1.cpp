#include <iostream>
const int MAX = 1e5; // Kích cỡ lớn nhất của hàng đợi, biến này có thể thay đổi tùy vào bạn
template<typename T> class Queue // Xây dựng hàng đợi
{
	T base[MAX]; // Mảng base lưu trữ thông tin
	T *a = base; // Con trỏ của mảng base
	int size = 0;
	public:
		Queue() // Hàm khởi tạo
		{
			
		}
		void Enqueue(T x) // Thêm 1 phần tử vào đầu hàng đợi
		{
			a[size] = x; // Đặt x vào cuối hàng đợi
			size++; // Tăng kích thước hàng đợi lên 1
		}
		void Dequeue() // Loại bỏ phần tử ở đầu hàng đợi
		{
			++a; // Loại bỏ phần tử ở đầu hàng đợi
			size--; // Giảm kích cỡ hàng đợi đi 1
		}
		bool isEmpty() // Kiểm tra hàng đợi có rỗng hay không
		{
			return size > 0; // Kiểm tra kích cỡ có lớn hơn 0 hay không?
		}
		T front() // Trả về phần tử ở đầu hàng đợi
		{
			return a[0];
		}
};
int main() // Chương trình chạy mẫu
{
	Queue<int> a;
	a.Enqueue(1); // Thêm 1 vào cuối hàng đợi, hàng đợi lúc này: [1]
	a.Enqueue(2); // Thêm 2 vào cuối hàng đợi, hàng đợi lúc này: [1, 2]
	a.Dequeue(); // Loại bỏ phần tử ở đầu hàng đợi, lúc này đang là 1, hàng đợi sau bước này: [2]
	std::cout << a.front(); // In ra phần tử ở đầu hàng đợi, lúc này đang là 2
}
//https://blog.luyencode.net/hang-doi-trong-cpp/
//chat
#include <iostream>
#include <queue>

using namespace std;

// Hàm in các phần tử trong hàng đợi
void printQueue(queue<int> q) {
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main() {
    queue<int> q; // Khai báo một hàng đợi
    int n = 5;
    // Thêm các phần tử vào hàng đợi
    for (int i = 1; i <= n; i++) {
        q.push(i);
    }
    cout << "Hàng đợi ban đầu: ";
    printQueue(q); // In ra các phần tử của hàng đợi ban đầu

    q.pop(); // Xóa phần tử đầu tiên của hàng đợi
    cout << "Hàng đợi sau khi xóa phần tử đầu tiên: ";
    printQueue(q); // In ra các phần tử của hàng đợi sau khi xóa

    cout << "Phần tử đầu tiên của hàng đợi: " << q.front() << endl; // In ra phần tử đầu tiên của hàng đợi

    cout << "Số phần tử hiện có trong hàng đợi: " << q.size() << endl; // In ra số phần tử hiện có trong hàng đợi

    return 0;
}
