#include <iostream>
#include <string>

int main() {
    std::string sentence = "Hello, world, how are you today";
    std::string result = "";

    for (char c : sentence) {
        
        if (c != ',' && c != ' ') { 
            result += c;
        }
    }

    std::cout << "Modified sentence: " << result << std::endl;
  

    return 0;
}
