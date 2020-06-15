#include<iostream>
using namespace std;
int n, a[500000], b[500000], dem;
int main(){
	cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int j=0; j<n; j++)
        b[j] = 1;
    for(int i=0; i<n; i++){
        dem = 1;
        if(b[i]){
            b[i] = 0;
            for(int j=i+1; j<n; j++){
                if(a[i]==a[j]){
                    dem++;
                    b[j]=0;
                }
            }
           // printf("%d %d\n", a[i], dem);
            cout<<a[i]<<" "<<dem;
            cout<<endl;
        }
    }
}
