#include<iostream>
#include<cmath>
using namespace std;

int tong(int a[][500], int n, int j){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum+=a[i][j];
    }
    return sum;
}

int timmax(int a[][500], int n, int m){
    int h = 0;
    int min = tong(a,n,0);
    for(int j=1; j<m; j++){
        if(tong(a,n,j) < min){
            min = tong(a,n,j);
            h = j;
        }
    }
    return h;
}

int main(){
    int n, a[500][500], kq;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    kq = timmax(a,n,n);
    cout<<kq+1;
    cout<<endl;
    for(int k=0; k<n; k++)
        	cout<<a[k][kq]<<" ";
    return 0;
}
