#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<cstdlib>

void count_occurance(const std::vector<std::string>& v_text,
    const std::vector<std::string>& v_word,
    std::vector<std::string>& out)
    {
        for(int i=0; i<v_word.size(); i++)
        {
            out.push_back(v_word[i]);
            out.push_back(":");
            int count=0;
            for(int t=0; t<v_text.size(); t++)
            {
                if(v_word[i]==v_text[t]){
                    count++;
                }
            }
            std::string str_count = std::to_string(count);
            out.push_back(str_count);
        }
    }

int main()
{
    std::ifstream wordfile;
    std::ifstream textfile;
    std::ofstream outputfile;

    wordfile.open("word.txt");
    textfile.open("text.txt");
    if(!wordfile.is_open() || !textfile.is_open())
    {
        std::cout<<"error open input file"<<std::endl;
        return EXIT_FAILURE;
    }
    std::string wordtmp;
    std::string texttmp;
    std::vector<std::string> v_word;
    std::vector<std::string> v_text;
    while(wordfile>>wordtmp){
        v_word.push_back(wordtmp);
    }
    while(textfile>>texttmp){
        v_text.push_back(texttmp);
    }
    wordfile.close();
    textfile.close();
    std::vector<std::string> out;
    count_occurance(v_text,v_word,out);
    outputfile.open("outfile.txt");
    if(!outputfile.is_open())
    {
        std::cout<<"error open output file"<<std::endl;
        return EXIT_FAILURE;
    }
    for(int i=0; i<out.size(); i++)
    {
        outputfile<<out[i]<<" ";
        if(i%3==2){
            outputfile<<std::endl;
        }
    }
    outputfile.close();

}