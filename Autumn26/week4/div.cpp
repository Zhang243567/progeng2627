#include <iostream>
void division(int a ,int b, int& q, int& r)
{
    q=a/b;
    r=a%b;
}
int main(){
    int a ,b;
    std::cin>>a>>b;
    int q,r;
    division(a,b,q,r);
    std::cout<<"q= "<<q<<std::endl;
    std::cout<<"r= "<<r<<std::endl;
}