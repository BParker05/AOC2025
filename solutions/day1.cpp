#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string line;
    int turn;
    int passes;
    int position = 50;

    std::ifstream file("../inputs/day1example.txt");

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
                std::cout<< line.substr(1) << std::endl;
                passes++;
            }
        }
        //std::cout << "Position " << position << std::endl;

    }

    //std::cout << "Passes: " << passes;

    //std::cout << "Position: " << position;

    std::cout << "\n\n";

    return 0;
}