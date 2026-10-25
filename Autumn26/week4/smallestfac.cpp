#include <iostream>
int smallest_factor(int n)
{
    bool found_factor;
    for(int cf = 2; cf < n; cf++){
        if( (n % cf) == 0){ // n can be divided by cf...

            found_factor = true;
            return cf;
            //...it means we have found a factor!
        }
    }
    return 0;
}
int main()
{
    int n;
    std::cout<<(smallest_factor(7)==0)<<std::endl;
    std::cout<<(smallest_factor(8)==2)<<std::endl;
    std::cout<<(smallest_factor(0)==0)<<std::endl;
}