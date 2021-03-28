#include "iostream"
using namespace std;


int main() {
    char x_or_o[9] = {'-', '-', '-', '-', '-', '-', '-', '-', '-'};
    int choice;

    for (int i = 0; i < 9; i++) {

        // drawing the game board
        cout << "\nPlaying desk: " << endl;
        cout << "|-7-" << "|-8-|" << "-9-|" << endl;
        cout << "|-4-" << "|-5-|" << "-6-|" << endl;
        cout << "|-1-" << "|-2-|" << "-3-|\n" << endl;

        cout << "\nYour desk:" << endl;
        cout << "|-" << x_or_o[6] << "-" << "|-" << x_or_o[7] << "-|" << "-" << x_or_o[8] << "-|" << endl;
        cout << "|-" << x_or_o[3] << "-" << "|-" << x_or_o[4] << "-|" << "-" << x_or_o[5] << "-|" << endl;
        cout << "|-" << x_or_o[0] << "-" << "|-" << x_or_o[1] << "-|" << "-" << x_or_o[2] << "-|" << "\n";

        // selection and verification
        while (true) {
            if (i % 2 == 0) {
                cout << "\nX, write your move: ";
            } else {
                cout << "\nO, write your move: ";
            }

            cin >> choice;
            while (choice > 9 || choice < 1) {
                cout << "Write correct move (1-9): ";
                cin >> choice;
            }

            if (i % 2 == 0 && x_or_o[choice - 1] == '-') {
                x_or_o[choice - 1] = 'X';
                break;
            } else if (i % 2 != 0 && x_or_o[choice - 1] == '-') {
                x_or_o[choice - 1] = 'O';
                break;
            } else {
                cout << "\nYou choice filled cage!";
                cout << "\nSelect again.\n";
                continue;
            }
        }

        // victory check
        if (x_or_o[0] == 'X' && x_or_o[1] == 'X' && x_or_o[2] == 'X') {
            cout << "X is win!\n";
            return 0;
        } else if (x_or_o[3] == 'X' && x_or_o[4] == 'X' && x_or_o[5] == 'X') {
            cout << "X is win!\n";
            return 0;
        } else if (x_or_o[6] == 'X' && x_or_o[7] == 'X' && x_or_o[8] == 'X') {
            cout << "X is win!\n";
            return 0;
        } else if (x_or_o[0] == 'X' && x_or_o[4] == 'X' && x_or_o[8] == 'X') {
            cout << "X is win!\n";
            return 0;
        } else if (x_or_o[1] == 'X' && x_or_o[4] == 'X' && x_or_o[7] == 'X') {
            cout << "X is win!\n";
            return 0;
        }  else if (x_or_o[2] == 'X' && x_or_o[4] == 'X' && x_or_o[6] == 'X') {
            cout << "X is win!\n";
            return 0;
        }

        if (x_or_o[0] == 'O' && x_or_o[1] == 'O' && x_or_o[2] == 'O') {
            cout << "O is win!\n";
            return 0;
        } else if (x_or_o[3] == 'O' && x_or_o[4] == 'O' && x_or_o[5] == 'O') {
            cout << "O is win!\n";
            return 0;
        } else if (x_or_o[6] == 'O' && x_or_o[7] == 'O' && x_or_o[8] == 'O') {
            cout << "O is win!\n";
            return 0;
        } else if (x_or_o[0] == 'O' && x_or_o[4] == 'O' && x_or_o[8] == 'O') {
            cout << "O is win!\n";
            return 0;
        } else if (x_or_o[1] == 'O' && x_or_o[4] == 'O' && x_or_o[7] == 'O') {
            cout << "O is win!\n";
            return 0;
        }  else if (x_or_o[2] == 'O' && x_or_o[4] == 'O' && x_or_o[6] == 'O') {
            cout << "O is win!\n";
            return 0;
        }
    }
    // if played in a draw
    cout << "\nYou played a draw.\n";
    cout << "Final desk:\n ";
    cout << "|-" << x_or_o[6] << "-" << "|-" << x_or_o[7] << "-|" << "-" << x_or_o[8] << "-|" << endl;
    cout << "|-" << x_or_o[3] << "-" << "|-" << x_or_o[4] << "-|" << "-" << x_or_o[5] << "-|" << endl;
    cout << "|-" << x_or_o[0] << "-" << "|-" << x_or_o[1] << "-|" << "-" << x_or_o[2] << "-|" << "\n";
    return 0;
}
