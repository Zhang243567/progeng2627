#include<iostream>
void rect(double a, double b, double& p, double& area)
{
    p=2*a+2*b;
    area= a*b;
}
int main(){
    double a, b, perimeter, area;
    std::cout<<"enter length and width"<<std::endl;
    std::cin>>a>>b;
    rect(a,b,perimeter,area);
    std::cout<<"perimeter: "<<perimeter<<std::endl;
    std::cout<<"area: "<<area<<std::endl;
}