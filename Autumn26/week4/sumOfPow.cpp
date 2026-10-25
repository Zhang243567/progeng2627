#include <iostream>
#include <cmath>
double mypow(double base, int exp){
    double result; 
    // we declare a variable for the result
    // (should it be initialised? to what value?)
    result=1;
    // TODO: use a for loop to implement the repeated multiplication algorithm 
    // so that at the end of the loop variable result contains base^exp
    if(exp>=0){
        for(int i=0;i<exp;i++)
        {
            result*=base;
        }
    }else{
        int exp1= -1*exp;
        for(int i=0;i<exp1;i++)
        {
            result*=base;
        }
        result=1.0/result;
    }
    return result;
    // at the end we return the value we computed
    // we *do not print* anything in the function
}
double sumofpow(double x, int n)
{
    
    double sum{0};
    
    for(int i=1;i<=n;i++){
        sum+=mypow(x,i);

    }
    return sum;
}

int main()
{
    std::cout<<(sumofpow(2,3)==14)<<std::endl;//2+4+8
    std::cout<<(sumofpow(3,2)==12)<<std::endl;
}