#include <iostream>
#include <string>
int main()
{
    // stage 1 input
    double tem_in , tem_out;
    std::string unit_in, unit_out;
    std::cin>>tem_in>>unit_in;
    bool unit_check = true;

    //stage 2 data processing
    const double C_to_F{2.12};
    if(unit_in=="C"||unit_in == "c"){

        unit_out = "F";
        tem_out = tem_in * C_to_F;
    }
    else if (unit_in == "F" || unit_in == "f"){
        unit_out = "C";
        tem_out = tem_in / C_to_F;
    }else {
        unit_check = false;


    }

    //stage 3 output
    if (unit_check){
    std::cout<<tem_out<<unit_out<<std::endl;
    }else{
        std::cout<<"uncorrect unit"<<std::endl;
    }
}