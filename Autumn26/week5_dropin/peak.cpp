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

int depth(int n)
{
    
    int depth=0;
    int output;
    if(n==1) return 0;
    output=euler_totient(n);
    depth++;
    
    while(output!=1){
        output=euler_totient(output);
        depth++;
    }
    return depth;
}
int local_peak(int a,int b, int& d_peak, int& d1, int& d2)
//d1=d(x-1), d2=d(x+1)
{
    int peak;
    double max_aver=0;
    for(int i=b-1; i>a; i--)
    {
        double aver_i;
        aver_i=(depth(i) - depth(i - 1) + depth(i) - depth(i + 1)) / 2;
        if(aver_i> max_aver 
            && depth(i)> depth(i - 1)
            && depth(i)> depth(i + 1)){
            max_aver=aver_i;
            peak=i;
            d_peak = depth(i);
            d1= depth(i-1);
            d2= depth(i+1);
        }
        if(max_aver=0) return -1;
        return peak;

    }

}

int main()
{
    int a,b,dp,d1,d2;




}