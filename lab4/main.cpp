#include <iostream>
using namespace std;
void merge(int *,int, int , int );
void merge_sort(int *arr, int low, int high)
{
    int mid;
    if (low < high){
       
        mid=(low+high)/2;
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);
        
        merge(arr,low,high,mid);
    }
}

void merge(int *arr, int low, int high, int mid)
{
    int i, j, k, c[50];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high) {
        if (arr[i] < arr[j]) {
            c[k] = arr[i];
            k++;
            i++;
        }
        else  {
            c[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid) {
        c[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high) {
        c[k] = arr[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)  {
     
        arr[i] = c[i]; 
    }
   
}

int main()
{
   
    
   int myarray[20];
  int num=20;
  for(int i=0;i<20;i++){
    myarray[i]=rand()%100;
  }
    merge_sort(myarray, 0, num-1);
    
    for (int i = 0; i < num; i++)
    {
        cout<<myarray[i]<<std::endl;
    }
}