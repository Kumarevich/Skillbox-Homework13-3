#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;
    int num;
    int count = 0;

    std::cout << "Input the number: ";
    std::cin >> num;
    while (num != -1) {
        if (count < 20) {
            vec.push_back(num);
            ++count;
        } else {
            vec.erase(vec.begin());
            vec.push_back(num);
        }
        std::cout << "Input the number: ";
        std::cin >> num;
    }

    for(int i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << std::endl;
    }

    return 0;
}
