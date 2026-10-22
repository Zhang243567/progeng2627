#include <iostream>
#include <cmath>
#include <string>

int main(){
    double a, b, c;

    std::cout << "Enter three side lengths: ";
    std::cin >> a >> b >> c;

    // Check whether the sides form a valid triangle
    bool valid{true};
    if(a+b<c) valid=false;
    else if(a+c<b) valid=false;
    else if(b+c<a) valid=false;
    if(valid){
        std::cout<<"valid triangle"<<std::endl;
    }else{
        std::cout<<"triangle not valid"<<std::endl;
    }
    // If valid:
    //   Determine and display the type of triangle
    //   Calculate and display the perimeter
    //   Calculate and display the area using Heron's formula
    if(valid){
        std::string type;
        if(a==b&&a==c){
            type = "equilateral";
        }else if(a==b ||b==c||c==a){
            type =" isosceles";
        }else type= " scalene";

        double p=a+b+c;
        
        double s = 0.5*p;
        double area;
        area= std::sqrt(s*(s-a)*(s-b)*(s-c));
        std::cout<<type<<std::endl;
        std::cout<<"parameter: "<<p<<std::endl;
        std::cout<<"area: "<<area<<std::endl;
    }

    // Otherwise:
    //   Display a message saying the triangle is invalid

}