#include <iostream>
int main()
{
    int n;
    std::cin>>n;
    int c1=0;
    int c2=0;
    while(c1<n){
        int c2=0;
        while(c2<n){
            std::cout<<"*";
            c2++;
        }
        c1++;
        std::cout<<std::endl;
    }
}