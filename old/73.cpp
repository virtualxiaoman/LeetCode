//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    void setZeroes(vector<vector<int>>& matrix) {
//        int m = matrix.size();
//        int n = matrix[0].size();
//        vector<int> zero1;
//        vector<int> zero2;
//        for(int i=0; i<m; i++)
//        {
//            for(int j=0; j<n; j++)
//            {
//                if(matrix[i][j] == 0)
//                {
//                    zero1.push_back(i);
//                    zero2.push_back(j);
//                }
//            }
//        }
//        // 通过zero1和zero2将对应置为0
//    }
//};
//
//int main()
//{
//    vector<vector<int>> matrix = {{1, 1, 1},
//                                  {1, 0, 1},
//                                  {1, 1, 1},
//                                  {1, 1, 1}};
//    Solution s = Solution();
//    s.setZeroes(matrix);
//    return 0;
//}
