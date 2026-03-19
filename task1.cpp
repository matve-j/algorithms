#include <iostream>

using namespace std;

// идея - перевернуть массив, затем все числа внутри массива

void reverse(int *arr, int left, int right) {
	while (left<right) {
		swap(arr[left],arr[right]);
		++left;
		--right;
	}
}
// не занимает доп памяти, тк не создаёт/копирует etc структуры


int main() {
	int SIZE = 7;
	int mass1[SIZE] = {1,2,3,4,5,6,7};
	int k;
	cout << "введите число K для массива 1 2 3 4 5 6 7: ";
	cin >> k;
	k = k % SIZE;
	reverse(mass1, 0, SIZE - 1);
	reverse(mass1, 0, k - 1);
	reverse(mass1, k, SIZE - 1);
	
	for (int i = 0; i < SIZE; i++) {
		cout << mass1[i] << " ";
	}
	cout << endl;
}	
