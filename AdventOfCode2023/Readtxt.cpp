#include <iostream>
#include <string>
#include <fstream> //works for ifstream
#include <vector> // for sort() which sorts vector

//#include <fmt/core.h>

using namespace std;

int main(int argc, const char * argv[]) {
    string line;
    
    string path = "/Users/zijingchen/Desktop/CSE3PSD/XcodeProj/datasets/datasets/calorie_data.txt";
    ifstream file(path);
    if (file.is_open()) {
        while (getline(file, line)) {
            cout<<line<<"\n";
        }
        file.close();
    }else{
        cout<<"Can't open file\n";
    }
}
