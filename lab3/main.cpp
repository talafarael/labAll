/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

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