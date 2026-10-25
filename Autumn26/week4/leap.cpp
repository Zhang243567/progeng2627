#include <iostream>

// we can define a function that returns a bool

bool leap_year(int year){
    bool ly;

    // TODO: check whether the year is a leap year or not
    // store result in variable ly
     if( (year % 4) == 0){ 
        // if multiple of 4

        if( (year % 100) == 0){ 
            // if (also) multiple of 100
            if((year % 400)==0){
                ly=true;
            }
            else{
                ly=false;
            }
        }
        else{ 
            // if not multiple of 100
            // (but still multiple of 4)
           ly=1;
        }
    }
    else{
        // if not multiple of 4
        ly=0;
    }


    return ly;
    // we *do not print* anything in the function
}

int main(){

    /*int input_year;

    std::cout << "please enter a year" << std::endl;
    std::cin >> input_year;

    // a function returning a bool 
    // can be used directly in the condition
    // of an if statement 

    if(leap_year(input_year)){
        std::cout << "it's a leap year" << std::endl;
    }
    else{
        std::cout << "it's not a leap year" << std::endl;
    }*/
    std::cout << (leap_year(1600) == true) << std::endl;
    std::cout << (leap_year(1700) == false) << std::endl;
    std::cout << (leap_year(1800) == false) << std::endl;
    std::cout << (leap_year(1900) == false) << std::endl;
    std::cout << (leap_year(2000) == true) << std::endl;
    std::cout << (leap_year(2100) == false) << std::endl;
    std::cout << (leap_year(2200) == false) << std::endl;
    std::cout << (leap_year(2300) == false) << std::endl;
}