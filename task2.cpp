#include <iostream>

using namespace std;

// не писал раньше на плюсах, не уверен что условия проверяются в порядке их написания; если как на питоне написал бы if uk1 == size1+1 or arr[uk1-1]>arr2[uk2-1] потому что в случае выполнения первого второе бы не проверилось
// еще чутка намудрил с нумерацией)) 
void merge_sorted(int* arr1, int* arr2, int size1, int size2, int* otvet) {
	int uk1 = 1;
	int uk2 = 1;
	while (uk1 != size1 + 1 or uk2 != size2 + 1) {
		if (uk1 == size1 + 1) {
			otvet[uk1 + uk2 - 2] = arr2[uk2 - 1];
			uk2++;
		}
		else{
		       if (uk2 == size2 + 1) {
				otvet[uk1 + uk2 - 2] = arr1[uk1 - 1];
				uk1++;
			}
		      	else {
				if (arr1[uk1 - 1] > arr2[uk2 - 1]) {
					otvet[uk1 + uk2 - 2] = arr2[uk2 - 1];
					uk2++;
				}
				else {
					otvet[uk1 + uk2 - 2] = arr1[uk1 - 1];
					uk1++;
				}
			}

		}
	}
}
// size1 + size2 операций

int main() {
	int SIZE_1 = 7;
	int SIZE_2 = 5;
	int mass1[SIZE_1] = {1, 3, 4, 5, 8, 10, 12};
	int mass2[SIZE_2] = {2, 6, 7, 10, 11};
	int result[SIZE_1 + SIZE_2];

	merge_sorted(mass1, mass2, SIZE_1, SIZE_2, result);

	for (int i = 0; i != SIZE_1 + SIZE_2; ++i) {
		cout << result[i] << " ";
	}
	cout << endl;
	
	return 0;
}
