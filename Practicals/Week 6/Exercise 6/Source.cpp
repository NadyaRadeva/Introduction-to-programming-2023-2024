#include <iostream>
#include <cstdlib>
#include <ctime>

void generateSecretNumber(int secretNumber[], int n) {
    int digits[10];
    for (int i = 0; i < 10; ++i) {
        digits[i] = i;
    }

    for (int i = 0; i < n; ++i) {
        int index = rand() % (10 - i);
        secretNumber[i] = digits[index];
        for (int j = index; j < 9 - i; ++j) {
            digits[j] = digits[j + 1];
        }
    }
}

void checkGuess(const int secretNumber[], const int guess[], int n) {
    int bulls = 0;
    int cows = 0;
  
    for (int i = 0; i < n; ++i) {
        if (secretNumber[i] == guess[i]) {
            bulls++;
        } else {
            for (int j = 0; j < n; ++j) {
                if (secretNumber[i] == guess[j]) {
                    cows++;
                    break;
                }
            }
        }
    }

    std::cout << "Бикове: " << bulls << ", Крави: " << cows << std::endl;
}

int main() {
    srand(static_cast<unsigned>(time(nullptr)));

    std::cout << "Добре дошли в играта 'Бикове и Крави'!" << std::endl;

    int n;
    std::cout << "Въведете брой цифри в тайното число: ";
    std::cin >> n;

    int secretNumber[31];
    generateSecretNumber(secretNumber, n);

    int attempts = 0;
    const int maxAttempts = 10;

    while (attempts < maxAttempts) {
        int guess[31];
        std::cout << "Опит " << attempts + 1 << ": ";
        for (int i = 0; i < n; ++i) {
            std::cin >> guess[i];
        }

        checkGuess(secretNumber, guess, n);

        bool correctGuess = true;
        for (int i = 0; i < n; ++i) {
            if (secretNumber[i] != guess[i]) {
                correctGuess = false;
                break;
            }
        }

        if (correctGuess) {
            std::cout << "Поздравления! Познахте тайното число!" << std::endl;
            break;
        }

        attempts++;
    }

    if (attempts == maxAttempts) {
        std::cout << "Загубихте! Тайното число беше: ";
        for (int i = 0; i < n; ++i) {
            std::cout << secretNumber[i];
        }
        std::cout << std::endl;
    }

    return 1;
}
