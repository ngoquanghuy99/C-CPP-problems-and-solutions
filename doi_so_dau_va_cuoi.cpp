#include <stdio.h>
#include <math.h>

int main()
{
	int n, k = -1;
	scanf("%d", &n);
	int n1 = n;
	while (n1) {
		n1 /= 10;
		k++;
	}
	n1 = n % 10;
	int n2 = n / pow(10, k);
	n %= (int) pow(10, k);
	n /= 10;
	n = n * 10 + n2;
	n += n1 * pow(10, k);
	printf("%d", n);
	return 0;
}
