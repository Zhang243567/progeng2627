#include <iostream>
int main()
{
    int sum{0}, n{1};
    std::cout<<"enter a number"<<std::endl;
    std::cin>>n;
    while(n != 0){
        sum += n;
        std::cout<<"sum so far is "<<sum<<std::endl;
        std::cout<<"enter a number"<<std::endl;
        std::cin>>n;
    }

}