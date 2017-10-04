//============================================================================
// Name        : quick.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Quick Sort in C++ 
//============================================================================

#include <stdio.h>
#include <conio.h>

int partition(int a[], int p, int r) {
	int x = a[r];
	int i = p - 1;
	int j;
	int temp;
	for (j = p; j <= r - 1; ++j) {
		if (a[j] <= x) {
			++i;
			int temp;
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}

	temp = a[i + 1];
	a[i + 1] = a[r];
	a[r] = temp;
	return (i + 1);
}
void quicksort(int a[], int p, int r) {
	if (p < r) {
		int q;
		q = partition(a, p, r);
		quicksort(a, p, q - 1);
		quicksort(a, q + 1, r);

	}
}

void display(int a[]) {
	int i;
	printf("Displaying sorted array:\n");
	for (i = 0; i < 10; ++i) {
		printf("%d", a[i]);
		printf("\n");
	}
}

void fill(int a[]) {
	int i;
	for (i = 0; i < 10; ++i) {
		scanf("%d", &a[i]);
	}
}

int main() {
	int a[10];
	fill(a);
	quicksort(a, 0, 9);
	display(a);
	getch();
	return 0;
}
