#include <iostream>
int main()
{
    int n,reminder;
    std::cout<<"please enter a number"<<std::endl;
    std::cin>>n;
    reminder= n%3;
    if(reminder == 0){
        std::cout<<"number is multiple of 3"<<std::endl;
    }else{
        std::cout<<"the number is not multiple of 3"<<std::endl;
        
    }

}