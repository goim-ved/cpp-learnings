#include <iostream>
#include <random>
#include <vector>
using namespace std;

void game(int &playerScore, int &machineScore);

int main() {
    cout << "--- Simple Rock Paper Scissors Game ---" << endl;
    cout << "Only 3 options: " << endl;
    cout << "'r' for rock, 'p' for paper, 's' for scissors." << endl;
    cout << "Enter 'q' to quit and view the final score." << endl;

    int playerScore = 0;
    int machineScore = 0;

    while (true) {
        game(playerScore, machineScore);
    }

    return 0;
}

void game(int &playerScore,int &machineScore) {
    vector<char> choices = {'r', 'p', 's'};

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(0, choices.size() - 1);
    char machineMove = choices[dist(gen)];

    char playerMove;
    cout << "Enter your move: ";
    cin >> playerMove;

    if (playerMove == 'q') {
        cout << "Final scores: " << endl;
        cout << "Player: " << playerScore << endl;
        cout << "Machine: " << machineMove << endl;

        if (playerScore > machineMove) {
            cout << "Player is the winner!" << endl;
        } else if (machineScore > playerScore) {
            cout << "Machine is the winner!" << endl;
        } else {
            cout << "Its a tie!" << endl;
        }

        exit(0);
    }

    bool validMove = false;
    for (char choice : choices) {
        if (choice == playerMove) {
            validMove = true;
            break;
        }
    }

    if (!validMove) {
        cout << "Invalid Move! Please enter r, p, s or q to quit" << endl;
        return;
    }

    cout << "Machine move: " << machineMove << endl;
    cout << "Player move: " << playerMove << endl;

    if (playerMove == machineMove) {
        cout << "Its a tie!" << endl;
    } else if (
        (playerMove == 'r' && machineMove == 's') ||
        (playerMove == 'p' && machineMove == 'r') ||
        (playerMove == 's' && machineMove == 'p')
    ) {
        cout << "Player wins this round!" << endl;
        playerScore++;
    } else {
        cout << "Machine wins this round!" << endl;
        machineScore++;
    }

    cout << "Current Scores: " << endl;
    cout << "Player: " << playerScore << endl;
    cout << "Machine: " << machineScore << endl;

}