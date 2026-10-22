#include <iostream>
int main()
{
    //get a start number n, 
    //need a step vara to count step, n++ every loop
    //while loop if else inside, n++ every loop
    //remember the max number
    //print out the sequence, only one vara store value, n need to be print out every loop
    //want to print out last n=1
    int n;
    int step{0};
    int max;
    std::cin>>n;
    max=n;
    while(n!=1){
        if(n%2==0){
            n/=2;
        }
        else{
            n*=3;
            n+=1;
        }
        std::cout<<n<<" ";
        if(max<n){
            max=n;
        }
        step++;
    }
    std::cout<<std::endl;
    std::cout<<"step: "<<step<<std::endl;
    std::cout<<"maximum number: "<<max<<std::endl;

}