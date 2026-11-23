#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <cmath>

void next_binary( std::vector<int>& number)
{
    int n_dec=0;
    int size=number.size();
    int weight=0;
    for(int i=size-1; i>=0; i--)
    {
        n_dec += number[i]* std::pow(2,weight);
        weight++;
    }
    n_dec++;
    if(n_dec == std::pow(2, size))
    {
        
        number.clear();
        for(int i=0; i<size; i++){
            number.push_back(0);
        }
    }
    else{
        std::vector<int> n_reverse;
        for(int i=0; i<size; i++)
        {
            n_reverse.push_back(n_dec % 2);
            n_dec = n_dec/2;
        }
        number.clear();
        for(int i=n_reverse.size()-1; i>=0; i--)
        {
            number.push_back(n_reverse[i]);
        }
    }
}

int main()
{
    std::vector<int> number={0,1,1,1};

    next_binary(number);

    for(int i=0; i<number.size(); i++){
        std::cout<<number[i];
    }
    std::cout<<std::endl;

    return 0;
}