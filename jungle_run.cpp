#include <iostream>
#include <cstdlib>
#include <ctime>

// Generate a random event
int randomEvent() {
    return std::rand() % 3;
}

int main() {
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    int distance = 0;
    int stamina = 5;

    std::cout << "=== Jungle Escape Run ===\n";

    while (stamina > 0 && distance < 50) {
        char move;

        std::cout << "\nMove forward? (y/n): ";
        std::cin >> move;

        if (move == 'n' || move == 'N')
            break;

        int event = randomEvent();

        if (event == 0) {
            std::cout << "You found a clear trail.\n";
            distance += 12;
        } else if (event == 1) {
            std::cout << "Dense plants slow you down.\n";
            distance += 6;
            stamina--
