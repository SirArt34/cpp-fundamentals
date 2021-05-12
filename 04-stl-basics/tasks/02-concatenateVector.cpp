#include <iostream>
#include <vector>

std::vector<int> concatenateVector (std::vector<int>& group1, std::vector<int>& group2)
{
    std::vector<int> conc;
    
    for (size_t i = 0; i < group1.size(); i++)
    {
        conc.push_back(group1[i]);
        conc.push_back(group2[i]);
    }
    return conc;

}


int main() {
    std::vector<int> vec1 {1, 2, 3, 4, 5};
    std::vector<int> vec2 {11, 12, 13, 14, 15};

    auto vec = concatenateVector(vec1, vec2);
    for (const auto& el : vec) {
        std::cout << el << " ";
    }
    return 0;
}
