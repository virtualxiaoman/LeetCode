//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    int longestCommonSubsequence(string text1, string text2) {
//        int length1 = text1.size();
//        int length2 = text2.size();
//        vector<vector<int>> c(length1 + 1, vector<int>(length2 + 1, 0));
//        for(int i=1; i<=length1; i++)
//        {
//            for(int j=1; j<=length2; j++)
//            {
//                if (text1[i-1]==text2[j-1])  // 如果X_i = Y_j
//                {
//                    c[i][j] = c[i-1][j-1] + 1;
//                }
//                else
//                {
//                    c[i][j] = max(c[i-1][j], c[i][j-1]);
//                }
//            }
//        }
//        return c[length1][length2];
//    }
//};
//
//int main()
//{
//    string s1 = "abcde";
//    string s2 = "ace";
//    Solution s = Solution();
//    int ans = s.longestCommonSubsequence(s1, s2);
//    cout << ans;
//}