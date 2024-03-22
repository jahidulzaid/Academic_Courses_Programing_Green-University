#include <iostream>
#include <algorithm>

int main() {
    const int rows = 6;
    const int cols = 6;

    int grid[rows][cols];

    // Input grid from the user
    std::cout << "Enter the elements of the grid (row-wise):" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
            std::cin >> grid[i][j];
        }
    }

    // Initialize matrices for highest and lowest totals
    int highestTotals[rows][cols] = {0};
    int lowestTotals[rows][cols] = {0};

    // Initialize the first row of both matrices
    std::copy(std::begin(grid[0]), std::end(grid[0]), std::begin(highestTotals[0]));
    std::copy(std::begin(grid[0]), std::end(grid[0]), std::begin(lowestTotals[0]));

    // Dynamic Programming - Fill the matrices
    for (int i = 1; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Calculate highest total
            highestTotals[i][j] = grid[i][j] + std::max(
                (j > 0) ? highestTotals[i - 1][j - 1] : 0,
                std::max(highestTotals[i - 1][j], (j < cols - 1) ? highestTotals[i - 1][j + 1] : 0)
            );

            // Calculate lowest total
            lowestTotals[i][j] = grid[i][j] + std::min(
                (j > 0) ? lowestTotals[i - 1][j - 1] : 0,
                std::min(lowestTotals[i - 1][j], (j < cols - 1) ? lowestTotals[i - 1][j + 1] : 0)
            );
        }
    }

    // Find the highest and lowest totals in the last row
    int highestTotal = *std::max_element(std::begin(highestTotals[rows - 1]), std::end(highestTotals[rows - 1]));
    int lowestTotal = *std::min_element(std::begin(lowestTotals[rows - 1]), std::end(lowestTotals[rows - 1]));

    std::cout << "Highest Total: " << highestTotal << std::endl;
    std::cout << "Lowest Total: " << lowestTotal << std::endl;

    return 0;
}
