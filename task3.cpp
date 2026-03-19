// заполнение с конца позволит избежать перезаписи данных тк для i-го элемента первого массива его позиция будет не меньше i (увеличится если во втором массиве хотя бы один элемент меньше этого
#include <iostream>

using namespace std;

void merge_sorted(int* arr1, int* arr2, int size1, int size2) {
	if (size1 != 0 and size2 != 0) {
		if (arr1[size1 - 1] > arr2[size2 - 1]) {
			arr1[size1 + size2 - 1] = arr1[size1 - 1];
			merge_sorted(arr1, arr2, size1 - 1, size2);
		}
		else {
			arr1[size1 + size2 - 1] = arr2[size2 - 1];
			merge_sorted(arr1, arr2, size1, size2 - 1);
		}
	}
}
// size1 + size2 операций

int main() {
	int SIZE_1 = 7;
	int SIZE_2 = 5;
	int mass1[SIZE_1 + SIZE_2] = {1, 3, 4, 5, 8, 10, 12, 0, 0, 0, 0, 0};
	int mass2[SIZE_2] = {2, 6, 7, 10, 11};

	merge_sorted(mass1, mass2, SIZE_1, SIZE_2);

	for (int i = 0; i != SIZE_1 + SIZE_2; ++i) {
		cout << mass1[i] << " ";
	}
	cout << endl;
	
	return 0;
}
