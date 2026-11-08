#include <iostream>
#include <vector>
int main()
{
    std::vector<int> v;
    int a1,a2,a3;
    std::cin>>a1>>a2>>a3;
    v. push_back(a1);
    v. push_back(a2);
    v. push_back(a3);
    std::cout<<v.size()<<std::endl;
    std::cout<<v[0]*(v[1]+v[2])<<std::endl;
}