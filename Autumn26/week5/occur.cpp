#include<iostream>
#include<vector>
int main()
{
    std::vector<int> v;
    int n;
    std::cout<<"enter n"<<std::endl;
    std::cin>>n;
    for(int i=0;i<n;i++ ){
        std::cout<<"enter a number"<<std::endl;
        int t;
        std::cin>>t;
        v.push_back(t);
        std::cout<<"v["<<i<<"] = "<<v[i]<<std::endl;
        
    }
    int s;
    std::cout<<"enter s"<<std::endl;
    std::cin>>s;
    int count=0;
    std::vector<int> indices;
    for(int i=0; i<n; i++){
        if(v[i]==s){
            count++;
            indices.push_back(i);
        }
    }
    std::cout<<count<<" occurences of "<<s<<" at indices: "
    <<std::endl;
    for(int i=0;i<indices.size();i++){
        std::cout<<indices[i]<<std::endl;
    }
}