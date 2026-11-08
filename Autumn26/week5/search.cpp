#include <iostream>
#include <vector>
int search_vector(int n, const std::vector<int>& vin)
{
    if(vin.size()==0){
        return -1;
    }
    for(int i=0; i<vin.size();i++){
        if(n==vin[i]){
            return i;
        }
    }
    return -1;
}
int main()
{
    std::vector<int> v;
    v={1,2,3,4};
    std::cout<<(search_vector(3, v)==2)<<std::endl;
    v={1,2,3,4};
    std::cout<<(search_vector(5, v)==-1)<<std::endl;
    v={1,2,2,4};
    std::cout<<(search_vector(2, v)==1)<<std::endl;
    

}