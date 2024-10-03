/******************************************************************************
Напишіть програму, яка моделює гру "Вгадай число", де комп'ютер намагається вгадати число, яке задумав користувач, використовуючи цикл while.
           https://docs.google.com/document/d/1QogNk0zPrNq6UNLASgbhnIllBBChuIxH/edit?usp=sharing&ouid=104607196295309904978&rtpof=true&sd=true

*******************************************************************************/

#include <iostream>
char enter(){
    char yes;
std::cout<<"if this num bigger enter b if num less if it is your num enter y to";
  std::cin>>yes;
  if(yes=='l'){
      return 'l';
  }
     if(yes=='b'){
      return 'b';
  }
     if(yes=='y'){
      return 'y';
  }
  enter();
}
int main()
{  
    bool stateNum=true;
    std::cout<<" Guess the number";
    int range;
    std::cout<<"Lead Range";
    std::cin>>range;
     int maxNum=range;
    int minNum=1;
while(stateNum){
    
    int num=minNum+maxNum;
  std::cout<<"your num is a ?:" << num/2<<std::endl;
  char yes=enter();

   if('b'==yes){
       minNum=(maxNum+minNum)/2;
   }
    if('l'==yes){
        
      maxNum=(maxNum+minNum)/2;
       std::cout<<maxNum;
   }
   if('y'==yes){
       std::cout<<"Congratulations";
       break;
   }
    
}
}