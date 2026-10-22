#include <iostream>
int main()
{
    //input two coordinate, 4 number
    int a1,a2,b1,b2;
    std::cout<<"enter first coordinate: "<<std::endl;
    std::cin>>a1>>a2;
    std::cout<<"enter second coordinate: "<<std::endl;
    std::cin>>b1>>b2;
    bool valid{false};
    //8 condition a1=b1-2||a1=b1+2, a2=b2-2||a2=b2+2
    //a1=b1-1||a1=+1
    if(a1==b1-2||a1==b1+2){
        if(a2==b2-1||a2==b2+1){
            valid=true;
        }
    }else if(a1==b1-1||a1==b1+1){
        if(a2==b2-2||a2==b2+2){
            valid=true;
        }
    }
    if(valid)std::cout<<"valid move"<<std::endl;
}