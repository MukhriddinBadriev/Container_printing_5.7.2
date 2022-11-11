﻿#include <iostream>

#include <string>
#include <set>
#include <list>
#include <vector>

template<typename T>
void print_container(T t) {

    for (const auto& elem : t) {
        std::cout << elem << ' ';
    } std::cout << "\n\n";
}

int main()
{
    std::set<std::string> test_set = { "one", "two", "three", "four" };
    print_container(test_set);

    std::list<std::string> test_list = { "one", "two", "three", "four" };
    print_container(test_list);

    std::vector<std::string> test_vector = { "one", "two", "three", "four" };
    print_container(test_vector);

    return 0;
};