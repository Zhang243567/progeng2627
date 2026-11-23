#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <fstream>

int twod_to_oned(int row, int col, int rowlen){
    int OUT = row* rowlen + col;
    return OUT;
}

void get_row(int row,const std::vector<int>& s, std::vector<int>& out)
{
    int side= std::sqrt(s.size());
    for(int i=twod_to_oned(row,0,side); i<=twod_to_oned(row,side-1,side); i++){
        out.push_back(s[i]);
    }
}

void get_col(int col, const std::vector<int>& s, std::vector<int>& out)
{
    int side= std::sqrt(s.size());
    for(int i= twod_to_oned(0, col, side); i<=twod_to_oned(side-1,col,side); i+=side)
    {
        out.push_back(s[i]);
    }
}

void get_subs(int subs, const std::vector<int>& s, std::vector<int>& out)
{
    int side= std::sqrt(s.size());
    int sub_side= std::sqrt(side);
    int subs_row = subs/sub_side;
    int subs_col = subs%sub_side;
    int up_left_corner_index= twod_to_oned(subs_row*sub_side, subs_col*sub_side, side);
    for(int i= up_left_corner_index; i<up_left_corner_index + sub_side*side; i+= side)
    {
        for(int j=i ; j<i + sub_side; j++)
        {
            out.push_back(s[j]);
        }
    }
}

int mfind(int n, const std::vector<int>& v)
{
    for(int i=0; i<v.size(); i++){
        if(n==v[i]){
            return i;
        }
    }
    return -1;
}

bool valid_soduko(const std::vector<int>& s)
{
    int side = std::sqrt(s.size());
    std::vector<int> seq;
    // test each row
    for(int i=0; i<side; i++)
    {
        seq.clear();
        get_row(i, s, seq);
        for(int j=1; j<=side; j++)
        {
            if(mfind(j,seq)==-1){
                return false;
            }
        }
    }

    //test each col
    for(int i=0; i<side; i++)
    {
        seq.clear();
        get_col(i, s, seq);
        for(int j=1; j<=side; j++)
        {
            if(mfind(j,seq)==-1){
                return false;
            }
        }
    }

    //test each subs
    for(int i=0; i<side; i++)
    {
        seq.clear();
        get_subs(i, s, seq);
        for(int j=1; j<=side; j++)
        {
            if(mfind(j,seq)==-1){
                return false;
            }
        }
    }
    return true;
}

int main(int argc, char* argv[])
{
    if(argc!=2){
        std::cout<<"didnot enter input file name"<<std::endl;
        return EXIT_FAILURE;
    }
    std::ifstream infile;
    infile.open(argv[1]);
    if(!infile.is_open()){
        std::cout<<"error opening input file"<<std::endl;
        return EXIT_FAILURE;
    }
    int tmp;
    std::vector<int> s;
    while(infile>>tmp){
        s.push_back(tmp);
    }
    int side= std::sqrt(s.size());
    for(int i=0; i<side; i++){
        for(int j=0; j<side; j++){
            int oned_index;
            oned_index= twod_to_oned(i,j,side);
            std::cout<<s[oned_index]<<" ";
        }
        std::cout<<std::endl;
    }
    bool valid= valid_soduko(s);
    if(valid){
        std::cout<<"it is valid"<<std::endl;
    }
    else std::cout<<"not valid"<<std::endl;

    
}