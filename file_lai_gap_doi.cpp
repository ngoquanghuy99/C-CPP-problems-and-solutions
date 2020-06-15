#include <stdio.h>
FILE *fp;
typedef struct {
    int MSP;
	char name[100];
	float nhap,xuat;
}Myst;

int const size = sizeof(Myst);


void New(){
	fp = fopen("B17DCCN311.bin","rb");
	int SP,id;
	scanf("%d",&SP);
	int x = SP;
	Myst a;
	if(fread(&a,sizeof(a),1,fp)){
		fseek(fp,-size,SEEK_END);
		fread(&a,sizeof(a),1,fp);
		id = a.MSP +1;
	}
	else id = 1;
	fclose(fp);
	fp = fopen("B17DCCN311.bin","ab");

	while(SP-->0){
		a.MSP = id;
		id++;
		while(getchar()!='\n');
		scanf ("%[^\n]%*c", a.name );
		scanf("%f%f",&a.nhap ,&a.xuat );
		fwrite(&a,sizeof(Myst),1,fp);
	}
	fclose(fp);
	printf("%d",x);

}

void update(){
	fp = fopen("B17DCCN311.bin","rb+");
	Myst a;
	scanf("%d\n",&a.MSP );
	scanf ("%[^\n]%*c", a.name );
	scanf("%f%f",&a.nhap ,&a.xuat );
	Myst b;
	while(fread(&b,sizeof(b),1,fp)){
		if(b.MSP == a.MSP ){
			fseek(fp,-size,SEEK_CUR);
			fwrite(&a,sizeof(a),1,fp);
			break;
		}
	}
	fclose(fp);
	printf("%d",a.MSP );
}

void print(){
	fp = fopen("B17DCCN311.bin","rb");
	Myst a;
	while(fread(&a,sizeof(a),1,fp)){
		if(a.xuat - a.nhap >a.nhap ){
			printf("%d %s %.2f %.2f\n",a.MSP ,a.name ,a.nhap ,a.xuat );
		}
	}
	fclose(fp);
}

int main(){
	int choose;
	scanf("%d",&choose);
	switch(choose){
		case 1: New(); break;
		case 2: update(); break;
		case 3: print();  break;
		default : break;
	}
}
