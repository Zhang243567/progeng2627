#include <iostream>
int main()
{
    //compute x*n as x+x+x...
    double x{}, acc{0};
    int n{}, counter{0};
    std::cin>>x>>n;
    while(counter<n){
        acc += x;
        counter ++;
    }
    std::cout<<x<<" * "<<n<<"= "<<acc<<std::endl;
}