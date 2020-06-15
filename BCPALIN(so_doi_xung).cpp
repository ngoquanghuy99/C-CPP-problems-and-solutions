#include<stdio.h>
#include<math.h>

int main(){
	int n, test;
	scanf("%d", &test);
	for(int i=1; i<=test; i++){
		scanf("%d", &n);
	}
	int dem = 0;
	int temp = n;
	while(temp != 0){
		temp = temp / 10;
		dem++;
	}
	temp = n;
	dem--;
	int x = 0; 
	while(temp != 0){
		x = x + (temp % 10) * pow(10*1.0, dem);
		dem--; 
		temp = temp / 10;
	}
	for(int i=1; i<=test; i++){
		if(n == x)
			printf("YES");
		else 
			printf("NO");
	}
	return 0;
}
