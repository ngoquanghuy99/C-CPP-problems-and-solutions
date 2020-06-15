#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	for(int i=1; i<=5; i++){
		if(i==2)
			continue;
		printf("%d", i);
	}

	return 0;
}

