#include <iostream>
#include <string>
int main()
{
    std::string x;
    std::cin>>x;
    while( x != "STOP" && x != "stop"){
        std::cout<<x<<std::endl;
        std::cin>>x;
    }
}