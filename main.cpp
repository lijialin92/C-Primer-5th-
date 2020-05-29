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
    char* a[] {"aaaa", "bbbb", "cccc"};
    char* b[] {strdup(a[0]), strdup(a[1]), strdup(a[2])};
    std::cout << "are these two C style string the same?" << std::endl;
    std::cout << std::boolalpha << std::equal(a, a+3, b);
}

/**
 * exercise10.6
 * call exercise10_6 in the main function and see the result */
void exercise10_6()
{
    std::vector<int> a{1, 3, 5, 54, 6, 7, 2, 4, 6, 4, 9, 38, 27, 20, 3, 4, 4};
    std::cout << "the array is: " << std::endl;
    for(auto i : a)
    {
        std::cout << i << "\t";
    }
    std::fill_n(a.begin(), a.size(), 0);
    std::cout << std::endl;
    std::cout << "the array after reset is: " << std::endl;
    for(auto i : a)
    {
        std::cout << i << "\t";
    }
}

/**
 * exercise10.7
 * call exercise10_7 in the main function and see the result
 * For (a) it is wrong, because algorithm always operate container by using iterator. Algorithm can not insert element,
 * delete element or change the size of container. copy can not do this because vec and lst do not have the same number
 * of elements. vec is empty, and copy() as a algorithm can not change the size of a vector. Thus we need a special ite-
 * rator to change the size of container.*/
void exercise10_7()
{
    std::vector<int> vec;
    std::list<int> lst;
    int i;
    for(int i = 0; i != 10; i++)
        lst.push_back(i);
    std::copy(lst.cbegin(), lst.cend(), back_inserter(vec));
    std::cout << "after insertion vec is: " << std::endl;
    for(auto i : vec)
        std::cout << i << "\t";
}

/**
 * exercise10.7
 * call exercise10_7 in the main function and see the result
 * When we call fill_n(), vec should have enough elements not just enough memory. But there is not element in vec, and
 * algorithm can not insert element into container. Thus we need iterator back_inserter again.*/
void exercise10_7a()
{
    std::vector<int> vec;
    vec.reserve(10);
    std::fill_n(back_inserter(vec), 10, 0);
    std::cout << "after fill 0 in vec: " << std::endl;
    for(auto i : vec)
        std::cout << i << "\t";
}

/**
 * exercise10.8
 * algorithm do not know what is container. the parameters of algorithm are iterators, so algorithm are based on iterat
 * -ors. When algorithm's parameters are normal iterators, then the algorithm can only change the value of element, vis-
 * ite the element and move the element. When we want to use algorithm to insert element or delete element in the conta-
 * iner, we need to use special iterators(inserter iterator...) as the parameter of the algorithm such as back_inserter().
 * algorithm only operate iterator, algorithm can insert or delete the elements of container or not, are totally depend
 * on the type of iterator that we give to the algorithm.*/

/**
 * exercise10.9*/
 void exercise10_9()
{
     std::vector<std::string> a {"the", "quick", "over", "quick", "red", "slow", "the", "turtle"};
     std::sort(a.begin(), a.end());
     std::cout << "after sorting: " << std::endl;
     for(auto& i : a)
         std::cout << i << "\t";
     auto it = std::unique(a.begin(), a.end());
     std::cout << std::endl;
     std::cout << "after unique: " << std::endl;
     for(auto& i : a)
        std::cout << i << "\t";
     a.erase(it, a.end());
    std::cout << std::endl;
     std::cout << "after erase: " << std::endl;
     for(auto& i : a)
        std::cout << i << "\t";
}

/**
 * exercise 10.10
 * Generic algorithm is generic because it can be apply for different data structure. Algorithm is separate from data
 * structure, it only interact with iterator*/

/**
 * exercise10.11*/
bool isShorter(const std::string&, const std::string&);
void exercise10_11()
{
    std::vector<std::string> a {"the", "quick", "over", "quick", "red", "slow", "the", "turtle"};
    std::cout << "the original string vector is:" << std::endl;
    for(const auto& i : a)
        std::cout << i << "\t";
    std::sort(a.begin(), a.end());
    auto it = std::unique(a.begin(), a.end());
    a.erase(it, a.end());
    std::cout << std::endl;
    std::cout << "after elimDups the string vector is: " << std::endl;
    for(const auto& i : a)
        std::cout << i << "\t";
    std::stable_sort(a.begin(), a.end(), isShorter);
    std::cout << std::endl;
    std::cout << "after apply stable_sort() with isShorter" << std::endl;
    for(const auto& i : a)
        std::cout << i << "\t";
}
bool isShorter(const std::string& s1, const std::string& s2)
{
    return s1.size() < s2.size();
}

/**
 * exercise10.12*/
/*void compareIsbn(const Sales_data& d1, const Sales_data& d2)
{
    return d1.isbn() < d2.isbn();
}

void exercise10_12()
{
    std::vector<Sales_data> a ; // a is a Sales_data type vector
    std::sort(a.begin(), a.end(), compareIsbn);
}*/

/**
 * exercise10.13*/
bool isLessThanFive(std::string& s)
{
    return s.size() < 5;
}

void exercise10_13()
{
    std::vector<std::string> a {"the", "quick", "over", "quick", "red", "slow", "the", "turtle"};
    auto it = std::partition(a.begin(), a.end(), isLessThanFive);
    std::cout << "the words have more than 5 characters:" << std::endl;
    for(auto it1 = it; it1 != a.cend(); ++it1)
    {
        std::cout << *it1 << "\t";
    }
}



int main()
{
    exercise10_13()
    ;
}
