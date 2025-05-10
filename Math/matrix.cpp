#include <bits/stdc++.h>
using namespace std;

class Matrix {
public:
    void set(vector<vector<int>>& A) {
        cout << "Enter the elements of the matrix:" << endl;
        for (int i = 0; i < A.size(); i++) {
            for (int j = 0; j < A.size(); j++) {
                cout << "A[" << i << "][" << j << "] : ";
                cin >> A[i][j];
            }
        }
    }

    void display(const vector<vector<int>>& A) {
        for (int i = 0; i < A.size(); i++) {
            for (int j = 0; j < A[i].size(); j++) {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }

    void transpose(vector<vector<int>>& A) {
        for (int i = 0; i < A.size(); i++) {
            for (int j = i + 1; j < A.size(); j++) { // Traverse upper triangular matrix
                swap(A[i][j], A[j][i]);
            }
        }
    }

    void rotateImage(vector<vector<int>> &A) {
         for (int i = 0; i < A.size(); i++) {
            for (int j = i + 1; j < A.size(); j++) { // Traverse upper triangular matrix
                swap(A[i][j], A[j][i]);
            }
        }
        for (int i = 0; i < A.size(); i++) {
            reverse(A[i].begin(), A[i].end()); // Reverse each row
        }
    }
    //search element the in 2d matrix in O(log(m+n))
    bool search(vector<vector<int>>&matrix,int target){
       if(matrix.size()==0 && matrix[0].size()==0)return false ;
       int l=0;
       int row= matrix.size();
       int col= matrix[0].size();
       int r = row*col-1;
       while(l<=r){
        int mid = l+(r-l)/2;
        int midValue = matrix[mid/col][mid%col];
        if(midValue==target){
            return true;
        }else if(midValue>target){
            r=mid-1;
        }else{
            l=mid+1;
        }
       }
       return false ;
    }
};

int main() {
    vector<vector<int>> matrix(3, vector<int>(3)); // 3x3 matrix
    Matrix obj;

    obj.set(matrix);
    cout << "Original Matrix:\n";
    obj.display(matrix);

    // cout << "Transpose of Matrix:\n";
    // obj.transpose(matrix);
    // obj.display(matrix);

    // cout << "Rotated Image (90° Clockwise):\n";
    // obj.rotateImage(matrix);
    // obj.display(matrix);
    
    cout<<"the element 3 exist in matrix or not => "<<obj.search(matrix,3);
    return 0;
}
