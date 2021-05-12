#include <iostream>
#include <vector>
#include <list>

std::list<int> createSortedList (std::vector<int>& vect)
{
    std::list<int> s_list;
    for (auto& i : vect){
        s_list.push_back(i);
    }
    s_list.sort();
    return s_list;
}

int main() {
    std::vector<int> vec{2, 3, 4, 1, 6, 5, 8, 7, 9, 0};
    auto list = createSortedList(vec);

    for (const auto& el : list)
        std::cout << el << " ";

    return 0;
}
