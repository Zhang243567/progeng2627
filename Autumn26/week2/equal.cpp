#include <iostream>

int main(){
    double a, b, c;

    a = 1;
    b = 2;
    c = a + b;

    std::cout << c << std::endl;
    // this line will print 3

    a = 2;

    std::cout << c << std::endl;
    // c will still be 3, since line 8 give the value a+b (3) to c, changing "a" will not change "c"

    // TODO: before testing the program
    // write in a comment below
    // what you expect to be printed

    c = a + b;

    std::cout << c << std::endl;
    //now c is 4, since line 22 give new sum of a, b to c

    // TODO: before testing the program
    // write in a comment below
    // what you expect to be printed

}