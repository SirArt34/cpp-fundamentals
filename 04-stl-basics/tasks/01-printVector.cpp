#include <iostream>
#include <vector>
#include <string>

void printVector(const std::vector<std::string>& text)
{
    for (auto element : text){
        std::cout << element << '\n';
    }
}

int main() {
    std::vector<std::string> vec {
        "Hello Coders School!",
        "Welcome to the best C++ course ever",
        "Man, this is crazy :)"
    };
    printVector(vec);
    return 0;
}
