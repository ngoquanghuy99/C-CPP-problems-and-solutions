#include <stdio.h>

int main()
{
	int n, arr[10] = {0};
	scanf("%d", &n);
	if (!n) {
		arr[0]++;
	}
	while (n > 0) {
		arr[n % 10]++;
		n /= 10;
	}
	for (int i = 1; i <= 9; i++) {
		if (arr[i]) {
			printf("%d %d\n", i, arr[i]);
		}
	}
	if (arr[0]) {
		printf("%d %d\n", 0, arr[0]);
	}
	return 0;
}
