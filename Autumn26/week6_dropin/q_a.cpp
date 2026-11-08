#include <iostream>
#include <vector>
int digits_in_base(int num,int base,
     std::vector<int>& digits)
     {
        if(base<2 || base>16) return 0;
        int a,b,c,d;
        c=1;
        a=num;
        b=base;
        while(c!=0){
            c=a/b;
            d=a%b;
            digits.push_back(d);
            a=c;
        }
        return 1;
     }
void print_digits_as_number(std::vector<int> digits)
{
    for(int i=digits.size()-1; i>=0; i--){
        if(digits[i]>0 && digits[i]<=9){
            std::cout<<digits[i];
        }else{
            if(digits[i]==10) std::cout<<"A";
            else if(digits[i]==11) std::cout<<"B";
            else if(digits[i]==12) std::cout<<"C";
            else if(digits[i]==13) std::cout<<"D";
            else if(digits[i]==14) std::cout<<"E";
            else if(digits[i]==15) std::cout<<"F";
        }
    }
    std::cout<<std::endl;
}

int main() {
    int num = 250;
    int base = 16;
    std::vector<int> digits;

    /// Construct several more test cases
    /// using different values of num and base

    if (digits_in_base(num, base, digits)) {
        print_digits_as_number(digits);
    } else {
        std::cout << "Invalid base" << std::endl;
    }
     num = 123;
     base = 8;
    digits.clear();

    /// Construct several more test cases
    /// using different values of num and base

    if (digits_in_base(num, base, digits)) {
        print_digits_as_number(digits);
    } else {
        std::cout << "Invalid base" << std::endl;
    }
    return 0;
}