#include<iostream>
#include<vector>
#include<fstream>
#include<cstdlib>
#include<string>

int search_vector(std::string s,
     const std::vector<std::string>& vin)
     {
        //find same term in another group return 1
        for(int i=0;i<vin.size();i++){
            if(s==vin[i]){
                return 1;
            }
        }
        return 0;
     }

void union_vector(const std::vector<std::string>& vin1,
    const std::vector<std::string>& vin2,
    std::vector<std::string>& vout)
    {
        for(int i=0; i<vin1.size();i++){
                vout.push_back(vin1[i]);
            
        }
        for(int i=0; i<vin2.size();i++){
            if(!search_vector(vin2[i],vout)){
                vout.push_back(vin2[i]);
            }
        }
    }

void intersection_vector(const std::vector<std::string>& vin1,
    const std::vector<std::string>& vin2,
     std::vector<std::string> & vout)
    {
        for(int i=0; i<vin1.size();i++){
            if(search_vector(vin1[i],vin2)){
                vout.push_back(vin1[i]);
            }
        }
    }



int main(){
    std::string in1,in2;
    std::cin>>in1>>in2;
    std::ifstream infile;
    infile.open(in1);
    if(!infile.is_open()){
        std::cout<<"error opening file1"<<std::endl;
        return EXIT_FAILURE;
    }
    std::string tmp;
    std::vector<std::string> v_in1;
    while(infile>>tmp){
        v_in1.push_back(tmp);
    }
    infile.close();
     infile.open(in2);
    if(!infile.is_open()){
        std::cout<<"error opening file2"<<std::endl;
        return EXIT_FAILURE;
    }
    std::string tmp1;
    std::vector<std::string> v_in2;
    while(infile>>tmp1){
        v_in2.push_back(tmp1);
    }
    infile.close();

    //for(int i=0;i<v_in.size();i++){
    //   std::cout<<v_in[i]<<std::endl;
    std::ofstream outfile1, outfile2;
    std::vector<std::string> v_union;
    union_vector(v_in1,v_in2,v_union);
    //
    outfile1.open("union.txt");
    if(!outfile1.is_open()){
        std::cout<<"error opening file3"<<std::endl;
        return EXIT_FAILURE;
    }
    for(int i=0;i<v_union.size();i++){
        outfile1<<v_union[i]<<std::endl;
    }
    outfile1.close();

    std::vector<std::string> v_inter;
    intersection_vector(v_in1,v_in2,v_inter);
    //
    outfile2.open("intersection.txt");
    if(!outfile2.is_open()){
        std::cout<<"error opening file4"<<std::endl;
        return EXIT_FAILURE;
    }
    for(int i=0;i<v_inter.size();i++){
        outfile2<<v_inter[i]<<std::endl;
    }
    outfile2.close();

}


