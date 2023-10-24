//Kadane’s Algorithm is an iterative dynamic programming algorithm. It calculates the maximum sum subarray ending at a particular position by using the maximum sum subarray ending at the previous position. Follow the below steps to solve the problem.
//CPP Code
#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int maximumSubarraySum(vector < int > arr) {
  int n = arr.size();
  int maxSum = INT_MIN;

  for (int i = 0; i <= n - 1; i++) {
    int currSum = 0;
    for (int j = i; j <= n - 1; j++) {
      currSum += arr[j];
      if (currSum > maxSum) {
        maxSum = currSum;
      }
    }
  }

  return maxSum;
}
int main() {
    // Your code goes here;
    vector<int> a = {1, 3, 8, -2, 6, -8, 5};
    cout << maximumSubarraySum(a) << endl;
    return 0;
}
