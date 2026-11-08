#include <iostream>
#include <vector>
void filter_v
(const std::vector<double>& vin, double t,
 std::vector<double>& vout)
 {
    for(int i=0;i<vin.size();i++){
        if(vin[i]<t){
            vout.push_back(vin[i]);
        }
    }
 }
 int main()
 {
    std::vector<double>vin;
    std::vector<double>vout;
    double t;
    vout.clear();
    vin={1,2,3,4,2};
    filter_v(vin,3.1,vout);
    std::cout<<(vout==std::vector<double>{1,2,3,2})
    <<std::endl;
    vout.clear();
    vin={1,2,3,4,2};
    filter_v(vin,0.9,vout);
    std::cout<<(vout==std::vector<double>{})
    <<std::endl;
 }