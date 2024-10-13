

#include <iostream>
#include <stack>
#include <string>
#include <vector>
char eventListen();
void addItem(std::stack<std::string> &arr);
void removeItem(std::stack<std::string> &arr);
void findItem(std::stack<std::string> arr);
int main(){ 
   bool exitInEventLoop=false;
     std::stack<std::string> arr;
  while(!exitInEventLoop){
   char event=eventListen();
   switch(event) {
  case 'a':
     addItem(arr);
    break;
  case 'r':
   removeItem(arr);
    break;
     case 's':
     if(arr.empty()){
      std::cout<<"stack is empty";
      break;
     }
  std::cout<<arr.top()<<std::endl;
    break;
     case 'f':
  findItem(arr);
    break;
     case 'e':
   exitInEventLoop=true;
    break;
  default:
   break;
}
}

    return 0;
}

char eventListen(){
     char event;
     
    std::cout<<"if you want add item enter a "<<std::endl;
    std::cout<<"if you want remove las item enter r "<<std::endl;
    std::cout<<"if you want see last item enter s "<<std::endl;
    std::cout<<"if you want found item enter f "<<std::endl;
    std::cout<<"if you want found exit  enter e :";
    std::cin>>event;
    return event;
}
void addItem(std::stack<std::string>& arr){
    std::string item;
    std::cout<<"enter item"<<std::endl;
    std::cin>>item;
    arr.push(item);
    // std::cout<<arr.size();
}
void removeItem(std::stack<std::string>& arr){
    if(!arr.empty()){
    arr.pop();
      std::cout<<"item delete"<<std::endl;
      return;
   }
   std::cout<<"sorry stack empty you cant delete item"<<std::endl;
}
void findItem(std::stack<std::string> arr){
    std::string item; 
  std::cout<<"enter Item"<<std::endl;
 std::cin>>item;
  while(arr.size()!=0){
    
    if(arr.top()==item){
        std::cout<<"your element is the"<<arr.size()<<" in turn"<<std::endl;
        break;
    }
    arr.pop();
  }
  if(arr.size()==0){
    std::cout<<"sorry but we don't have your item"<<std::endl;
  }
   return;
}