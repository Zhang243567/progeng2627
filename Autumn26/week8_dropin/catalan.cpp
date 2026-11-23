#include <iostream>
#include <vector>

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

int main() {
    int n;

    std::cout << "Enter n: ";
    std::cin >> n;

    std::vector<unsigned long> numbers = catalan_numbers(n);

    for (int i = 0; i < numbers.size(); i++) {
        std::cout << "C" << i << " = " << numbers[i] << std::endl;
    }

    return 0;
}