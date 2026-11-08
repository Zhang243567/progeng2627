#include <iostream>
#include <vector>
void append_vectors
(const std::vector<int>& vin1,
const std::vector<int>& vin2, std::vector<int>& vout)
{
    for(int i=0; i<vin1.size();i++){
        vout.push_back(vin1[i]);
    }
    for(int i=0; i<vin2.size();i++){
        vout.push_back(vin2[i]);
    }
}
int main()
{
    std::vector<int> vin1;
    std::vector<int> vin2;
    std::vector<int> vout;
    vin1={1,2,3};
    vin2={4,5,6};
    vout.clear();
    append_vectors(vin1,vin2,vout);
    std::cout<<(vout==std::vector<int>{1,2,3,4,5,6})
    <<std::endl;
    vin1={1,3};
    vin2={0,5,6};
    vout.clear();
    append_vectors(vin1,vin2,vout);
    std::cout<<(vout==std::vector<int>{1,3,0,5,6})
    <<std::endl;
}   
