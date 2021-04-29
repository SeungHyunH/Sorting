#include <iostream>
using namespace std;

void InsertionSort(int* input,int n) {
	for (int i = 1; i < n; i++) {
		int element = input[i];
		int j;
		for (j = i - 1; j >= 0 && input[j]>element; j--) {
			input[j + 1] = input[j];
		}
		input[j + 1] = element;
	}
}

int main(void) {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int list[9] = { 2,1,3,4,5,6,7,9,8 };

	cout << "정렬 전 : ";
	for (int i = 0; i < 9; i++) {
		cout << list[i] << " ";
	}
	cout << "\n";

	InsertionSort(list,9);

	cout << "정렬 후 : ";
	for (int i = 0; i < 9; i++) {
		cout << list[i] << " ";
	}
	cout << "\n";
	return 0;
}