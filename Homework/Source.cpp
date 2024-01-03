//haven't tested some aspects of it

#include <iostream>
#include <cstdlib>
#include<iomanip>
#include<cstring>
#include <windows.h>

//Помощта на интернет е използвана в методите, в които се среща оцветяване, т.е. createColourForSymbol() и printLayer()/printLayers(), както и отчасти в логиката за принтиране на отделните слоеве един върху друг.
//Интернет е използван и за разучаването на функционалността на rand() и неговата употреба.

//В момента програмата работи само за няколко слоя, като за да може да бъде изпълнена частта само за един слой трябва да се премахнат знаците за коментари, където е необходимо.

//глобални константи
const unsigned int MAX_ROWS_IN_LEVEL = 20;
const unsigned int MAX_COLS_IN_LEVEL = 20;
const unsigned int MAX_TILES_IN_EMPTY_ROW = 8;
const unsigned int MAX_NUM_OF_LAYERS = 10;

const int DEFAULT_COLOR = 7;



//общи методи, част от които се срещат често
char* createSymbolArray(unsigned int numberOfTypesOfTiles);
unsigned int generateRandomNumber(unsigned int beginningOfInterval, unsigned int endOfInterval);
int createColourForSymbol(char symbol, unsigned int numberOfTypesOfTiles, char* symbols);
char* toUpperStr(char command[5]);

//имплементация на методите
char* createSymbolArray(unsigned int numberOfTypesOfTiles) {
    char* symbols = new char[numberOfTypesOfTiles];

    for (size_t i = 0; i < numberOfTypesOfTiles; ++i) {
        std::cin >> symbols[i];
    }

    return symbols;
}

unsigned int generateRandomNumber(unsigned int beginningOfInterval, unsigned int endOfInterval) {
    return beginningOfInterval + rand() % (endOfInterval - beginningOfInterval + 1);
}

int createColourForSymbol(char symbol, unsigned int numberOfTypesOfTiles, char* symbols) {
    for (size_t i = 0; i < numberOfTypesOfTiles; ++i) {
        if (symbols[i] == symbol) {
            return i % 16;
        }
    }
    return DEFAULT_COLOR;
}

char* toUpperStr(char command[5]) {
    unsigned int len = strlen(command) + 1;

    for (size_t i = 0; i < len; ++i) {
        if (command[i] >= 97 && command[i] <= 122) {
            command[i] = command[i] - 32;
        }
    }

    return command;
}



//методи от подточка А, B и C за един слой
//void generateOneLayer(unsigned int typesOfTiles, char* symbols, char layer[MAX_ROWS_IN_LEVEL][MAX_COLS_IN_LEVEL]);
//void printLayer(char layer[MAX_ROWS_IN_LEVEL][MAX_COLS_IN_LEVEL], unsigned int numberOfTypesOfTiles, char* symbols);
//void playWithOneLayer(char layer[MAX_ROWS_IN_LEVEL][MAX_COLS_IN_LEVEL]);

//имплементация на методите
/* 
void generateOneLayer(unsigned int typesOfTiles, char* symbols, char layer[MAX_ROWS_IN_LEVEL][MAX_COLS_IN_LEVEL]) {
    unsigned int numOfSpecificTile;

    for (size_t i = 0; i < MAX_ROWS_IN_LEVEL; ++i) {
        for (size_t j = 0; j < MAX_COLS_IN_LEVEL; ++j) {
            layer[i][j] = ' ';
        }
    }

    for (size_t i = 0; i < typesOfTiles; ++i) {
        numOfSpecificTile = generateRandomNumber(1, MAX_ROWS_IN_LEVEL * MAX_COLS_IN_LEVEL);
        numOfSpecificTile -= numOfSpecificTile % 3;
        char symbolOnTile = symbols[i];

        for (size_t j = 0; j < typesOfTiles; ++j) {
            int generateRowIndex = generateRandomNumber(0, MAX_ROWS_IN_LEVEL - 1);
            int generateColIndex = generateRandomNumber(0, MAX_COLS_IN_LEVEL - 1);

            while (layer[generateRowIndex][generateColIndex] != ' ') {
                generateRowIndex = generateRandomNumber(0, MAX_ROWS_IN_LEVEL - 1);
                generateColIndex = generateRandomNumber(0, MAX_COLS_IN_LEVEL - 1);
            }

            layer[generateRowIndex][generateColIndex] = symbolOnTile;
        }
    }
}
*/

