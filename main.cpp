#include <iostream>
#include <cstdlib>
#include <ctime>

class TicTacToe {
    public:
        TicTacToe() {
            // Initialize board with empty spaces
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    board[i][j] = ' ';
                }
            }
        }

        void playGame() {
            // Play the game until it's a draw or a player wins
            int moves = 0;
            char currentPlayer = 'X';
            while (moves < 9) {
                displayBoard();
                makeMove(currentPlayer);
                if (checkWin(currentPlayer)) {
                    std::cout << currentPlayer << " wins!" << std::endl;
                    break;
                }
                moves++;
                currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
            }
            if (moves == 9) {
                std::cout << "Draw!" << std::endl;
            }
        }

    private:
        char board[3][3];

        void displayBoard() {
            std::cout << "   0  1  2" << std::endl;
            for (int i = 0; i < 3; i++) {
                std::cout << i << " ";
                for (int j = 0; j < 3; j++) {
                    std::cout << "|" << board[i][j];
                }
                std::cout << "|" << std::endl;
            }
        }

        void makeMove(char player) {
            int row, col;
            std::cout << player &#8203;`oaicite:{"index":0,"invalid_reason":"Malformed citation << \"'s turn. Enter row and col: \";\n            std::cin >> row >>"}`&#8203; col;
            board[row][col] = player;
        }

        bool checkWin(char player) {
            // Check rows
            for (int i = 0; i < 3; i++) {
                if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
                    return true;
                }
            }
            // Check columns
            for (int j = 0; j < 3; j++) {
                if (board[0][j] == player && board[1][j] == player && board[2][j] == player) {
                    return true;
                }
            }
            // Check diagonals
            if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
                return true;
            }
            if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
                return true;
            }
            return false;
        }
};

int main() {
    TicTacToe game;
    game.playGame();
    return 0;
}
