#include<stdio.h>
#include<math.h>

int main(){
	int n, mang[20][20], dientich;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < 4; j++){
			scanf("%d", &mang[i][j]);
		}
		printf("\n");
	}
	for(int i = 0; i < n; i++){
		for(int j =0; j < 4; j++){
			if((mang[i][2] < mang[i+1][0]) || (mang[i][0] > mang[i+1][2])){
				dientich = (mang[i][2] - mang[i][0]) * (mang[i][1] - mang[i][3]) + (mang[i+1][2] - mang[i+1][0]) * (mang[i+1][1] - mang[i+1][3]);	
			}
		}
	}
	printf("%d", dientich);
	return 0;
}

