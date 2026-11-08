#include <iostream>
#include <vector>
int min_vector_element(const std::vector<double>& vin)
{
    if(vin.size()==0){
        return -1;
    }
    double n=vin[0];
    int index=0;
    for(int i=1; i< vin.size(); i++){
        if(n>vin[i]){
            n=vin[i];
            index=i;
        }
    }
    return index;
}
int main ()
{
    std::vector<double> v;
    v={1,2,3};
    std::cout<<(min_vector_element(v)==0)<<std::endl;
    v={2,1,3.5};
    std::cout<<(min_vector_element(v)==1)<<std::endl;
    v={};
    std::cout<<(min_vector_element(v)==-1)<<std::endl;
}