/*
void printLayer(char layer[MAX_ROWS_IN_LEVEL][MAX_COLS_IN_LEVEL], unsigned int numberOfTypesOfTiles, char* symbols) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    for (size_t i = 0; i < MAX_ROWS_IN_LEVEL; ++i) {
        for (size_t j = 0; j < MAX_COLS_IN_LEVEL; ++j) {
            char currentSymbol = layer[i][j];
            int color = createColourForSymbol(currentSymbol, numberOfTypesOfTiles, symbols);

            SetConsoleTextAttribute(hConsole, color);

            if (currentSymbol != ' ') {
                std::cout << std::setw(3) << "{" << currentSymbol << "}" << std::setw(3);
            }
            else {
                std::cout << std::setw(10) << " " << std::setw(3);
            }
        }
        std::cout << std::endl;
    }

    SetConsoleTextAttribute(hConsole, DEFAULT_COLOR);
} 
*/

/*
void playWithOneLayer(char layer[MAX_ROWS_IN_LEVEL][MAX_COLS_IN_LEVEL]) {
    bool gameOver = false;

    char newRow[MAX_TILES_IN_EMPTY_ROW];

    while (!gameOver) {
        std::cout << "Enter the index of the row and the column of your selected symbol: " << std::endl;
        unsigned int symbolRow, symbolCol;

        for (size_t i = 0; i < MAX_TILES_IN_EMPTY_ROW; ++i) {
            do {
                std::cout << "Symbol " << i + 1 << ": ";
                std::cin >> symbolRow >> symbolCol;
            } while (!std::cin || symbolRow <= 0 || symbolRow > MAX_ROWS_IN_LEVEL || symbolCol <= 0 || symbolCol > MAX_COLS_IN_LEVEL);

            newRow[i] = layer[symbolRow - 1][symbolCol - 1];

            if (newRow[i] == ' ') {
                std::cout << "Choose a tile with a symbol!" << std::endl;
                i--;
            }
            else {
                layer[symbolRow - 1][symbolCol - 1] = ' ';
            }
        }

        for (size_t newRowInd = 0; newRowInd < MAX_TILES_IN_EMPTY_ROW - 2; ++newRowInd) {
            if (newRow[newRowInd] == newRow[newRowInd + 1] && newRow[newRowInd] == newRow[newRowInd + 2]) {
                for (size_t nRI2 = newRowInd; nRI2 < MAX_TILES_IN_EMPTY_ROW - 3; ++nRI2) {
                    newRow[nRI2] = newRow[nRI2 + 3];
                }
            }
            else {
                char answer[4];
                std::cout << "Game over! Do you want to restart the game?" << std::endl;
                std::cout << "(Answer with \"Yes\" or \"No\".)" << std::endl;
                std::cout << "Answer: ";
                std::cin.getline(answer, 4);
                if (!std::cin || (strcmp(answer, "Yes") != 0 && strcmp(answer, "No") != 0)) {
                    std::cout << "Invalid answer. Answer using either \"Yes\" or \"No\"." << std::endl;
                }
                else {
                    if (strcmp(answer, "YES") == 0) {
                        playWithOneLayer(layer);
                    }
                    else {
                        break;
                    }
                }
            }
        }

        gameOver = true;
        for (size_t j = 0; j < MAX_ROWS_IN_LEVEL; ++j) {
            for (size_t l = 0; l < MAX_COLS_IN_LEVEL; ++l) {
                if (layer[j][l] != ' ') {
                    gameOver = false;
                    break;
                }
            }
            if (!gameOver) {
                break;
            }
        }
    }
}
*/

//методи за игра с повече слоеве
void generateLayers(unsigned int numberOfTypesOfTiles, char* symbols, char layer[MAX_NUM_OF_LAYERS][MAX_ROWS_IN_LEVEL][MAX_COLS_IN_LEVEL], unsigned int numberOfLayers);
void printLayers(char layer[MAX_NUM_OF_LAYERS][MAX_ROWS_IN_LEVEL][MAX_COLS_IN_LEVEL], unsigned int numberOfTypesOfTiles, char* symbols, unsigned int numberOfLayers);

