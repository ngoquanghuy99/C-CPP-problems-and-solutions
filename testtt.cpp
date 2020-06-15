#include<iostream>
using namespace std;

int main(){
    int n, a[200], p, so;
    cin>>n>>p>>so;
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=n; i>p; i--)
        a[i] = a[i-1];
    a[p] = so;
    for(int i=0; i<n+1; i++)
        cout<<a[i]<<" ";
}
