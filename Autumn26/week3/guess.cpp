#include <iostream>
#include <string>
int main()
{
    //a,b for upper lower bound
    //first cin a b
    //n is the number my code guess always (a+b)/2
    //str is string which get respond from user
    //if string less or greater or yes
    //if less, b=n, n=(a+b)/2
    //if greater, a=n, n=...
    int a,b;
    int n;
    std::cin>>a>>b;
    std::string str;
    n = (a+b)/2;
    std::cout<<n<<std::endl;
    std::cin>>str;
    while(str != "yes"){
        if(str == "less"){
            b=n;
            n= (a+b)/2;
        }else if(str == "greater"){
            a=n;
            n = (a+b)/2;
        }
        std::cout<<n<<std::endl;
        std::cin>>str;
    }


}