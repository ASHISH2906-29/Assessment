#include <iostream>
#include <cstdlib>  // for srand, rand
#include <ctime>    // for time

using namespace std;

// Class to handle Rock-Paper-Scissors Game
class RPSGame {
public:
    // Function to display menu
    void displayMenu() {
        cout << "\n===== Rock Paper Scissors Game =====\n";
        cout << "1. Rock\n2. Paper\n3. Scissors\n";
        cout << "Choose your option (1-3): ";
    }

    // Function to play the game
    void playGame() {
        int userChoice, computerChoice;

        displayMenu();
        cin >> userChoice;

        // Generate random choice for computer
        srand(time(0));
        computerChoice = (rand() % 3) + 1;

        cout << "Computer chose: " << computerChoice << endl;

        // Check for draw
        if (userChoice == computerChoice) {
            cout << "It's a Draw!\n";
        }
        // User wins conditions
        else if ((userChoice == 1 && computerChoice == 3) ||
                 (userChoice == 2 && computerChoice == 1) ||
                 (userChoice == 3 && computerChoice == 2)) {
            cout << "You Win!\n";
        }
        // Otherwise computer wins
        else {
            cout << "Computer Wins!\n";
        }
    }
};

int main() {
    RPSGame game;  // Create object
    char choice;

    do {
        game.playGame();  // Invoke function through object

        cout << "Do you want to play again? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y'); // Loop until user exits

    cout << "Thanks for playing!\n";
    return 0;
}
