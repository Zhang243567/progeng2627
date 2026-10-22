#include <iostream>
int main()
{
    int x,n,i;
    int a=1;
    std::cin>>x;
    std::cin>>n;
    for(i=0; i<n; i++){
        a*=x;

    }
    std::cout<<x<<"^"<<n<<"="<<a<<std::endl;
}