#include <iostream>
#include <string>

void swaptext(std::string& str1_swap,
     std::string& str2_swap)
{
    std::string temp;
    temp=str1_swap;
    str1_swap=str2_swap;
    str2_swap=temp;

}
int main()
{
    std::string str1_main, str2_main;
    std::cin>>str1_main>>str2_main;
    std::cout<<"str1: "<<str1_main<<std::endl;
    std::cout<<"str2: "<<str2_main<<std::endl;
    swaptext(str1_main,str2_main);
    std::cout<<"after swaping"<<std::endl;
    std::cout<<"str1: "<<str1_main<<std::endl;
    std::cout<<"str2: "<<str2_main<<std::endl;

}