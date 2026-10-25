#include <iostream>

bool isleap(int year){
    bool isleap;
    if( (year % 4) == 0){ 
        // if multiple of 4
        if( (year % 100) == 0){ 
            // if (also) multiple of 100
            if((year % 400)==0){
                isleap=1;
            }
            else{
                isleap=0;
            }
        }
        else{ 
            // if not multiple of 100
            // (but still multiple of 4)
            isleap=1;
        }
    }
    else{
        // if not multiple of 4
       isleap=0;
    }
    return isleap;
}
//
void dayadder(int lastday, int d1, int m1, int y1, int& d2, int& m2, int& y2){
    if(d1< lastday){
            d2=d1+1;
            m2=m1;
            y2=y1;
        }else{
            d2=1;
            m2=m1+1;
            y2=y1;
        }
}
void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    // TODO: d1, m1, y1 are inputs 
    // corresponding to the date d1/m1/y1
    // d2, m2, y2 are outputs that the function must compute
    // corresponding to the date d2/m2/y2 
    // which is meant to be the day after d1/m1/y1
    if(isleap(y1)){
        if(m1==1||m1==3||m1==5||m1==7||m1==8||m1==10)
    //these month lastday 31
    {
        dayadder(31,d1,m1,y1,d2,m2,y2);
    }
    else if(m1==12){
        if(d1<=30){
            d2=d1+1;
            m2=m1;
            y2=y1;
        }else{
            d2=1;
            m2=1;
            y2=y1+1;
        }
    }else if(m1==2){
        dayadder(29,d1,m1,y1,d2,m2,y2);
    }else{
        dayadder(30,d1,m1,y1,d2,m2,y2);
    }
    }
    //non leap year
    else{
        if(m1==1||m1==3||m1==5||m1==7||m1==8||m1==10)
    //these month lastday 31
    {
        dayadder(31,d1,m1,y1,d2,m2,y2);
    }
    else if(m1==12){
        if(d1<=30){
            d2=d1+1;
            m2=m1;
            y2=y1;
        }else{
            d2=1;
            m2=1;
            y2=y1+1;
        }
    }else if(m1==2){
        dayadder(28,d1,m1,y1,d2,m2,y2);
    }else{
        dayadder(30,d1,m1,y1,d2,m2,y2);
    }
    }
    // function leap_year is useful for this task

    // do not begin to write code straightaway
    // sketch some diagrams first like we did
    // for the leap year task

    // (this function should not print anything)
}
int main()
{
    int d1,d2,m1,m2,y1,y2;
    next_date(29,2,2000,d2,m2,y2);
    std::cout<<(d2==1 && m2==3 && y2==2000)<<std::endl;
    next_date(28,2,2001,d2,m2,y2);
    std::cout<<(d2==1 && m2==3 && y2==2001)<<std::endl;
    next_date(31,12,2000,d2,m2,y2);
    std::cout<<(d2==1 && m2==1 && y2==2001)<<std::endl;
    next_date(28,2,1900,d2,m2,y2);
    std::cout<<(d2==1 && m2==3 && y2==1900)<<std::endl;
}

