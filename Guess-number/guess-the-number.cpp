#include <iostream>
#include <limits>   // For numeric_limits
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand(static_cast<unsigned>(time(0)));

    // Define the range for the random number
    int lowerBound = 1;
    int upperBound = 100;

    // Generate a random number within the range [lowerBound, upperBound]
    int randomNumber = lowerBound + (rand() % (upperBound - lowerBound + 1));

    // Notify the player about the game
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between " << lowerBound << " and " << upperBound << "." << endl;
    cout << "Try to guess the number!" << endl;

    int number;
    int attempts = 0;  // To count the number of attempts

    // Start guessing loop
    while (true) {
        cout << "Enter your guess: ";
        cin >> number;

        // Validate input
        if (cin.fail()) {
            cin.clear();  // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore invalid input
            cout << "Invalid input. Please enter a number." << endl;
            continue;  // Prompt the user for a new guess
        }

        // Increment the number of attempts
        attempts++;

        // Check if the guess is correct, too high, or too low
        if (number == randomNumber) {
            cout << "Congrats! You guessed the correct number in " << attempts << " attempts!" << endl;
            break;  // Exit the loop
        } else if (number < randomNumber) {
            cout << "The number you entered is smaller than the random number. Try again!" << endl;
        } else {
            cout << "The number you entered is greater than the random number. Try again!" << endl;
        }
    }

    return 0;
}
