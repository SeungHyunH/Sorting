#include<iostream>
using namespace std;

void InsertionSort(int*list, int first,int last,int gap ) {
    int j, key;
    for (int i = first + gap; i <= last; i = i + gap) {
        key = list[i];
        for (j = i - gap; j >= first && key < list[j]; j = j - gap) {
            list[j + gap] = list[j];
        }
        list[j + gap] = key;
    }
}

void ShellSort(int* list, int n) {
    int i, gap;
    int cnt = 0;
    for (gap = n / 2; gap > 0; gap = gap / 2) {
        if ((gap % 2) == 0) gap++;
        for (i = 0; i < gap; i++) { // 부분 리스트의 개수는 gap
            InsertionSort(list, i, n - 1, gap);
            cout << "\n정렬 중(gap = "<< gap<<"): ";
            for (int j = 0; j < 11; j++) { cout << list[j] << " "; }
        }
        cout << "\n";
    }
}

int main(void) {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int list[11] = { 10, 8, 6, 20, 4, 3, 22, 1, 0, 15, 16 };
    cout << "정렬 전 : ";
    for (int i = 0; i < 11; i++) { cout << list[i] << " "; }
    cout << "\n";

    ShellSort(list, 11);

    cout << "\n정렬 후 : ";
    for (int i = 0; i < 11; i++) { cout << list[i] << " "; }
    return 0;
}