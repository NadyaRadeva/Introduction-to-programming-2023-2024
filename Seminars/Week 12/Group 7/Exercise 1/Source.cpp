#include <iostream>

void findCoordinatesAndPoints(double (*points)[2], size_t pointsNumber);

void findCoordinatesAndPoints(double (*points)[2], size_t pointsNumber) {
    if (pointsNumber == 0) {
        std::cout << "No points: Exiting!" << std::endl;
        return;
    }

    double minX = points[0][0], maxX = points[0][0];
    double minY = points[0][1], maxY = points[0][1];

    for (size_t i = 1; i < pointsNumber; i++) {
        if (points[i][0] < minX) {
            minX = points[i][0];
        }
        if (points[i][0] > maxX) {
            maxX = points[i][0];
        }
        if (points[i][1] < minY) {
            minY = points[i][1];
        }
        if (points[i][1] > maxY) {
            maxY = points[i][1];
        }
    }

    std::cout << minX << " " << maxY << " ";
    std::cout << (maxX - minX) << " " << (maxY - minY) << std::endl;
}

int main() {
    unsigned int pointsNumber;
    std::cout << "Enter the number of your points: ";
    std::cin >> pointsNumber;
    
    if (!std::cin || pointsNumber <= 0) {
        std::cerr << "Invalid input for the number of points. Exiting...\n";
        return -1;
    }

    double (*points)[2] = new double[pointsNumber][2];

    std::cout << "Enter the coordinates of your points: ";
    for (size_t i = 0; i < pointsNumber; ++i) {
        std::cin >> points[i][0] >> points[i][1];
        
        if (!std::cin) {
            std::cerr << "Invalid input for coordinates. Exiting...\n";
            delete[] points;
            return -1;
        }
    }

    findCoordinatesAndPoints(points, pointsNumber);

    delete[] points;

    return 0;
}
