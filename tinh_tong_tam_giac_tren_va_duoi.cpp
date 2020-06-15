#include<iostream>
using namespace std;
int main(){
    int n, sum1, sum2, a[500][500];
    cin>>n;
    sum1 = sum2 = 0;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>a[i][j];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i<j) sum1+=a[i][j];
            if(i>j) sum2+=a[i][j];
        }
    }
    cout<<sum1<<" "<<sum2;

}
