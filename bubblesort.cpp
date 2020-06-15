 #include<stdio.h>

void bubblesort (float a[], int n){
for(int i=1;i<=n-1;i++){
for(int j=n-1;j>i;j--){
if(a[j]<a[j-1]){
int tg=a[j];
a[j]=a[j-1];
a[j-1]=tg;
}
}
}
}
void doctep(float a[],int &n){
FILE*f;
f=fopen("bubblein.txt","r");
fscanf(f,"%d",&n);
for(int i=1;i<=n;i++){
fscanf(f,"%f",&a[i]);}
fclose(f);
}
void ghitep(float a[], int &n){
FILE*f;
f=fopen("bubbleout1.txt","w");
for(int i=1;i<=n;i++) fprintf(f," %0.2f",a[i]);
fclose(f); 
}
int main()
{
float a[100];
int n;
doctep(a,n);
ghitep(a,n);
bubblesort(a,n);
ghitep(a,n);
return 0;
}
