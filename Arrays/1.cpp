// Array rotation

#include <iostream>

using namespace std;

void leftRotate(int arr[], int n, int d) {
	int actualD = d % n;
	int tempA[actualD];
	int tempB[n - actualD];

	for (int i = 0; i < actualD; i++) {
		tempA[i] = arr[i];
	}

	for (int i = actualD; i < n; i++) {
		tempB[i - actualD] = arr[i];
	}

	for (int i = 0; i < n - actualD; i++) {
		arr[i] = tempB[i];
	}
	for (int i = 0; i < actualD; i++) {
		arr[i + n - actualD] = tempA[i];
	}
}

void printArr(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	int arr[] = {1, 2, 3, 4, 5, 6};
	int n = sizeof(arr) / sizeof(arr[0]);
	int d = 7;

	printArr(arr, n);
	leftRotate(arr, n, d);
	printArr(arr, n);

	return 0;
}
