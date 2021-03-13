#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>

std::vector<std::vector<int> > readAndGetBoardData(std::string boardFilePath)
{
    std::vector<std::vector<int> > board;

    std::ifstream boardFile(boardFilePath);

    if (boardFile) {
        std::string boardLine;

        while (getline(boardFile, boardLine)) {
            std::istringstream boardLineStream(boardLine);
            std::vector<int> boardLineInstructions;

            while (!boardLineStream.eof()) {
                int boardState;
                char boardExtraChar;

                boardLineStream >> boardState >> boardExtraChar;

                boardLineInstructions.push_back(boardState);
            }

            board.push_back(boardLineInstructions);
        }
    }

    return board;
}

int main()
{
    std::vector<std::vector<int> > board = readAndGetBoardData("./1.board");

    for (int i = 0; i < board.size(); i++) {
        for (int x = 0; x < board[i].size(); x++) {
            std::cout << board[i][x];
        }

        std::cout << "\n";
    }
}
