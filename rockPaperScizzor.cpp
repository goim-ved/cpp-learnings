#include <iostream>
#include <random>
#include <vector>
using namespace std;

int main() {
    cout << "---Simple Rock Paper Scissors Game---" << endl;
    cout << "Only 3 options: " << endl;
    cout << "r for rock, p for paper and s for scissors";

    vector<char> choices = {'r', 'p', 's'}; //Rock, paper and scissors
    bool found = false;
    
    std::random_device rd;
    std::mt19937 gen(rd());

    std::uniform_int_distribution<int> dist(0, choices.size() -1);

    int randomIndex = dist(gen);
    char machineMove = choices[randomIndex];

    char playerMove;
    cout << "Enter your move: ";
    cin >> playerMove;

    for (char choice : choices) {
        if (choice == playerMove) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "Machine move is: " << machineMove << endl;
        cout << "Player move is: " << playerMove << endl;

        if (playerMove == machineMove) {
            cout << "Its a tie!";
        } else if (playerMove == 'r') {
            if (machineMove == 'p') {
                cout << "Machine wins!";
            } else if (machineMove == 's') {
                cout << "Player wins!";
            }
        } else if (playerMove == 'p') {
            if (machineMove == 'r') {
                cout << "Player wins!";
            } else if (machineMove == 's') {
                cout << "Machine wins!";
            }
        } else if (playerMove == 's') {
            if (machineMove == 'r') {
                cout << "Machine wins!";
            } else if (machineMove == 'p') {
                cout << "Player wins!";
            }
        }
    } else {
        cout << "Invalid move!";
    }

    return 0;
}