#include <stdio.h>
#include <math.h>

int main()
{
	int n, arr[100];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	int min = abs(arr[0] - arr[1]), ele1 = arr[0], ele2 = arr[1];
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if(abs(arr[i] -  arr[j]) < min) {
				min = abs(arr[i] -  arr[j]);
				ele1 = arr[i] > arr[j] ? arr[j] : arr[i];
				ele2 = arr[i] > arr[j] ? arr[i] : arr[j];
			}
		}
	}
	printf("%d %d %d", min, ele1, ele2);
    return 0;
}
