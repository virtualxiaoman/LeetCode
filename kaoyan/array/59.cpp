//// 给你一个正整数 n ，生成一个包含 1 到 n2 所有元素，且元素按顺时针顺序螺旋排列的 n x n 正方形矩阵 matrix 。
//// 输入：n = 3
//// 输出：[[1,2,3],[8,9,4],[7,6,5]]
//
//// Created by virtual小满 on 2025/3/21.
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//    vector<vector<int>> generateMatrix(int n) {
//        int cur = 1, n2 = n * n;  // cur是当前生成的元素
//        int turn = 0;  // 当前轮次
//        vector<vector<int>> ans(n, vector<int>(n, 0));
//        for (; cur <= n2; turn++) {
//            for (int i = turn; i <= n - 1 - turn; i++)
//                ans[turn][i] = cur++;
//            for (int i = turn + 1; i <= n - 1 - turn; i++)
//                ans[i][n - 1 - turn] = cur++;
//            for (int i = n - 2 - turn; i >= turn; i--)
//                ans[n - 1 - turn][i] = cur++;
//            for (int i = n - 2 - turn; i >= turn + 1; i--)
//                ans[i][turn] = cur++;
//        }
//        return ans;
//    }
//};
//
//int main() {
//    Solution s;
//    vector<vector<int>> ans = s.generateMatrix(5);
//    for (auto &an: ans) { // 遍历每一行
//        for (int j: an) { // 遍历每一列
//            cout << j << " ";
//        }
//        cout << endl;
//    }
//    return 0;
//}