
#include <iostream>
#include <vector>
#include <map> // For std::map

int main() {
    // Example sorted list2
    std::vector<int> list2 = {100, 200, 200, 300, 300, 300, 400};  // Sorted list2

    std::map<int, int> frequencyMap;

    // Count occurrences of each unique number
    for (int num : list2) {
        frequencyMap[num]++;
    }

    // Display unique numbers and their frequency
    std::cout << "Unique Numbers and Frequency in list2:\n";
    for (const auto& pair : frequencyMap) {
        std::cout << "Number: " << pair.first << ", Frequency: " << pair.second << std::endl;
    }

    return 0;
}

