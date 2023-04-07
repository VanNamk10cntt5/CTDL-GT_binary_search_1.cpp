#include <iostream>
using namespace std;

// Vun dong mot cay con co nut root la i
// n la kich thuoc cua dong
void heapify(int arr[], int n, int i)
{
	int largest = i; // khoi tao largest nhu la root
	int l = 2 * i + 1; // left = 2*i + 1
	int r = 2 * i + 2; // right = 2*i + 2

	// Neu nut con trai lon hon so voi root
	if (l < n && arr[l] > arr[largest])
		largest = l;

	// Neu nut con phai lon hon so voi root
	if (r < n && arr[r] > arr[largest])
		largest = r;

	// Neu root khong phai la lon nhat
	if (largest != i)
	{
		swap(arr[i], arr[largest]);

		// De quy lai ham heapify
		heapify(arr, n, largest);
	}
}

// Ham vun dong
void heapSort(int arr[], int n)
{
	// Tao mot dong (Sap xep lai mang)
	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(arr, n, i);

	// Trích xuất từng một phần tử một từ heap
	for (int i = n - 1; i >= 0; i--)
	{
		// Di chuyen root ve cuoi cung
		swap(arr[0], arr[i]);

		// goi ham heapify
		heapify(arr, i, 0);
	}
}

void printArray(int arr[], int n)
{
	for (int i = 0; i<n; ++i)
		cout << arr[i] << " ";
	cout << "\n";
}

int main()
{
	int arr[] = { 12, 11, 13, 5, 6, 7 };
	int n = sizeof(arr) / sizeof(arr[0]);

	heapSort(arr, n);

	cout << "Sorted array is \n";
	printArray(arr, n);
	cin.get();
	getchar();
	return 0;
}

//https://dnmtechs.com/thuat-toan-sap-xep-vun-dong-heap-sort/
//chat
#include <iostream>
using namespace std;

// Khai báo một nút của cây nhị phân
struct Node {
    int value;
    Node* left;
    Node* right;
};

// Hàm tạo một nút mới trong cây nhị phân
Node* newNode(int value) {
    Node* node = new Node;
    node->value = value;
    node->left = NULL;
    node->right = NULL;
    return (node);
}

// Hàm chèn một giá trị vào cây nhị phân
void insert(Node* &root, int value) {
    if (root == NULL) {
        root = newNode(value);
        return;
    }
    if (value < root->value) {
        insert(root->left, value);
    }
    else if (value > root->value) {
        insert(root->right, value);
    }
}

// Hàm thực hiện duyệt trước cây nhị phân và in ra các giá trị đã sắp xếp
void inOrder(Node* root) {
    if (root != NULL) {
        inOrder(root->left);
        cout << root->value << " ";
        inOrder(root->right);
    }
}

// Hàm sắp xếp cây nhị phân
void binaryTreeSort(int arr[], int n) {
    Node* root = NULL; // Khởi tạo cây nhị phân rỗng
    for (int i = 0; i < n; i++) {
        insert(root, arr[i]); // Chèn từng phần tử của mảng vào cây nhị phân
    }
    inOrder(root); // In ra mảng đã sắp xếp bằng cách duyệt trước cây nhị phân
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
    binaryTreeSort(arr, n);
    cout << "Mang sau khi sap xep: ";
    printArray(arr, n);
    return 0;
}