void generateLayers(unsigned int numberOfTypesOfTiles, char* symbols, char layer[MAX_NUM_OF_LAYERS][MAX_ROWS_IN_LEVEL][MAX_COLS_IN_LEVEL], unsigned int numberOfLayers) {
    unsigned int numOfSpecificTile;

    for (size_t layerIndex = 0; layerIndex < numberOfLayers; ++layerIndex) {
        for (size_t i = 0; i < MAX_ROWS_IN_LEVEL; ++i) {
            for (size_t j = 0; j < MAX_COLS_IN_LEVEL; ++j) {
                layer[layerIndex][i][j] = ' ';
            }
        }

        for (size_t i = 0; i < numberOfTypesOfTiles; ++i) {
            numOfSpecificTile = generateRandomNumber(1, MAX_ROWS_IN_LEVEL * MAX_COLS_IN_LEVEL);
            numOfSpecificTile -= numOfSpecificTile % 3;
            char symbolOnTile = symbols[i];

            for (size_t j = 0; j < numberOfTypesOfTiles; ++j) {
                int generateRowIndex = generateRandomNumber(0, MAX_ROWS_IN_LEVEL - 1);
                int generateColIndex = generateRandomNumber(0, MAX_COLS_IN_LEVEL - 1);

                while (layer[layerIndex][generateRowIndex][generateColIndex] != ' ') {
                    generateRowIndex = generateRandomNumber(0, MAX_ROWS_IN_LEVEL - 1);
                    generateColIndex = generateRandomNumber(0, MAX_COLS_IN_LEVEL - 1);
                }

                layer[layerIndex][generateRowIndex][generateColIndex] = symbolOnTile;
            }
        }
    }
}

void printLayers(char layer[MAX_NUM_OF_LAYERS][MAX_ROWS_IN_LEVEL][MAX_COLS_IN_LEVEL], unsigned int desiredTypesOfTiles, char* symbols, unsigned int inputNumOfLayers) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    for (size_t i = 0; i < MAX_ROWS_IN_LEVEL; ++i) {
        for (size_t l = 0; l < MAX_COLS_IN_LEVEL; ++l) {
            for (int layerIndex = inputNumOfLayers - 1; layerIndex >= 0; --layerIndex) {
                char currentSymbol = layer[layerIndex][i][l];
                int color = createColourForSymbol(currentSymbol, desiredTypesOfTiles, symbols);

                SetConsoleTextAttribute(hConsole, color);

                if (currentSymbol != ' ') {
                    std::cout << std::setw(3) << "{" << currentSymbol << "}" << std::setw(3);
                    break;
                }
            }

            std::cout << std::setw(10) << " " << std::setw(3);
        }
        std::cout << std::endl;
    }

    SetConsoleTextAttribute(hConsole, DEFAULT_COLOR);
}


