#include <iostream>
using namespace std;

void SelectionSort(int* input,int n) {
	for (int i = 0; i < n - 1; i++) {
		int element = input[i]; //정렬할 원소를 정함
		int min = i; //최소값 초기화
		for (int j = i + 1; j < n; j++) { //리스트의 모든값을 검사해 최소값 결정
			if (input[j] < input[min]) {
				min = j;
			}
		}
		input[i] = input[min];//element와 최소값을 SWAP
		input[min] = element;	
	}
}

int main(void) {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int list[9] = { 2,1,3,4,5,6,9,8,7 };

	cout << "정렬 전 : ";
	for (int i = 0; i < 9; i++) {
		cout << list[i] << " ";
	}
	cout << "\n";

	SelectionSort(list,9);

	cout << "정렬 후 : ";
	for (int i = 0; i < 9; i++) {
		cout << list[i] << " ";
	}
	cout << "\n";
	return 0;
}