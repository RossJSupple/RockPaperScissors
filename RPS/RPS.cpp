#include <iostream>
#include <random>

using namespace std;

char compChoice();
void game();

int main() {

    char contGame;
    char playGame;
    bool start = true;

    
    while (start == true) {
        cout << "Would you like to play Y/N: ";
        cin >> contGame;

        playGame = toupper(contGame);

        if (playGame == 'Y'){
            game();
        }
        else if (playGame == 'N'){
            start = false;
        }
        else {
            cout << "Error!! Exiting... ";
            break;
        }
    }
}






void game() {
    char userChoice;

    cout << "Choose R, P or S: ";
    cin >> userChoice;

    char userThrow = toupper(userChoice);

    char compThrow = compChoice();
    //cout << compThrow;

    if (userThrow == compThrow) {
        cout << "it's a draw!!" << endl;
    }
    else if (userThrow == 'R' && compThrow == 'S') {
        cout << "You threw: " << userThrow << "And the computer threw: " << compThrow << "You win!! "<< endl;
    }
    else if (userThrow == 'P' && compThrow == 'R') {
        cout << "You win!!" << endl;
    }
    else if (userThrow == 'S' && compThrow == 'P') {
        cout << "You win!!" << endl;
    }
    else {
        cout << "You lose!!" << endl;
    }
}


char compChoice() {

    int num = 0;
    char compThrow;

    srand(time(NULL));

    num = rand() % 3;

    if (num == 0) {
        compThrow = 'R';
    }
    else if (num == 1) {
        compThrow = 'S';
    }
    else if (num == 2) {
        compThrow = 'P';
    }


    return compThrow;


}