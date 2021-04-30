#include <iostream>
#include <string.h>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

void BubbleSort(int* input, int n) {
	for (int i = n-1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (input[j] > input[j + 1]) { //오른쪽 레코드가 왼쪽레코드보다 작다면 SWAP
				int temp = input[j];
				input[j] = input[j + 1];
				input[j + 1] = temp;
			}
		}
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

	BubbleSort(list,9);

	cout << "정렬 후 : ";
	for (int i = 0; i < 9; i++) {
		cout << list[i] << " ";
	}
	cout << "\n";
	return 0;
}