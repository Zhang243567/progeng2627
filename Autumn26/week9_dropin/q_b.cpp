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

bool rows_in_order(const std::vector<std::vector<int>>& m, int& row)
{
    std::vector<int> v_tmp;
    for(int i=0; i<m.size()-1; i++)
    {
        v_tmp.clear();
        v_tmp = m[i];
        next_binary(v_tmp);
        if(m[i+1] != v_tmp){
            row = i+1;
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<std::vector<int>> matrix = {
        {0, 1, 0, 1, 0},
        {0, 1, 0, 1, 1},
        {0, 1, 1, 0, 0},
        {0, 1, 1, 0, 1},
        {0, 1, 1, 1, 0},
        {0, 1, 1, 1, 1},
        {1, 0, 0, 0, 0},
        {1, 0, 0, 0, 1},
        {1, 0, 0, 1, 0}
    };

    int row = -1;

    if (rows_in_order(matrix, row)) {
        std::cout << "Rows are in order" << std::endl;
    } else {
        std::cout << "Rows are not in order" << std::endl;
        std::cout << "First incorrect row: " << row << std::endl;
    }

    return 0;
}