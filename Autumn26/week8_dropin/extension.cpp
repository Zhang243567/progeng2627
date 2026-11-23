#include <iostream>
#include <vector>
#include <cstdlib>
#include <fstream>
#include <string>

int next_term(std::vector<unsigned long> v )
{
    int ret=0;
    for(int i=0; i<v.size(); i++){
        ret += v[i]*v[v.size()-1-i];
    }
    return ret;
}

std::vector<unsigned long> catalan_numbers(int n)
{
  std::vector<unsigned long> v;
  v.push_back(1);
  for(int i=0;i<n; i++)
  {
    int tmp;
    tmp = next_term(v);
    v.push_back(tmp);
  }  
  return v;
}


int main()
{
    std::ifstream infile;
    infile.open("expression.txt");
    if(!infile.is_open()){
        std::cout<<"error opening input file"<<std::endl;
        return EXIT_FAILURE;
    }
    std::string tmp;
    std::vector<int> catalan;
    std::vector<std::string> v_infile;
    while(infile>>tmp){
        
        v_infile.push_back(tmp);
        int count=0;
        for(int i=0;i<tmp.size();i++){
            if(tmp[i]=='+'||tmp[i]=='-'
                ||tmp[i]=='/'||tmp[i]=='*'){
                    count++;
                }
         }
        //std::cout<<tmp<<std::endl;
        std::vector<unsigned long> v_out;
        v_out = catalan_numbers(count);
        int s=v_out[v_out.size()-1];
        catalan.push_back(s); 
    }
    infile.close();

    std::ofstream outfile;
    outfile.open("expression_counts.txt");
    if(!outfile.is_open()){
        std::cout<<"error opening output file"<<std::endl;
        return EXIT_FAILURE;
    }
    for(int i=0; i<v_infile.size(); i++){
        outfile<<v_infile[i]<<'\t'<<catalan[i]<<std::endl;
    }
    outfile.close();

}