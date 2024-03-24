#include <iostream>
#include <cstdlib>

int main() 
{


    // Generate a random number between 1 and 100
    int secretNumber = std::rand() % 100 + 1;
    
    // Initialize guess and attempts count
    int guess = 0;
    int attempts = 0;

    std::cout << "Welcome to the Guess the Number game!\n";

    // Continue until the user guesses the correct number
    while (guess != secretNumber) {
        std::cout << "Guess the number (between 1 and 100): ";
        std::cin >> guess;
        attempts++;

        // Check if the guess is correct, too high, or too low
        if (guess < secretNumber) {
            std::cout << "Too low! Try again.\n";
        } else if (guess > secretNumber) {
            std::cout << "Too high! Try again.\n";
        } else {
            std::cout << "Congratulations! You've guessed the number " << secretNumber << " correctly!\n";
            std::cout << "It took you " << attempts << " attempts.\n";
        }
    }

    return 0;
}

