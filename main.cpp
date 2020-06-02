/**
 * this is the exercises' solutions for C++ Primer 5th Edition Chapter 10*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <numeric>
#include <string.h>
#include <functional>

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

/**
 * exercise10.14*/
void exercise10_14()
{
    auto sum = [](int a, int b) -> int {return a + b;};
    std::cout << sum(1, 10);
}

/**
 * exercise10.15
 * call exercise10_15(1) the output will be 1 + 10 = 11*/
void exercise10_15(int a)
{
    auto sum = [a](int b)-> int { return a + b;};
    std::cout << sum(10);
}

/**
 * exercise10.16
 * to call
 * std::vector<std::string> a {"the", "quick", "over", "quick", "red", "slow", "the", "turtle"};
 * biggies(a, 5);*/
void biggies(std::vector<std::string>& a, std::vector<std::string>::size_type sz)
{
    std::sort(a.begin(), a.end());
    auto it = std::unique(a.begin(), a.end());
    a.erase(it, a.end());
    std::stable_sort(a.begin(), a.end(), [](const std::string& s1, const std::string& s2)->bool{ return s1.size() < s2.size();});
    auto it1 = std::find_if(a.begin(), a.end(), [sz](const std::string& s)->bool{ return s.size() >= sz;});
    std::for_each(it1, a.end(), [](const std::string& s){std::cout << s << " ";});
}

/**
 * exercise10.17
 * Since we do not have Sales_data class, the compile will push error out. we comment the code.*/
/*void exercise10_17(std::vector<Sales_data>& a)
{
    std::sort(a.begin(); a.end(), [](const Sales_data& d1, const Sales_data& d2)->bool{ return d1.isbn() < d2.isbn();});
}*/

/**
 * exercise10.18
 * call:
 * std::vector<std::string> a {"the", "quick", "over", "quick", "red", "slow", "the", "turtle"}
 * exercise10_18(a, 4)*/
void exercise10_18(std::vector<std::string>& a, std::vector<std::string>::size_type sz)
{
    sort(a.begin(), a.end());
    auto it = std::unique(a.begin(), a.end());
    a.erase(it, a.end());
    std::stable_sort(a.begin(), a.end(), [](const std::string& s1, const std::string& s2)->bool{ return s1.size() < s2.size();});
    auto it1 = std::partition(a.begin(), a.end(), [sz](const std::string& s)->bool{ return s.size() < sz;});
    std::for_each(it1, a.end(), [](const std::string& s){std::cout << s << " ";});
}

/**
 * exercise10.19
 * just change partition to stable_partition*/
void exercise10_19(std::vector<std::string>& a, std::vector<std::string>::size_type sz)
{
    std::sort(a.begin(), a.end());
    auto it = std::unique(a.begin(), a.end());
    a.erase(it, a.end());
    std::stable_sort(a.begin(), a.end(), [](const std::string& s1, const std::string& s2)->bool{ return s1.size() < s2.size();});
    auto it1 = std::stable_partition(a.begin(), a.end(), [sz](const std::string& s)->bool{ return s.size() < sz;});
    std::for_each(it1, a.end(), [](const std::string& s){std::cout << s << " ";});
}

/**
 * exercise10.20*/
 void exercise10_20()
{
    std::vector<std::string> a {"the", "quick", "over", "quick", "red", "slow", "the", "turtle"};
    auto i = std::count_if(a.cbegin(), a.cend(), [](const std::string& s) {return s.size() >= 6;});
    std:: cout << "there is in total " << i << " words have more than 5 characters." << std::endl;
}

/**
 * exercise10.21*/
void exercise10_21()
{
    int a = 5;
    auto b = [a] () mutable -> bool {if (a == 0) return true; else {--a; return false;}};
    for(int i = 0; i < a + 1; ++i)
        std::cout << b() << "\t";
}

/**
 * exercise10.22*/
using namespace std::placeholders;
bool checkSize(const std::string& s, std::string::size_type a)
{
    return s.size() >= a;
}
void exercise10_22()
{
    std::vector<std::string> a {"the", "quick", "over", "quick", "red", "slow", "the", "turtle"};
    auto n = std::count_if(a.cbegin(), a.cend(), bind(checkSize, _1, 6));
    std::cout << "In total there are " << n << " words have more than 6 characters.";
}

/**
 * exercise10.23
 * the number of parameters of bind() is not a stable number. It is up to the parameters of actual function(the first p-
 * arameter of bind()). */

/**
 * exercise10.24*/
bool checkSizeInt(const int& a, const int b)
{
    return a > b;
}
void exercise10_24()
{
    std::vector<int> nums{1, 2, 4, 5, 3, 4, 7, 4, 56, 6, 7, 56, 4, 3, 4, 3, 8, 9, 8, 6, 6, 4, 5, 6, 6, 7, 8, 5,};
    std::string a = "hallo";
    auto it = find_if(nums.cbegin(), nums.cend(), bind(checkSizeInt, _1, a.size()));
    std::cout << *it << std::endl;
}

/**
 * exercise10.25
 * partition the string vector all the string.size() > 6 will be placed in the forwards of the vector*/
bool ifBigger(const std::string& s1, const std::string& s2)
{
    return s1.size() < s2.size();
}
void exercise10_25()
{
    std::vector<std::string> a {"the", "quick", "over", "quick", "red", "slow", "the", "turtle"};
    auto it1 = unique(a.begin(), a.end());
    a.erase(it1, a.end());
    sort(a.begin(), a.end());
    stable_sort(a.begin(), a.end(), ifBigger);
    auto it2 = partition(a.begin(), a.end(), bind(checkSize, _1, 6));
    for(auto it = it2; it != a.cend(); ++it)
        std::cout << *it << "\t";
}

int main()
{
    exercise10_25()
    ;
}
