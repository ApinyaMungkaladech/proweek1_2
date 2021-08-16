#include<stdio.h>
int main() {
	int n1, n2, n3;
	printf("Enter number : ");
	scanf_s("%d", &n1);
	printf("Enter number : ");
	scanf_s("%d", &n2);
	printf("Enter number : ");
	scanf_s("%d", &n3);

	if (n1 > n2) {
		if (n1 > n3) {
			printf("%d", n1);
		}
	}
	if (n2 > n1) {
		if (n2 > n3) {
			printf("%d", n2);
		}
	}
	if (n3 > n1) {
		if (n3 > n2) {
			printf("%d", n3);
		}
	}
}