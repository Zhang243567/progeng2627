#include <iostream>
double max(double in1, double in2)
{
    double ret;
    if(in1>=in2){
        ret=in1;
    }else{
        ret=in2;
    }
    return ret;
}
int main()
{
    double n1,n2;
    std::cout<<"enter two numbers"<<std::endl;
    std::cin>>n1>>n2;
    std::cout<<max(n1,n2)<<std::endl;
}