public class GridAddition {
    public static void main(String[] args) {
//        int[][] grid = {
//                {1, 1, 1, 1, 1, 1},
//                {1, 1, 1, 1, 1, 1},
//                {1, 1, 1, 1, 1, 1},
//                {1, 1, 1, 1, 1, 1},
//                {1, 1, 1, 1, 1, 1},
//                {1, 1, 1, 1, 1, 1},
//        };
        int[][] grid = {
                {1, 5, 1, 5, 1, 5},
                {3, 3, 2, 3, 3, 4},
                {2, 3, 4, 4, 3, 2},
                {2, 2, 3, 2, 2, 4},
                {2, 2, 4, 3, 4, 2},
                {4, 4, 4, 4, 2, 3}
        };

        int maxTotal = findMaxTotal(grid);
        int minTotal = findMinTotal(grid);

        printInputGrid(grid);

        System.out.println("The highest total is: " + maxTotal);
        System.out.println("The lowest total is: " + minTotal);
    }

    public static int findMaxTotal(int[][] grid) {
        int rows = grid.length;
        int cols = grid[0].length;

        // Copy the original grid to avoid modifying the input grid
        int[][] dp = new int[rows][cols];
        for (int i = 0; i < rows; i++) {
            System.arraycopy(grid[i], 0, dp[i], 0, cols);
        }

        // Start from the second-to-last row and update each element with the maximum sum
        for (int i = rows - 2; i >= 0; i--) {
            for (int j = 0; j < cols; j++) {
                int left = dp[i + 1][Math.max(0, j - 1)];
                int down = dp[i + 1][j];
                int right = dp[i + 1][Math.min(cols - 1, j + 1)];

                dp[i][j] += Math.max(left, Math.max(down, right));
            }
        }

        // Find the maximum total in the top row
        int maxTotal = Integer.MIN_VALUE;
        for (int j = 0; j < cols; j++) {
            maxTotal = Math.max(maxTotal, dp[0][j]);
        }

        return maxTotal;
    }

    public static int findMinTotal(int[][] grid) {
        int rows = grid.length;
        int cols = grid[0].length;

        // Copy the original grid to avoid modifying the input grid
        int[][] dp = new int[rows][cols];
        for (int i = 0; i < rows; i++) {
            System.arraycopy(grid[i], 0, dp[i], 0, cols);
        }

        // Start from the second-to-last row and update each element with the minimum sum
        for (int i = rows - 2; i >= 0; i--) {
            for (int j = 0; j < cols; j++) {
                int left = dp[i + 1][Math.max(0, j - 1)];
                int down = dp[i + 1][j];
                int right = dp[i + 1][Math.min(cols - 1, j + 1)];

                dp[i][j] += Math.min(left, Math.min(down, right));
            }
        }

        // Find the minimum total in the top row
        int minTotal = Integer.MAX_VALUE;
        for (int j = 0; j < cols; j++) {
            minTotal = Math.min(minTotal, dp[0][j]);
        }

        return minTotal;
    }

    public static void printInputGrid(int[][] grid) {
        System.out.println("Input Grid:");
        for (int[] row : grid) {
            for (int value : row) {
                System.out.print(value + " ");
            }
            System.out.println();
        }
        System.out.println();
    }
}
