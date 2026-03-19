
#include <iostream>
using namespace std;


void sort_0_1(int* arr, int size) {
	int uk = 0; // сюда мы будем перемещать наше ненулевое число
	int i = 0;
	for (i = 0; i != size; ++i) {
		if (arr[i] != 0) {
			swap(arr[uk], arr[i]);
			uk++;
		}
	}
}
// операций size + кол-во перемещений <= 2*size (линия)
// аналог задач 4/6 только вместо четных элементов нужно сохранять порядок ненулевых 
int main() {
	int SIZE = 11;
	int mass[SIZE] = {1, 2, 7, 4, 5, 0, 17, 8, 7, 6, 10};

	sort_0_1(mass, SIZE);

	for (int i = 0; i != SIZE; ++i) {
		cout << mass[i] << " ";
	}

	cout << endl;



}
