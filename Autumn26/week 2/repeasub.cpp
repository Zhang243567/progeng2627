#include <iostream>
int main()
{
    // 4 variable : a/b, q, r  all integer
    //condition to enter loop, a>=b
    //for every loop, a=a-b, q++
    //after all the loop, now a<b, r=a
    //if we enter a < b initially, q should be 0, r should be a
    // need a vara to store the initial value for a , since I let a change
    int a,b,r,p,q{0};
    std::cin>>a>>b;
    p=a;
    while(a>b){
        a -=b;
        q++;
    }
    r =a;
    std::cout<<p<<" / "<<b<<" = "<<q<<"reminder: "<<r<<std::endl;
}