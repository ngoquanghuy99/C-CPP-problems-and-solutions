#include<iostream>
#include<conio.h>
using namespace std;
int n = 11;
int arr[] = {5,9,4,12,10,444,345,958,2,4,3};
void quicksort(int* arr, int leftIndex, int rightIndex){
 int i = leftIndex;
 int j= rightIndex;
 int pivot = arr[(leftIndex + rightIndex)/2];
 while(i<=j){
  while(arr[i] < pivot) i++;
  while(arr[j]> pivot) j--;
  if(i<=j){
   int temp = arr[i];
   arr[i] = arr[j];
   arr[j] = temp;
   i++;j--;
  }
  if(i<rightIndex) quicksort(arr,i,rightIndex);
  if(j>leftIndex) quicksort(arr,leftIndex,j);
 }
}
int main(){
 quicksort(arr,0,10);
 freopen("QUICKSORT.OUT","w",stdout);
 for(int i=0;i<11;i++){
  cout<<arr[i]<<" ";
 }
 return 0;
}
