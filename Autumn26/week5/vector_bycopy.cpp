#include <iostream>
#include <vector>

// maybe not the most efficient way:
double sum_vector(std::vector<double> vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int main(){
    std::vector<double> v;
    int n;
    std::cout<<"how many number want to enter"<<std::endl;
    std::cin>>n;
    for(int i=0; i<n; i++){
        int t;
        std::cin>>t;
        v. push_back(t);
    }

    std::cout << "the sum is: " << sum_vector(v) << std::endl;

}