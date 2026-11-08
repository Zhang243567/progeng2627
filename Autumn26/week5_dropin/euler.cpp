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
int euler_totient(int n)
{
    int count=0;
    for(int i=1; i<n; i++){
        if(gcd(n,i)==1){
            count++;
        }
        
    }
    return count;
}

int main()
{
    std::cout <<(euler_totient(12)==4)<< std::endl;
    std::cout <<(euler_totient(11)==10)<< std::endl;

}