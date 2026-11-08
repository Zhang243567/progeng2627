#include <iostream>
int gcd(int a1, int b1)
{
    //loop, condition remainder!=0
    int c1,d1;
    c1=a1/b1;
    d1=a1%b1;
    if(d1==0){
        return b1;
    }
    else{
        while(d1!=0){
            a1=b1;
            b1=d1;
            c1=a1/b1;
            d1=a1%b1;
        }
        return b1;
    }
}

int main(){
    std::cout << (gcd(48, 18) == 6) << std::endl;
    std::cout << (gcd(48, 17) ==1)<< std::endl;

    // add several other test cases

}