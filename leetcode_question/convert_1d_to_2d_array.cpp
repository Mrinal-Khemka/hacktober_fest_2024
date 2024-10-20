🎯 Problem Explanation:
We are given a 1D array original and two integers m and n, representing the number of rows and columns, respectively, for a output 2D array. Our goal is to reshape the 1D array into a 2D array with dimensions m x n. If it's impossible to reshape the array, i.e., the product of m and n is not equal the length of the original array, we should return an empty array.

🔍 Methods To Solve This Problem:
This post covers the following approaches: [Time complexity, Space complexity]

Simple Simulation [O(m∗n), O(m∗n)]
Optimized Simulation [O(m∗n), O(m∗n)]
Method 1 - Simple Simulation:
🤔 Intuition:
To convert a 1D array into a 2D array, try to simulate adding each element in result array.
To do this we need to map each element in the 1D array to the corresponding element in the 2D array. This can be achieved by calculating the correct row and column indices for each element. The element at index k in the 1D array should be placed in row i = k // n and column j = k % n in the 2D array.

🧠 Approach:
First, we check if reshaping is possible by verifying that m * n equals the length of the original array. If not, we return an empty array.
We then initialize an m x n result array filled with zeros.
We iterate through each position in the result array, using the index formula to fill it with the corresponding value from the original array.
Finally, we return the populated 2D array.
📒 Complexity:
⏰ Time complexity: O(m∗n)
🧺 Space complexity: O(m∗n)
🧑‍💻 Code :CPP
class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if (m * n != original.size()) {
            return {};
        }
        
        vector<vector<int>> res(m, vector<int>(n));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                res[i][j] = original[i * n + j];
            }
        }

        return res;
    }
};