void playGame(char layers[MAX_NUM_OF_LAYERS][MAX_ROWS_IN_LEVEL][MAX_COLS_IN_LEVEL], unsigned int numOfTypesOfTiles, char* symbols, unsigned int numOfLayers) {
    bool gameOver = false;
    char newRow[MAX_TILES_IN_EMPTY_ROW];
    int currentLayer = numOfLayers - 1;

    while (!gameOver) {
        std::cout << "Enter the index of the row and the column of your selected symbol: " << std::endl;
        unsigned int symbolRow, symbolCol;

        for (size_t i = 0; i < MAX_TILES_IN_EMPTY_ROW; ++i) {
            do {
                std::cout << "Symbol " << i + 1 << ": ";
                std::cin >> symbolRow >> symbolCol;
            } while (!std::cin || symbolRow <= 0 || symbolRow > MAX_ROWS_IN_LEVEL || symbolCol <= 0 || symbolCol > MAX_COLS_IN_LEVEL);

            newRow[i] = layers[currentLayer][symbolRow - 1][symbolCol - 1];

            if (newRow[i] == ' ') {
                std::cout << "Choose a tile with a symbol!" << std::endl;
                i--;
            }
            else {
                layers[currentLayer][symbolRow - 1][symbolCol - 1] = ' ';
            }
        }

        for (size_t newRowInd = 0; newRowInd < MAX_TILES_IN_EMPTY_ROW - 2; ++newRowInd) {
            if (newRow[newRowInd] == newRow[newRowInd + 1] && newRow[newRowInd] == newRow[newRowInd + 2]) {
                for (size_t nRI2 = newRowInd; nRI2 < MAX_TILES_IN_EMPTY_ROW - 3; ++nRI2) {
                    newRow[nRI2] = newRow[nRI2 + 3];
                }
            }
            else {
                char answer[4];
                std::cout << "Game over! Do you want to restart the game?" << std::endl;
                std::cout << "(Answer with \"Yes\" or \"No\".)" << std::endl;
                std::cout << "Answer: ";
                std::cin.getline(answer, 4);
                if (!std::cin || (strcmp(answer, "Yes") != 0 && strcmp(answer, "No") != 0)) {
                    std::cout << "Invalid answer. Answer using either \"Yes\" or \"No\"." << std::endl;
                }
                else {
                    if (strcmp(answer, "YES") == 0) {
                        playGame(layers, numOfTypesOfTiles, symbols, numOfLayers);
                    }
                    else {
                        break;
                    }
                }
            }
        }

        gameOver = true;
        for (size_t j = 0; j < MAX_ROWS_IN_LEVEL; ++j) {
            for (size_t l = 0; l < MAX_COLS_IN_LEVEL; ++l) {
                if (layers[numOfLayers - 1][j][l] != ' ') {
                    gameOver = false;
                    break;
                }
            }
            if (!gameOver) {
                break;
            }
        }
    }

    std::cout << std::endl;

    std::cout << "Navigate your game! Enter a command (\"DOWN\" , \"UP\" or \"EXIT\"): ";
    char command[5];
    do {
        std::cin.getline(command, 5);
    } while (!std::cin || (strcmp(toUpperStr(command), "DOWN") != 0 && strcmp(toUpperStr(command), "UP") != 0 && strcmp(toUpperStr(command), "EXIT") != 0));

    if (strcmp(toUpperStr(command), "DOWN") == 0) {
        if (currentLayer > 0 && currentLayer < numOfLayers - 1) {
            currentLayer--;
            printLayers(layers, numOfTypesOfTiles, symbols, numOfLayers - 2);
        }
        else if (currentLayer == 0) {
            printLayers(layers, numOfTypesOfTiles, symbols, 1);
        }
    }
    else if (strcmp(toUpperStr(command), "UP") == 0) {
        if (currentLayer >= 0 && currentLayer < numOfLayers - 2) {
            currentLayer++;
            printLayers(layers, numOfTypesOfTiles, symbols, numOfLayers + 1);
        }
        else if (currentLayer == numOfLayers - 1) {
            printLayers(layers, numOfTypesOfTiles, symbols, numOfLayers - 1);
        }
    }
    else {
        printLayers(layers, numOfTypesOfTiles, symbols, numOfLayers);
    }
}


int main() {
    std::cout << "Welcome to \"Match The Tiles: The Game\"!\nBefore we proceed, how many layers do you want your game to consist of?\(Please, enter a number between 1 and 10.)" << std::endl;
    std::cout << "Your value: ";
    unsigned int numberOfLayers;
    do {
        std::cin >> numberOfLayers;
    } while (!std::cin || numberOfLayers < 1 || numberOfLayers > 10);

    std::cout << std::endl;

    std::cout << "Enter the number of symbols that you're going to use (8 to 20 symbols): ";
    int numberOfSymbols;

    do {
        std::cin >> numberOfSymbols;
    } while (!std::cin || numberOfSymbols < 8 || numberOfSymbols > 20);

    std::cout << "Enter all of the symbols on your tiles (!enter them without commas by pre): ";
    char* symbolArray = createSymbolArray(numberOfSymbols);

    char layers[MAX_NUM_OF_LAYERS][MAX_ROWS_IN_LEVEL][MAX_COLS_IN_LEVEL];

    generateLayers(numberOfSymbols, symbolArray, layers, numberOfLayers);

    std::cout << std::endl;

    std::cout << "Let us begin the game:" << std::endl;

    printLayers(layers, numberOfSymbols, symbolArray, numberOfLayers);

    std::cout << std::endl;

    playGame(layers, numberOfSymbols, symbolArray, numberOfLayers);

    //Само за един слой
    //char layer[MAX_ROWS_IN_LEVEL][MAX_COLS_IN_LEVEL];
    //generateOneLayer(numberOfSymbols, symbolArray, layer);
    //std::cout << std::endl;
    //std::cout << "Your layer:" << std::endl;
    //printLayer(layer, numberOfSymbols, symbolArray);
    //playWithOneLayer(layer);
    
    delete[] symbolArray;

    return 0;
}
