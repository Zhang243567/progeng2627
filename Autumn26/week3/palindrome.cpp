#include <iostream>
int main()
{
    /*You start with a number.
Then you keep repeating the same process:
Reverse the digits.
Add the reversed number to the original number.
Check whether the result is a palindrome.
If not, repeat.
A palindrome number is a number that looks the same forwards and backwards, such as 121, 1331, or 4554.
A while loop is perfect because we do not know beforehand how many repetitions will be needed.*/

    int n;
    int reverse{0};
    std::cin>>n;
    bool palin_test{false};
    //make n reverse, %10 get least significant digit, /10 get rid of that digit
    //while loop condition n!= 0
    //every time get a least significant digit, reverse*10 + that digit

    int operate=n;
    while(operate !=0){
        reverse= reverse*10 + (operate%10);
        operate/=10;
    }
    if(n==reverse)palin_test=true;
    while(palin_test != true){
        reverse=0;
        n=n+reverse;
        operate=n;
        while(operate !=0){
        reverse= reverse*10 + (operate%10);
        operate/=10;
    }
    if(n==reverse)palin_test=true;
    }
    std::cout<<reverse<<std::endl;
    
    
}