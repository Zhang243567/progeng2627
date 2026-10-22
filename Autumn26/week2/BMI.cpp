#include <iostream>
int main()
{
    double weight, height;
    double BMI;
    std::cout<<"enter your weight in kg"<<std::endl;
    std::cin>>weight;
    std::cout<<"enter your height in meter"<<std::endl;
    std::cin>>height;
    BMI = weight/height/height;
    std::cout<<BMI<<std::endl;
    
}