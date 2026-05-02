// You are given an integer array cost where cost[i] is the cost of ith step on a staircase. Once you pay the cost, you can either climb one or two steps.

// You can either start from the step with index 0, or the step with index 1.
// Return the minimum cost to reach the top of the floor.

// Example 1:

// Input: cost = [10,15,20]
// Output: 15
// Explanation: You will start at index 1.
// - Pay 15 and climb two steps to reach the top.
// The total cost is 15.

#include<bits/stdc++.h>
using namespace std ;
//brute force 
class Solution {
public:
    
    void helper(vector<int>& cost,long currCost,long &minCost,int currInd){
      if( currInd >= cost.size()){
        minCost = min(minCost, currCost) ;
        return ;
      }
      helper(cost,currCost+cost[currInd],minCost,currInd+1);
      helper(cost,currCost+cost[currInd],minCost,currInd+2);

    }
    int minCostClimbingStairs(vector<int>& cost) {
        long minCost = INT_MAX ;
        helper(cost,0,minCost,0);
        helper(cost,0,minCost,1);
        return minCost ;
    }
};

//optimised
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();

        int prev2 = cost[0];
        int prev1 = cost[1];

        for (int i = 2; i < n; i++) {

            int curr = cost[i] + min(prev1, prev2);

            prev2 = prev1;
            prev1 = curr;
        }

        return min(prev1, prev2);
    }
};