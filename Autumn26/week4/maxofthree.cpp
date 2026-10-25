#include <iostream>
double max(double in1, double in2, double in3)
{
    double ret;
    if(in1>=in2 && in1>=in3){
        ret=in1;
    }else if(in2>=in3){
        ret=in2;
    }else{
        ret=in3;
    }
    return ret;
}
int main()
{
    double n1,n2,n3;
    std::cout<<(max(1,2,3)==3)<<std::endl;
    std::cout<<(max(1,1,0.5)==1)<<std::endl;
    std::cout<<(max(10,2,2)==10)<<std::endl;
    std::cout<<(max(1,2,0.5)==2)<<std::endl;
}