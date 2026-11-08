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
int digits_to_decimal(std::vector<int> digits,int base)
{
    int decimal=0;
    for(int i=0; i<digits.size(); i++){
        int weight=1;
        for(int t=0; t<i; t++){
            weight *= base;
        } 
        decimal += digits[i] * weight;
    }
    return decimal;
}

bool convert_base(const std::vector<int> base1_digits,
    int base1,
    int base2,
    std::vector<int>& base2_digits)
    {
        if(base1>16 || base1<2 || base2>16 || base2<2)
        {return 0;}
        int decimal;
        decimal= digits_to_decimal( base1_digits,base1);
        digits_in_base(decimal,base2,base2_digits);
        return 1;
    }

int main() {
    
    
    int num = 250;
    std::vector<int> octal_digits;
    std::vector<int> hex_digits;

    /// Obtain the octal digits of 250
    digits_in_base(num, 8, octal_digits);

    std::cout << "Octal: ";
    print_digits_as_number(octal_digits);

    /// Convert the octal digits to hexadecimal digits
    if (convert_base(octal_digits, 8, 16, hex_digits)) {
        std::cout << "Hexadecimal: ";
        print_digits_as_number(hex_digits);
    } else {
        std::cout << "Invalid base" << std::endl;
    }

    return 0;

}