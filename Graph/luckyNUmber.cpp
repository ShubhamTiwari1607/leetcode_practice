// Given an m x n matrix of distinct numbers, return all lucky numbers in the matrix in any order.

// A lucky number is an element of the matrix such that it is the minimum element in its row and maximum in its column

#include<bits/stdc++.h>G
using namespace std;

typedef vector<int> vi ;
#define pb push_back
class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int m = matrix.size() ;
        int n = matrix[0].size() ;
        vi res;
        vi minR(m,INT_MAX);
        vi maxC(n,INT_MIN);

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                minR[i] = min(matrix[i][j],minR[i]);
                maxC[j] = max(maxC[j],matrix[i][j]);
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==minR[i] && matrix[i][j]==maxC[j]){
                    res.pb(matrix[i][j]);
                }
            }
        }

       return res ;
    }
};