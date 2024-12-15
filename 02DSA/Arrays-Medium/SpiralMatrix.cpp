//  Given a Matrix, print the given matrix in spiral order.

// initialise 4 variables :- rowBegin pointing at row 0th, colBegin pointing at 0th column, rowEnd pointing at last row and colEnd pointing at last Column.
// implement a while loop such that rowBegin<=rowEnd and colBegin<=colEnd
// in the loop implement 4 different for loops each traversing in a particular direction with the order being,
// 1st loop traverses to right
// 2nd loop traverses to down
// 3rd loop traverses to left
// 4th loop traverses to top
#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rowBegin=0,colBegin=0,rowEnd=matrix.size()-1,colEnd=matrix[0].size()-1;
        vector<int> output;
        while(rowBegin<=rowEnd && colBegin<=colEnd){
            // traversing right
            for(int i=colBegin;i<=colEnd;i++){
                output.push_back(matrix[rowBegin][i]);
            }
            rowBegin++;
            // traversing down
            for(int i=rowBegin;i<=rowEnd;i++){
                output.push_back(matrix[i][colEnd]);
            }
            colEnd--;
            // traversing left
            if(rowBegin<=rowEnd){
                for(int i=colEnd;i>=colBegin;i--){
                    output.push_back(matrix[rowEnd][i]);
                }
                            rowEnd--;
            }

            // traversing up
            if(colBegin<=colEnd){
                for(int i=rowEnd;i>=rowBegin;i--){
                    output.push_back(matrix[i][colBegin]);
                }
                   colBegin++;
            }
         
        }
        return output;
    }
};