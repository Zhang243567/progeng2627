#include<iostream>
int main()
{
    //multiplier m start at 1, m++ every loop
    //a start from 1, a *= i every loop
    //enter loop n time
    int a=1,n;
    int i;
    std::cin>>n;
    for(i=1; i<n+1; i++){
        a *= i;
    }
    std::cout<<n<<"!"<<"="<<a<<std::endl;

}