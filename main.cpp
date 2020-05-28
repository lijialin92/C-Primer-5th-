/**
 * this is the exercises' solutions for C++ Primer 5th Edition Chapter 10*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <numeric>
#include <string.h>

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

/**
 * exercise 10.3
 * call exercise10_3 in the main function and see the result*/
void exercise10_3()
{
    std::vector<int> a{1, 3, 5, 54, 6, 7, 2, 4, 6, 4, 9, 38, 27, 20, 3, 4, 4};
    std::cout << "sum of all the elements of array is: " << std::accumulate(a.cbegin(), a.cend(), 0);
}

/**
 * exercise 10.4
 * call exercise10_4 in the main function and see the result
 * the third parameter of accumulate() defines the return data type and also to use which add operator. If the third
 * parameter is 0 then the return of the accumulate() will also be int. Will loss accuracy. So the input should be 0.0*/
void exercise10_4()
{
    std::vector<double> a{1.3, 3.9, 4.2, 4.5};
    std::cout << "sum of all the elements of array is: " << std::accumulate(a.cbegin(), a.cend(), 0.0);
}

/**
 * exercise 10.5
 * string in C style is char*, then equal() will compare every char* pointer are they equal? So enough the content of
 * the string could be the same but their pointer could also be different. Then they are not equal to each other.
 * */
void exercise10_5()
{
    char* a[] {"aaaa", "bbbb", "."};
    char* b[] {strdup(a[0]), strdup(a[1]), strdup(a[2])};
    std::cout << "are these two C style string the same?" << std::endl;
    std::cout << std::boolalpha << std::equal(a, a+3, b);
}

int main()
{

}