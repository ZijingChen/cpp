#include <iostream>
#include <fstream>
#include <vector>

int main() {
    std::ifstream inputFile("data.txt"); // Replace with your actual file name
    if (!inputFile) {
        std::cerr << "Error: Unable to open file!" << std::endl;
        return 1;
    }

    std::vector<int> list1, list2;
    int num1, num2;

    // Read numbers from file
    while (inputFile >> num1 >> num2) {
        list1.push_back(num1);
        list2.push_back(num2);
    }

    inputFile.close();

    // Display stored values
    std::cout << "List 1: ";
    for (int n : list1) std::cout << n << " ";
    std::cout << std::endl;

    std::cout << "List 2: ";
    for (int n : list2) std::cout << n << " ";
    std::cout << std::endl;

    return 0;
}
