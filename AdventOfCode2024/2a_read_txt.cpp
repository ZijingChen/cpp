// Read a File with Unknown Numbers per Line
#include <iostream>
#include <fstream>
#include <sstream>  // For std::istringstream
#include <vector>

int main() {
    std::ifstream inputFile("day2_test_Zijing.txt"); // Open the file
    if (!inputFile) {
        std::cerr << "Error: Unable to open file!" << std::endl;
        return 1;
    }

    std::vector<std::vector<int>> allLines;  // Vector of vectors to store numbers
    std::string line;

    // Read file line by line
    while (std::getline(inputFile, line)) {
        std::istringstream iss(line);
        std::vector<int> numbers;
        int num;

        // Read numbers from the line
        while (iss >> num) {
            numbers.push_back(num);
        }

        allLines.push_back(numbers);  // Store the numbers for this line
    }

    inputFile.close();

    // Display the stored numbers
    std::cout << "Numbers read from file:\n";
    for (const auto& line : allLines) {
        for (int num : line) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
