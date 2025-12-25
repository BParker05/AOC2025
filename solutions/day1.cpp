#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string line;
    int turn;
    int passes = 0;
    int position = 50;

    std::ifstream file("../inputs/day1.txt");

    while (getline (file, line)) {
        turn = std::stoi(line.substr(1));

        while(turn > 0){
            if (line[0] == 'L'){
                position = (position + 99) % 100;
                turn--;
            } else {
                position = (position + 1) % 100;
                turn--;
            }
            if (position == 0){
                passes++;
            }
        }
    }

    std::cout << "Passes: " << passes << std::endl;

    return 0;
}