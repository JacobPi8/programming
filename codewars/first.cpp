#include <iostream>
#include <string>
#include <vector>

template <typename T> 
std::vector<T> uniqueInOrder(const std::vector<T>& iterable)
{

    std::vector<T> help(iterable.begin(), iterable.end());
    std::vector<T> result;
    if(help.size() == 0)
    {
        return result;
    }
    
    result.push_back(help[0]);
    for(unsigned long i = 0; i < help.size()-1; i++)
    {          
        if(help[i] != help[i+1])
        {
            result.push_back(help[i+1]);
        }

    }

    return result;


}
std::vector<char> uniqueInOrder(const std::string& iterable)
{

    std::vector<char> help(iterable.begin(), iterable.end());
    std::vector<char> result;
    if(help.size() == 0)
    {
        return result;
    }

    result.push_back(help[0]);
    for(unsigned long i = 0; i < help.size()-1; i++)
    { 
        if(help[i] != help[i+1])
        {
            result.push_back(help[i+1]);
        }

    }

    return result;
}

int main(){

    std::string nazwa = "ABBCCCDF";
    uniqueInOrder(nazwa);
    uniqueInOrder<char>({'W','W','Z','Z','C'});
    std::vector<char> result = uniqueInOrder<char>({'W','W','Z','Z','C'});
    for(auto a : result)
    {
        std::cout << a << std::endl;

    }
    return 0;
}