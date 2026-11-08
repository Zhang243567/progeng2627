#include <iostream>
int gcd(int a1, int b1)
{
    //loop, condition remainder!=0
    int c1,d1;
    c1=a1/b1;
    d1=a1%b1;
    if(d1==0){
        return b1;
    }
    else{
        while(d1!=0){
            a1=b1;
            b1=d1;
            c1=a1/b1;
            d1=a1%b1;
        }
        return b1;
    }
}
int euler_totient(int n)
{
    int count=0;
    for(int i=1; i<n; i++){
        if(gcd(n,i)==1){
            count++;
        }
        
    }
    return count;
}

int totient_sum(int n, int &depth)
{
    int sum=0;
    depth=0;
    int output;
    if(n==1) return 0;
    output=euler_totient(n);
    depth++;
    sum+=output;
    while(output!=1){
        output=euler_totient(output);
        depth++;
        sum+=output;
    }
    return sum;
}

int main()
{
    int depth;

    std::cout<<(totient_sum(30, depth)==15)<<" "
    <<(depth==4)<<std::endl;
    std::cout<<(totient_sum(1, depth)==0)<<" "
    <<(depth==0)<<std::endl;



}