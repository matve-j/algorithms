#include <iostream>
using namespace std;


void sort_0_1_2(int* arr, int size) {
	int low = 0;
	int now = 0;
	int high = size - 1;
	while (now <= high) {
		if (arr[now] == 2) {
			swap(arr[now], arr[high]);
			--high;
		}
		else {
		       	if (arr[now] == 0) {
				swap(arr[now], arr[low]);
				low++;
			}
			now++;
		}
	}
}
// операций size + кол-во перемещений <= 2*size (линия)
int main() {
	int SIZE = 11;
	int mass[SIZE] = {1, 2, 0, 0, 2, 2, 1, 1};

	sort_0_1_2(mass, SIZE);

	for (int i = 0; i != SIZE; ++i) {
		cout << mass[i] << " ";
	}

	cout << endl;



}
