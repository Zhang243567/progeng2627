#include<iostream>
#include<vector>
int main()
{
    std::vector<int> v;
    int n;
    std::cin>>n;
    for(int i=0;i<n;i++ ){
        std::cout<<"enter a number"<<std::endl;
        int t;
        std::cin>>t;
        v.push_back(t);
        std::cout<<"v["<<i<<"] = "<<v[i]<<std::endl;
        
    }
    int t;
    std::cin>>t;
    for(int i=0; i<n; i++){
        if(v[i]<t){
            std::cout<<v[i]<<std::endl;
        }
    }
}