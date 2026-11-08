#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
#include<vector>
int main(){
    std::ifstream ad;
    std::ifstream real_meaning;
    std::string ad_file_name;
    std::string real_mean_file;
    std::cout<<"enter ad"<<std::endl;
    std::cin>>ad_file_name;
    std::cout<<"enter real meaning file"<<std::endl;
    std::cin>>real_mean_file;
    ad.open(ad_file_name);
    if(!ad.is_open())
    {
        std::cout<<"error open input1 file"<<std::endl;
        return EXIT_FAILURE;
    }
    std::vector<std::string> v1;
    std::string tmp;
    while(ad>>tmp){
        v1.push_back(tmp);
    }
    std::vector<std::string> v2;
    std::vector<std::string> v_out;
    real_meaning.open(real_mean_file);
    if(!real_meaning.is_open())
    {
        std::cout<<"error open input2 file"<<std::endl;
        return EXIT_FAILURE;
    }
    std::string tmp1;
    while(real_meaning>>tmp1){
        v2.push_back(tmp1);
    }
    ad.close();
    real_meaning.close();

    for(int i=0;i<v1.size();i++)
    {
        for(int t=0;t<v2.size();t++){
            if(v1[i]==v2[t]){
                v_out.push_back(v2[t+1]);
            }
            
        }
    }
    std::cout<<"enter output file name"<<std::endl;
    std::string outputfile;
    std::cin>>outputfile;
    std::ofstream outfile;
    outfile.open(outputfile);
    if(!outfile.is_open())
    {
        std::cout<<"error open output file"<<std::endl;
        return EXIT_FAILURE;
    }
    for(int i=0;i<v_out.size();i++)
    {
        outfile<<v_out[i]<<" ";
    }
    outfile<<std::endl;
    outfile.close();


}