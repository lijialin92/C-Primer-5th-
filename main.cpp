/**
 * this is the exercises' solutions for C++ Primer 5th Edition Chapter 12*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

/**
 * exercise 10.1
 * call exercise10_1 in the main function and see the result*/
void exercise10_1()
{
    std::vector<int> a{1, 3, 5, 54, 6, 7, 2, 4, 6, 4, 9, 38, 27, 20, 3, 4, 4};
    std::cout << "there are " << std::count(a.cbegin(), a.cend(), 1) << " value '1' inside of the array: " << std::endl;
    for (auto i : a) {
        std::cout << i <<"\t";
    }
}

/**
 * exercise 10.2
 * call exercise10_2 in the main function and see the result*/
 void exercise10_2()
{
     std::list<std::string> a{"aaaa", "bbbb", "cccc", "dddd", "eeee", "ffff", "aaaa"};
     std::cout << "there are in total " << std::count(a.cbegin(), a.cend(), "aaaa") << " aaaa inside of the array:" << std::endl;
     for(auto i : a)
     {
         std::cout << i << "\t";
     }
}

int main()
{

}