#include <iostream>

int main()
{
  
     
    int aEnd=1;
   int a = 220;
    int b = 284;
int bEnd=1;

for(int i=2;i<=a/2;i++){
   
    if(a%i==0){
        int j=a/i;
     std::cout<<"i:"<<i<<"j"<<std::endl;
    
        aEnd=aEnd+i;
        
    }
}

for(int y=2;y<=b/2;y++){  
   
    if(b%y==0){
        // int j=b/y;
       std::cout<<"i:"<<y<<"j"<<std::endl;
        
         bEnd=bEnd+y;
       
        
    }
}
std::cout<<aEnd<<std::endl;
std::cout<<bEnd<<std::endl;
if(bEnd==a&&b==aEnd){
    std::cout<<"sum true";
}else{
    std::cout<<"sum full";
}
    return 0;
}