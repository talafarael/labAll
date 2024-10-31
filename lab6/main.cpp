#include <iostream>

int main(){
    int longer=5;
    int arr1[5];
    int arr2[5];
   for(int i=0;i<longer;i++){
int num1=rand()%100;
int num2=rand()%100;
      arr1[i]=num1;
     arr2[i]=num2;
   }
     for(int i=0;i<longer;i++){
        std::cout<<*(arr2+i)<<"|"<<*(arr1+i)<<std::endl;
     }
    for(int i=0;i<longer;i++){
       *(arr1 + i) = *(arr2 + i) + *(arr1 + i); 
*(arr2 + i) = *(arr1 + i) - *(arr2 + i);
*(arr1 + i) = *(arr1 + i) - *(arr2 + i);
    }
     for(int i=0;i<longer;i++){
        std::cout<<*(arr2+i)<<"|"<<*(arr1+i)<<std::endl;
     }
return 0;
}