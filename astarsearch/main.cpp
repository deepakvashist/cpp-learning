#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>

std::vector<std::vector<int> > loadBoardFile(std::string filePath) {
    std::vector<std::vector<int> > board;

    std::ifstream boardFile(filePath);
    if (boardFile) {
        std::string boardFileLine;
        while(getline(boardFile, boardFileLine)) {
            std::istringstream boardFileLineStream(boardFileLine);
            std::vector<int> boardLineStates;

            while (!boardFileLineStream.eof()) {
                int boardState;
                char boardExtraChar;

                boardFileLineStream >> boardState >> boardExtraChar;
                boardLineStates.push_back(boardState);
            }

            board.push_back(boardLineStates);
        }
    }

    return board;
}

void printBoard(const std::vector<std::vector<int> > &board) {
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[i].size(); j++) {
            std::cout << board[i][j] << "   ";
        }

        std::cout << "\n";
    }
}

int heuristicManhattanDistance(int xa, int ya, int xb, int yb) {
    return std::abs(xb - xa) + std::abs(yb - xb);
}

std::vector<std::vector<int> > search(std::vector<std::vector<int> > &board, int initPoints[2], int goalPoints[2]) {
    std::vector<std::vector<int> > solution;

    std::cout << "No path found!\n";

    return solution;
}

int main ()
{
    std::vector<std::vector<int> > board = loadBoardFile("/Users/deepak/Projects/Deepak/cpp-learning/astarsearch/1.board");

    int initPoints[2]{0, 0};
    int goalPoints[2]{4, 5};

    std::vector<std::vector<int> > searchResult = search(board, initPoints, goalPoints);

    printBoard(board);
}
