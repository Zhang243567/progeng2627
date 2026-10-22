#include <iostream>
int main()
{
    int  n{1}, sum{0}, counter{0};
    double aver{0};

    std::cout<<"enter a number"<<std::endl;
    std::cin>>n;
    while(n != 0){
        sum += n;
        counter++;
        aver = 1.0*sum/counter;
        std::cout<<"average so far is "<<aver<<std::endl;
        std::cout<<"enter a number"<<std::endl;
        std::cin>>n;
    }

}